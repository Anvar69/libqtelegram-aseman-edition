// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatparticipants.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

ChatParticipants::ChatParticipants(ChatParticipantsType classType, InboundPkt *in) :
    m_chatId(0),
    m_flags(0),
    m_version(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ChatParticipants::ChatParticipants(InboundPkt *in) :
    m_chatId(0),
    m_flags(0),
    m_version(0),
    m_classType(typeChatParticipantsForbidden)
{
    fetch(in);
}

ChatParticipants::ChatParticipants(const Null &null) :
    TelegramTypeObject(null),
    m_chatId(0),
    m_flags(0),
    m_version(0),
    m_classType(typeChatParticipantsForbidden)
{
}

ChatParticipants::~ChatParticipants() {
}

void ChatParticipants::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 ChatParticipants::chatId() const {
    return m_chatId;
}

void ChatParticipants::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 ChatParticipants::flags() const {
    return m_flags;
}

void ChatParticipants::setParticipants(const QList<ChatParticipant> &participants) {
    m_participants = participants;
}

QList<ChatParticipant> ChatParticipants::participants() const {
    return m_participants;
}

void ChatParticipants::setSelfParticipant(const ChatParticipant &selfParticipant) {
    m_selfParticipant = selfParticipant;
}

ChatParticipant ChatParticipants::selfParticipant() const {
    return m_selfParticipant;
}

void ChatParticipants::setVersion(qint32 version) {
    m_version = version;
}

qint32 ChatParticipants::version() const {
    return m_version;
}

bool ChatParticipants::operator ==(const ChatParticipants &b) const {
    return m_classType == b.m_classType &&
           m_chatId == b.m_chatId &&
           m_flags == b.m_flags &&
           m_participants == b.m_participants &&
           m_selfParticipant == b.m_selfParticipant &&
           m_version == b.m_version;
}

void ChatParticipants::setClassType(ChatParticipants::ChatParticipantsType classType) {
    m_classType = classType;
}

ChatParticipants::ChatParticipantsType ChatParticipants::classType() const {
    return m_classType;
}

bool ChatParticipants::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatParticipantsForbidden: {
        m_flags = in->fetchInt();
        m_chatId = in->fetchInt();
        if(m_flags & 1<<0) {
            m_selfParticipant.fetch(in);
        }
        m_classType = static_cast<ChatParticipantsType>(x);
        return true;
    }
        break;
    
    case typeChatParticipants: {
        m_chatId = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_participants_length = in->fetchInt();
        m_participants.clear();
        for (qint32 i = 0; i < m_participants_length; i++) {
            ChatParticipant type;
            type.fetch(in);
            m_participants.append(type);
        }
        m_version = in->fetchInt();
        m_classType = static_cast<ChatParticipantsType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChatParticipants::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatParticipantsForbidden: {
        out->appendInt(m_flags);
        out->appendInt(m_chatId);
        m_selfParticipant.push(out);
        return true;
    }
        break;
    
    case typeChatParticipants: {
        out->appendInt(m_chatId);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_participants.count());
        for (qint32 i = 0; i < m_participants.count(); i++) {
            m_participants[i].push(out);
        }
        out->appendInt(m_version);
        return true;
    }
        break;
    
    default:
        return false;
    }
}


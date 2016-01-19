// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "encryptedchat.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

EncryptedChat::EncryptedChat(EncryptedChatType classType, InboundPkt *in) :
    m_accessHash(0),
    m_adminId(0),
    m_date(0),
    m_id(0),
    m_keyFingerprint(0),
    m_participantId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

EncryptedChat::EncryptedChat(InboundPkt *in) :
    m_accessHash(0),
    m_adminId(0),
    m_date(0),
    m_id(0),
    m_keyFingerprint(0),
    m_participantId(0),
    m_classType(typeEncryptedChatEmpty)
{
    fetch(in);
}

EncryptedChat::EncryptedChat(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_adminId(0),
    m_date(0),
    m_id(0),
    m_keyFingerprint(0),
    m_participantId(0),
    m_classType(typeEncryptedChatEmpty)
{
}

EncryptedChat::~EncryptedChat() {
}

void EncryptedChat::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 EncryptedChat::accessHash() const {
    return m_accessHash;
}

void EncryptedChat::setAdminId(qint32 adminId) {
    m_adminId = adminId;
}

qint32 EncryptedChat::adminId() const {
    return m_adminId;
}

void EncryptedChat::setDate(qint32 date) {
    m_date = date;
}

qint32 EncryptedChat::date() const {
    return m_date;
}

void EncryptedChat::setGA(const QByteArray &gA) {
    m_gA = gA;
}

QByteArray EncryptedChat::gA() const {
    return m_gA;
}

void EncryptedChat::setGAOrB(const QByteArray &gAOrB) {
    m_gAOrB = gAOrB;
}

QByteArray EncryptedChat::gAOrB() const {
    return m_gAOrB;
}

void EncryptedChat::setId(qint32 id) {
    m_id = id;
}

qint32 EncryptedChat::id() const {
    return m_id;
}

void EncryptedChat::setKeyFingerprint(qint64 keyFingerprint) {
    m_keyFingerprint = keyFingerprint;
}

qint64 EncryptedChat::keyFingerprint() const {
    return m_keyFingerprint;
}

void EncryptedChat::setParticipantId(qint32 participantId) {
    m_participantId = participantId;
}

qint32 EncryptedChat::participantId() const {
    return m_participantId;
}

bool EncryptedChat::operator ==(const EncryptedChat &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_adminId == b.m_adminId &&
           m_date == b.m_date &&
           m_gA == b.m_gA &&
           m_gAOrB == b.m_gAOrB &&
           m_id == b.m_id &&
           m_keyFingerprint == b.m_keyFingerprint &&
           m_participantId == b.m_participantId;
}

void EncryptedChat::setClassType(EncryptedChat::EncryptedChatType classType) {
    m_classType = classType;
}

EncryptedChat::EncryptedChatType EncryptedChat::classType() const {
    return m_classType;
}

bool EncryptedChat::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeEncryptedChatEmpty: {
        m_id = in->fetchInt();
        m_classType = static_cast<EncryptedChatType>(x);
        return true;
    }
        break;
    
    case typeEncryptedChatWaiting: {
        m_id = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_date = in->fetchInt();
        m_adminId = in->fetchInt();
        m_participantId = in->fetchInt();
        m_classType = static_cast<EncryptedChatType>(x);
        return true;
    }
        break;
    
    case typeEncryptedChatRequested: {
        m_id = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_date = in->fetchInt();
        m_adminId = in->fetchInt();
        m_participantId = in->fetchInt();
        m_gA = in->fetchBytes();
        m_classType = static_cast<EncryptedChatType>(x);
        return true;
    }
        break;
    
    case typeEncryptedChat: {
        m_id = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_date = in->fetchInt();
        m_adminId = in->fetchInt();
        m_participantId = in->fetchInt();
        m_gAOrB = in->fetchBytes();
        m_keyFingerprint = in->fetchLong();
        m_classType = static_cast<EncryptedChatType>(x);
        return true;
    }
        break;
    
    case typeEncryptedChatDiscarded: {
        m_id = in->fetchInt();
        m_classType = static_cast<EncryptedChatType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool EncryptedChat::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeEncryptedChatEmpty: {
        out->appendInt(m_id);
        return true;
    }
        break;
    
    case typeEncryptedChatWaiting: {
        out->appendInt(m_id);
        out->appendLong(m_accessHash);
        out->appendInt(m_date);
        out->appendInt(m_adminId);
        out->appendInt(m_participantId);
        return true;
    }
        break;
    
    case typeEncryptedChatRequested: {
        out->appendInt(m_id);
        out->appendLong(m_accessHash);
        out->appendInt(m_date);
        out->appendInt(m_adminId);
        out->appendInt(m_participantId);
        out->appendBytes(m_gA);
        return true;
    }
        break;
    
    case typeEncryptedChat: {
        out->appendInt(m_id);
        out->appendLong(m_accessHash);
        out->appendInt(m_date);
        out->appendInt(m_adminId);
        out->appendInt(m_participantId);
        out->appendBytes(m_gAOrB);
        out->appendLong(m_keyFingerprint);
        return true;
    }
        break;
    
    case typeEncryptedChatDiscarded: {
        out->appendInt(m_id);
        return true;
    }
        break;
    
    default:
        return false;
    }
}


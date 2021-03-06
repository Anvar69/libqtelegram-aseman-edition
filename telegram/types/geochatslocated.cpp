// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "geochatslocated.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

GeochatsLocated::GeochatsLocated(GeochatsLocatedType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

GeochatsLocated::GeochatsLocated(InboundPkt *in) :
    m_classType(typeGeochatsLocated)
{
    fetch(in);
}

GeochatsLocated::~GeochatsLocated() {
}

void GeochatsLocated::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

QList<Chat> GeochatsLocated::chats() const {
    return m_chats;
}

void GeochatsLocated::setMessages(const QList<GeoChatMessage> &messages) {
    m_messages = messages;
}

QList<GeoChatMessage> GeochatsLocated::messages() const {
    return m_messages;
}

void GeochatsLocated::setResults(const QList<ChatLocated> &results) {
    m_results = results;
}

QList<ChatLocated> GeochatsLocated::results() const {
    return m_results;
}

void GeochatsLocated::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> GeochatsLocated::users() const {
    return m_users;
}

bool GeochatsLocated::operator ==(const GeochatsLocated &b) {
    return m_chats == b.m_chats &&
           m_messages == b.m_messages &&
           m_results == b.m_results &&
           m_users == b.m_users;
}

void GeochatsLocated::setClassType(GeochatsLocated::GeochatsLocatedType classType) {
    m_classType = classType;
}

GeochatsLocated::GeochatsLocatedType GeochatsLocated::classType() const {
    return m_classType;
}

bool GeochatsLocated::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeGeochatsLocated: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_results_length = in->fetchInt();
        m_results.clear();
        for (qint32 i = 0; i < m_results_length; i++) {
            ChatLocated type;
            type.fetch(in);
            m_results.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            GeoChatMessage type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<GeochatsLocatedType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool GeochatsLocated::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeGeochatsLocated: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_results.count());
        for (qint32 i = 0; i < m_results.count(); i++) {
            m_results[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}


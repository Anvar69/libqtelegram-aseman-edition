// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesmessages.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

MessagesMessages::MessagesMessages(MessagesMessagesType classType, InboundPkt *in) :
    m_count(0),
    m_flags(0),
    m_pts(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesMessages::MessagesMessages(InboundPkt *in) :
    m_count(0),
    m_flags(0),
    m_pts(0),
    m_classType(typeMessagesMessages)
{
    fetch(in);
}

MessagesMessages::MessagesMessages(const Null &null) :
    TelegramTypeObject(null),
    m_count(0),
    m_flags(0),
    m_pts(0),
    m_classType(typeMessagesMessages)
{
}

MessagesMessages::~MessagesMessages() {
}

void MessagesMessages::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

QList<Chat> MessagesMessages::chats() const {
    return m_chats;
}

void MessagesMessages::setCollapsed(const QList<MessageGroup> &collapsed) {
    m_collapsed = collapsed;
}

QList<MessageGroup> MessagesMessages::collapsed() const {
    return m_collapsed;
}

void MessagesMessages::setCount(qint32 count) {
    m_count = count;
}

qint32 MessagesMessages::count() const {
    return m_count;
}

void MessagesMessages::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 MessagesMessages::flags() const {
    return m_flags;
}

void MessagesMessages::setMessages(const QList<Message> &messages) {
    m_messages = messages;
}

QList<Message> MessagesMessages::messages() const {
    return m_messages;
}

void MessagesMessages::setPts(qint32 pts) {
    m_pts = pts;
}

qint32 MessagesMessages::pts() const {
    return m_pts;
}

void MessagesMessages::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> MessagesMessages::users() const {
    return m_users;
}

bool MessagesMessages::operator ==(const MessagesMessages &b) const {
    return m_classType == b.m_classType &&
           m_chats == b.m_chats &&
           m_collapsed == b.m_collapsed &&
           m_count == b.m_count &&
           m_flags == b.m_flags &&
           m_messages == b.m_messages &&
           m_pts == b.m_pts &&
           m_users == b.m_users;
}

void MessagesMessages::setClassType(MessagesMessages::MessagesMessagesType classType) {
    m_classType = classType;
}

MessagesMessages::MessagesMessagesType MessagesMessages::classType() const {
    return m_classType;
}

bool MessagesMessages::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesMessages: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
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
        m_classType = static_cast<MessagesMessagesType>(x);
        return true;
    }
        break;
    
    case typeMessagesMessagesSlice: {
        m_count = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
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
        m_classType = static_cast<MessagesMessagesType>(x);
        return true;
    }
        break;
    
    case typeMessagesChannelMessages: {
        m_flags = in->fetchInt();
        m_pts = in->fetchInt();
        m_count = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(m_flags & 1<<0) {
            if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
            qint32 m_collapsed_length = in->fetchInt();
            m_collapsed.clear();
            for (qint32 i = 0; i < m_collapsed_length; i++) {
                MessageGroup type;
                if(m_flags & 1<<0) {
                type.fetch(in);
            }
                m_collapsed.append(type);
            }
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
        m_classType = static_cast<MessagesMessagesType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesMessages::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesMessages: {
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
    
    case typeMessagesMessagesSlice: {
        out->appendInt(m_count);
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
    
    case typeMessagesChannelMessages: {
        out->appendInt(m_flags);
        out->appendInt(m_pts);
        out->appendInt(m_count);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_collapsed.count());
        for (qint32 i = 0; i < m_collapsed.count(); i++) {
            m_collapsed[i].push(out);
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


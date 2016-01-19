// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputbotinlinemessage.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

InputBotInlineMessage::InputBotInlineMessage(InputBotInlineMessageType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputBotInlineMessage::InputBotInlineMessage(InboundPkt *in) :
    m_flags(0),
    m_classType(typeInputBotInlineMessageMediaAuto)
{
    fetch(in);
}

InputBotInlineMessage::InputBotInlineMessage(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeInputBotInlineMessageMediaAuto)
{
}

InputBotInlineMessage::~InputBotInlineMessage() {
}

void InputBotInlineMessage::setCaption(const QString &caption) {
    m_caption = caption;
}

QString InputBotInlineMessage::caption() const {
    return m_caption;
}

void InputBotInlineMessage::setEntities(const QList<MessageEntity> &entities) {
    m_entities = entities;
}

QList<MessageEntity> InputBotInlineMessage::entities() const {
    return m_entities;
}

void InputBotInlineMessage::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 InputBotInlineMessage::flags() const {
    return m_flags;
}

void InputBotInlineMessage::setMessage(const QString &message) {
    m_message = message;
}

QString InputBotInlineMessage::message() const {
    return m_message;
}

void InputBotInlineMessage::setNoWebpage(bool noWebpage) {
    if(noWebpage) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool InputBotInlineMessage::noWebpage() const {
    return (m_flags & 1<<0);
}

bool InputBotInlineMessage::operator ==(const InputBotInlineMessage &b) const {
    return m_classType == b.m_classType &&
           m_caption == b.m_caption &&
           m_entities == b.m_entities &&
           m_flags == b.m_flags &&
           m_message == b.m_message;
}

void InputBotInlineMessage::setClassType(InputBotInlineMessage::InputBotInlineMessageType classType) {
    m_classType = classType;
}

InputBotInlineMessage::InputBotInlineMessageType InputBotInlineMessage::classType() const {
    return m_classType;
}

bool InputBotInlineMessage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputBotInlineMessageMediaAuto: {
        m_caption = in->fetchQString();
        m_classType = static_cast<InputBotInlineMessageType>(x);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageText: {
        m_flags = in->fetchInt();
        m_message = in->fetchQString();
        if(m_flags & 1<<1) {
            if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
            qint32 m_entities_length = in->fetchInt();
            m_entities.clear();
            for (qint32 i = 0; i < m_entities_length; i++) {
                MessageEntity type;
                if(m_flags & 1<<1) {
                type.fetch(in);
            }
                m_entities.append(type);
            }
        }
        m_classType = static_cast<InputBotInlineMessageType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputBotInlineMessage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputBotInlineMessageMediaAuto: {
        out->appendQString(m_caption);
        return true;
    }
        break;
    
    case typeInputBotInlineMessageText: {
        out->appendInt(m_flags);
        out->appendQString(m_message);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_entities.count());
        for (qint32 i = 0; i < m_entities.count(); i++) {
            m_entities[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}


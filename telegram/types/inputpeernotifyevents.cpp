// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputpeernotifyevents.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

InputPeerNotifyEvents::InputPeerNotifyEvents(InputPeerNotifyEventsType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputPeerNotifyEvents::InputPeerNotifyEvents(InboundPkt *in) :
    m_classType(typeInputPeerNotifyEventsEmpty)
{
    fetch(in);
}

InputPeerNotifyEvents::InputPeerNotifyEvents(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeInputPeerNotifyEventsEmpty)
{
}

InputPeerNotifyEvents::~InputPeerNotifyEvents() {
}

bool InputPeerNotifyEvents::operator ==(const InputPeerNotifyEvents &b) const {
    return m_classType == b.m_classType;
}

void InputPeerNotifyEvents::setClassType(InputPeerNotifyEvents::InputPeerNotifyEventsType classType) {
    m_classType = classType;
}

InputPeerNotifyEvents::InputPeerNotifyEventsType InputPeerNotifyEvents::classType() const {
    return m_classType;
}

bool InputPeerNotifyEvents::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputPeerNotifyEventsEmpty: {
        m_classType = static_cast<InputPeerNotifyEventsType>(x);
        return true;
    }
        break;
    
    case typeInputPeerNotifyEventsAll: {
        m_classType = static_cast<InputPeerNotifyEventsType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputPeerNotifyEvents::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPeerNotifyEventsEmpty: {
        return true;
    }
        break;
    
    case typeInputPeerNotifyEventsAll: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}


// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "channelparticipantrole.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

ChannelParticipantRole::ChannelParticipantRole(ChannelParticipantRoleType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ChannelParticipantRole::ChannelParticipantRole(InboundPkt *in) :
    m_classType(typeChannelRoleEmpty)
{
    fetch(in);
}

ChannelParticipantRole::ChannelParticipantRole(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeChannelRoleEmpty)
{
}

ChannelParticipantRole::~ChannelParticipantRole() {
}

bool ChannelParticipantRole::operator ==(const ChannelParticipantRole &b) const {
    return m_classType == b.m_classType;
}

void ChannelParticipantRole::setClassType(ChannelParticipantRole::ChannelParticipantRoleType classType) {
    m_classType = classType;
}

ChannelParticipantRole::ChannelParticipantRoleType ChannelParticipantRole::classType() const {
    return m_classType;
}

bool ChannelParticipantRole::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChannelRoleEmpty: {
        m_classType = static_cast<ChannelParticipantRoleType>(x);
        return true;
    }
        break;
    
    case typeChannelRoleModerator: {
        m_classType = static_cast<ChannelParticipantRoleType>(x);
        return true;
    }
        break;
    
    case typeChannelRoleEditor: {
        m_classType = static_cast<ChannelParticipantRoleType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChannelParticipantRole::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChannelRoleEmpty: {
        return true;
    }
        break;
    
    case typeChannelRoleModerator: {
        return true;
    }
        break;
    
    case typeChannelRoleEditor: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}


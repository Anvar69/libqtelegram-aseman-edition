// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "accountpasswordinputsettings.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

AccountPasswordInputSettings::AccountPasswordInputSettings(AccountPasswordInputSettingsType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

AccountPasswordInputSettings::AccountPasswordInputSettings(InboundPkt *in) :
    m_flags(0),
    m_classType(typeAccountPasswordInputSettings)
{
    fetch(in);
}

AccountPasswordInputSettings::AccountPasswordInputSettings(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeAccountPasswordInputSettings)
{
}

AccountPasswordInputSettings::~AccountPasswordInputSettings() {
}

void AccountPasswordInputSettings::setEmail(const QString &email) {
    m_email = email;
}

QString AccountPasswordInputSettings::email() const {
    return m_email;
}

void AccountPasswordInputSettings::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 AccountPasswordInputSettings::flags() const {
    return m_flags;
}

void AccountPasswordInputSettings::setHint(const QString &hint) {
    m_hint = hint;
}

QString AccountPasswordInputSettings::hint() const {
    return m_hint;
}

void AccountPasswordInputSettings::setNewPasswordHash(const QByteArray &newPasswordHash) {
    m_newPasswordHash = newPasswordHash;
}

QByteArray AccountPasswordInputSettings::newPasswordHash() const {
    return m_newPasswordHash;
}

void AccountPasswordInputSettings::setNewSalt(const QByteArray &newSalt) {
    m_newSalt = newSalt;
}

QByteArray AccountPasswordInputSettings::newSalt() const {
    return m_newSalt;
}

bool AccountPasswordInputSettings::operator ==(const AccountPasswordInputSettings &b) const {
    return m_classType == b.m_classType &&
           m_email == b.m_email &&
           m_flags == b.m_flags &&
           m_hint == b.m_hint &&
           m_newPasswordHash == b.m_newPasswordHash &&
           m_newSalt == b.m_newSalt;
}

void AccountPasswordInputSettings::setClassType(AccountPasswordInputSettings::AccountPasswordInputSettingsType classType) {
    m_classType = classType;
}

AccountPasswordInputSettings::AccountPasswordInputSettingsType AccountPasswordInputSettings::classType() const {
    return m_classType;
}

bool AccountPasswordInputSettings::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAccountPasswordInputSettings: {
        m_flags = in->fetchInt();
        if(m_flags & 1<<0) {
            m_newSalt = in->fetchBytes();
        }
        if(m_flags & 1<<0) {
            m_newPasswordHash = in->fetchBytes();
        }
        if(m_flags & 1<<0) {
            m_hint = in->fetchQString();
        }
        if(m_flags & 1<<1) {
            m_email = in->fetchQString();
        }
        m_classType = static_cast<AccountPasswordInputSettingsType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AccountPasswordInputSettings::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAccountPasswordInputSettings: {
        out->appendInt(m_flags);
        out->appendBytes(m_newSalt);
        out->appendBytes(m_newPasswordHash);
        out->appendQString(m_hint);
        out->appendQString(m_email);
        return true;
    }
        break;
    
    default:
        return false;
    }
}


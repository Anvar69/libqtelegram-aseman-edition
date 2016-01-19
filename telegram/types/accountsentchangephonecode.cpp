// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "accountsentchangephonecode.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

AccountSentChangePhoneCode::AccountSentChangePhoneCode(AccountSentChangePhoneCodeType classType, InboundPkt *in) :
    m_sendCallTimeout(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

AccountSentChangePhoneCode::AccountSentChangePhoneCode(InboundPkt *in) :
    m_sendCallTimeout(0),
    m_classType(typeAccountSentChangePhoneCode)
{
    fetch(in);
}

AccountSentChangePhoneCode::AccountSentChangePhoneCode(const Null &null) :
    TelegramTypeObject(null),
    m_sendCallTimeout(0),
    m_classType(typeAccountSentChangePhoneCode)
{
}

AccountSentChangePhoneCode::~AccountSentChangePhoneCode() {
}

void AccountSentChangePhoneCode::setPhoneCodeHash(const QString &phoneCodeHash) {
    m_phoneCodeHash = phoneCodeHash;
}

QString AccountSentChangePhoneCode::phoneCodeHash() const {
    return m_phoneCodeHash;
}

void AccountSentChangePhoneCode::setSendCallTimeout(qint32 sendCallTimeout) {
    m_sendCallTimeout = sendCallTimeout;
}

qint32 AccountSentChangePhoneCode::sendCallTimeout() const {
    return m_sendCallTimeout;
}

bool AccountSentChangePhoneCode::operator ==(const AccountSentChangePhoneCode &b) const {
    return m_classType == b.m_classType &&
           m_phoneCodeHash == b.m_phoneCodeHash &&
           m_sendCallTimeout == b.m_sendCallTimeout;
}

void AccountSentChangePhoneCode::setClassType(AccountSentChangePhoneCode::AccountSentChangePhoneCodeType classType) {
    m_classType = classType;
}

AccountSentChangePhoneCode::AccountSentChangePhoneCodeType AccountSentChangePhoneCode::classType() const {
    return m_classType;
}

bool AccountSentChangePhoneCode::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAccountSentChangePhoneCode: {
        m_phoneCodeHash = in->fetchQString();
        m_sendCallTimeout = in->fetchInt();
        m_classType = static_cast<AccountSentChangePhoneCodeType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AccountSentChangePhoneCode::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAccountSentChangePhoneCode: {
        out->appendQString(m_phoneCodeHash);
        out->appendInt(m_sendCallTimeout);
        return true;
    }
        break;
    
    default:
        return false;
    }
}


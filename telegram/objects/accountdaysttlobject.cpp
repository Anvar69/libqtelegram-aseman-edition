// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "accountdaysttlobject.h"

AccountDaysTTLObject::AccountDaysTTLObject(const AccountDaysTTL &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

AccountDaysTTLObject::AccountDaysTTLObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

AccountDaysTTLObject::~AccountDaysTTLObject() {
}

void AccountDaysTTLObject::setDays(qint32 days) {
    if(m_core.days() == days) return;
    m_core.setDays(days);
    Q_EMIT daysChanged();
    Q_EMIT coreChanged();
}

qint32 AccountDaysTTLObject::days() const {
    return m_core.days();
}

AccountDaysTTLObject &AccountDaysTTLObject::operator =(const AccountDaysTTL &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT daysChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool AccountDaysTTLObject::operator ==(const AccountDaysTTL &b) const {
    return m_core == b;
}

void AccountDaysTTLObject::setClassType(int classType) {
    AccountDaysTTL::AccountDaysTTLType result;
    switch(classType) {
    case TypeAccountDaysTTL:
        result = AccountDaysTTL::typeAccountDaysTTL;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int AccountDaysTTLObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AccountDaysTTL::typeAccountDaysTTL:
        result = TypeAccountDaysTTL;
        break;
    }

    return result;
}

void AccountDaysTTLObject::setCore(const AccountDaysTTL &core) {
    operator =(core);
}

AccountDaysTTL AccountDaysTTLObject::core() const {
    return m_core;
}


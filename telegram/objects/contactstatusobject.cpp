// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactstatusobject.h"

ContactStatusObject::ContactStatusObject(const ContactStatus &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_status(0),
    m_core(core)
{
    m_status = new UserStatusObject(m_core.status(), this);
    connect(m_status, SIGNAL(coreChanged()), SLOT(coreStatusChanged()));
}

ContactStatusObject::ContactStatusObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_status(0),
    m_core()
{
    m_status = new UserStatusObject(m_core.status(), this);
    connect(m_status, SIGNAL(coreChanged()), SLOT(coreStatusChanged()));
}

ContactStatusObject::~ContactStatusObject() {
}

void ContactStatusObject::setStatus(UserStatusObject* status) {
    if(m_status == status) return;
    if(m_status) delete m_status;
    m_status = status;
    if(m_status) {
        m_status->setParent(this);
        m_core.setStatus(m_status->core());
        connect(m_status, SIGNAL(coreChanged()), SLOT(coreStatusChanged()));
    }
    Q_EMIT statusChanged();
    Q_EMIT coreChanged();
}

UserStatusObject*  ContactStatusObject::status() const {
    return m_status;
}

void ContactStatusObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

qint32 ContactStatusObject::userId() const {
    return m_core.userId();
}

ContactStatusObject &ContactStatusObject::operator =(const ContactStatus &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_status->setCore(b.status());

    Q_EMIT statusChanged();
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ContactStatusObject::operator ==(const ContactStatus &b) const {
    return m_core == b;
}

void ContactStatusObject::setClassType(int classType) {
    ContactStatus::ContactStatusType result;
    switch(classType) {
    case TypeContactStatus:
        result = ContactStatus::typeContactStatus;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int ContactStatusObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ContactStatus::typeContactStatus:
        result = TypeContactStatus;
        break;
    }

    return result;
}

void ContactStatusObject::setCore(const ContactStatus &core) {
    operator =(core);
}

ContactStatus ContactStatusObject::core() const {
    return m_core;
}

void ContactStatusObject::coreStatusChanged() {
    if(m_core.status() == m_status->core()) return;
    m_core.setStatus(m_status->core());
    Q_EMIT statusChanged();
    Q_EMIT coreChanged();
}


// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactsblockedobject.h"

ContactsBlockedObject::ContactsBlockedObject(const ContactsBlocked &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ContactsBlockedObject::ContactsBlockedObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ContactsBlockedObject::~ContactsBlockedObject() {
}

void ContactsBlockedObject::setBlocked(const QList<ContactBlocked> &blocked) {
    if(m_core.blocked() == blocked) return;
    m_core.setBlocked(blocked);
    Q_EMIT blockedChanged();
    Q_EMIT coreChanged();
}

QList<ContactBlocked> ContactsBlockedObject::blocked() const {
    return m_core.blocked();
}

void ContactsBlockedObject::setCount(qint32 count) {
    if(m_core.count() == count) return;
    m_core.setCount(count);
    Q_EMIT countChanged();
    Q_EMIT coreChanged();
}

qint32 ContactsBlockedObject::count() const {
    return m_core.count();
}

void ContactsBlockedObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

QList<User> ContactsBlockedObject::users() const {
    return m_core.users();
}

ContactsBlockedObject &ContactsBlockedObject::operator =(const ContactsBlocked &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT blockedChanged();
    Q_EMIT countChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ContactsBlockedObject::operator ==(const ContactsBlocked &b) const {
    return m_core == b;
}

void ContactsBlockedObject::setClassType(int classType) {
    ContactsBlocked::ContactsBlockedType result;
    switch(classType) {
    case TypeContactsBlocked:
        result = ContactsBlocked::typeContactsBlocked;
        break;
    case TypeContactsBlockedSlice:
        result = ContactsBlocked::typeContactsBlockedSlice;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int ContactsBlockedObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ContactsBlocked::typeContactsBlocked:
        result = TypeContactsBlocked;
        break;
    case ContactsBlocked::typeContactsBlockedSlice:
        result = TypeContactsBlockedSlice;
        break;
    }

    return result;
}

void ContactsBlockedObject::setCore(const ContactsBlocked &core) {
    operator =(core);
}

ContactsBlocked ContactsBlockedObject::core() const {
    return m_core;
}


// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSBLOCKED
#define LQTG_TYPE_CONTACTSBLOCKED

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QList>
#include "contactblocked.h"
#include <QtGlobal>
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT ContactsBlocked : public TelegramTypeObject
{
public:
    enum ContactsBlockedType {
        typeContactsBlocked = 0x1c138d15,
        typeContactsBlockedSlice = 0x900802a1
    };

    ContactsBlocked(ContactsBlockedType classType = typeContactsBlocked, InboundPkt *in = 0);
    ContactsBlocked(InboundPkt *in);
    ContactsBlocked(const Null&);
    virtual ~ContactsBlocked();

    void setBlocked(const QList<ContactBlocked> &blocked);
    QList<ContactBlocked> blocked() const;

    void setCount(qint32 count);
    qint32 count() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(ContactsBlockedType classType);
    ContactsBlockedType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactsBlocked &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QList<ContactBlocked> m_blocked;
    qint32 m_count;
    QList<User> m_users;
    ContactsBlockedType m_classType;
};

Q_DECLARE_METATYPE(ContactsBlocked)

#endif // LQTG_TYPE_CONTACTSBLOCKED

// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_USERSTATUS
#define LQTG_TYPE_USERSTATUS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT UserStatus : public TelegramTypeObject
{
public:
    enum UserStatusType {
        typeUserStatusEmpty = 0x9d05049,
        typeUserStatusOnline = 0xedb93949,
        typeUserStatusOffline = 0x8c703f,
        typeUserStatusRecently = 0xe26f42f1,
        typeUserStatusLastWeek = 0x7bf09fc,
        typeUserStatusLastMonth = 0x77ebc742
    };

    UserStatus(UserStatusType classType = typeUserStatusEmpty, InboundPkt *in = 0);
    UserStatus(InboundPkt *in);
    UserStatus(const Null&);
    virtual ~UserStatus();

    void setExpires(qint32 expires);
    qint32 expires() const;

    void setWasOnline(qint32 wasOnline);
    qint32 wasOnline() const;

    void setClassType(UserStatusType classType);
    UserStatusType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const UserStatus &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_expires;
    qint32 m_wasOnline;
    UserStatusType m_classType;
};

Q_DECLARE_METATYPE(UserStatus)

#endif // LQTG_TYPE_USERSTATUS

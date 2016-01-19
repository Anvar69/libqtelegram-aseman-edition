// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSTATUS_OBJECT
#define LQTG_TYPE_CONTACTSTATUS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/contactstatus.h"

#include <QPointer>
#include "userstatusobject.h"

class LIBQTELEGRAMSHARED_EXPORT ContactStatusObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ContactStatusType)
    Q_PROPERTY(UserStatusObject* status READ status WRITE setStatus NOTIFY statusChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(ContactStatus core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ContactStatusType {
        TypeContactStatus
    };

    ContactStatusObject(const ContactStatus &core, QObject *parent = 0);
    ContactStatusObject(QObject *parent = 0);
    virtual ~ContactStatusObject();

    void setStatus(UserStatusObject* status);
    UserStatusObject* status() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const ContactStatus &core);
    ContactStatus core() const;

    ContactStatusObject &operator =(const ContactStatus &b);
    bool operator ==(const ContactStatus &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void statusChanged();
    void userIdChanged();

private Q_SLOTS:
    void coreStatusChanged();

private:
    QPointer<UserStatusObject> m_status;
    ContactStatus m_core;
};

#endif // LQTG_TYPE_CONTACTSTATUS_OBJECT

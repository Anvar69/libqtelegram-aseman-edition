// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTBLOCKED_OBJECT
#define LQTG_TYPE_CONTACTBLOCKED_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/contactblocked.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ContactBlockedObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ContactBlockedType)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(ContactBlocked core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ContactBlockedType {
        TypeContactBlocked
    };

    ContactBlockedObject(const ContactBlocked &core, QObject *parent = 0);
    ContactBlockedObject(QObject *parent = 0);
    virtual ~ContactBlockedObject();

    void setDate(qint32 date);
    qint32 date() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const ContactBlocked &core);
    ContactBlocked core() const;

    ContactBlockedObject &operator =(const ContactBlocked &b);
    bool operator ==(const ContactBlocked &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void dateChanged();
    void userIdChanged();

private Q_SLOTS:

private:
    ContactBlocked m_core;
};

#endif // LQTG_TYPE_CONTACTBLOCKED_OBJECT

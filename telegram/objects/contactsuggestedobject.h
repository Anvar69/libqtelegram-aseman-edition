// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSUGGESTED_OBJECT
#define LQTG_TYPE_CONTACTSUGGESTED_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/contactsuggested.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ContactSuggestedObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ContactSuggestedType)
    Q_PROPERTY(qint32 mutualContacts READ mutualContacts WRITE setMutualContacts NOTIFY mutualContactsChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(ContactSuggested core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ContactSuggestedType {
        TypeContactSuggested
    };

    ContactSuggestedObject(const ContactSuggested &core, QObject *parent = 0);
    ContactSuggestedObject(QObject *parent = 0);
    virtual ~ContactSuggestedObject();

    void setMutualContacts(qint32 mutualContacts);
    qint32 mutualContacts() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const ContactSuggested &core);
    ContactSuggested core() const;

    ContactSuggestedObject &operator =(const ContactSuggested &b);
    bool operator ==(const ContactSuggested &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void mutualContactsChanged();
    void userIdChanged();

private Q_SLOTS:

private:
    ContactSuggested m_core;
};

#endif // LQTG_TYPE_CONTACTSUGGESTED_OBJECT

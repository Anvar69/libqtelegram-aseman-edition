// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESAFFECTEDMESSAGES_OBJECT
#define LQTG_TYPE_MESSAGESAFFECTEDMESSAGES_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesaffectedmessages.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesAffectedMessagesObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesAffectedMessagesType)
    Q_PROPERTY(qint32 pts READ pts WRITE setPts NOTIFY ptsChanged)
    Q_PROPERTY(qint32 ptsCount READ ptsCount WRITE setPtsCount NOTIFY ptsCountChanged)
    Q_PROPERTY(MessagesAffectedMessages core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesAffectedMessagesType {
        TypeMessagesAffectedMessages
    };

    MessagesAffectedMessagesObject(const MessagesAffectedMessages &core, QObject *parent = 0);
    MessagesAffectedMessagesObject(QObject *parent = 0);
    virtual ~MessagesAffectedMessagesObject();

    void setPts(qint32 pts);
    qint32 pts() const;

    void setPtsCount(qint32 ptsCount);
    qint32 ptsCount() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const MessagesAffectedMessages &core);
    MessagesAffectedMessages core() const;

    MessagesAffectedMessagesObject &operator =(const MessagesAffectedMessages &b);
    bool operator ==(const MessagesAffectedMessages &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void ptsChanged();
    void ptsCountChanged();

private Q_SLOTS:

private:
    MessagesAffectedMessages m_core;
};

#endif // LQTG_TYPE_MESSAGESAFFECTEDMESSAGES_OBJECT

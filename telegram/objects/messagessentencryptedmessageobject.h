// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESSENTENCRYPTEDMESSAGE_OBJECT
#define LQTG_TYPE_MESSAGESSENTENCRYPTEDMESSAGE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagessentencryptedmessage.h"

#include <QPointer>
#include "encryptedfileobject.h"

class LIBQTELEGRAMSHARED_EXPORT MessagesSentEncryptedMessageObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesSentEncryptedMessageType)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(EncryptedFileObject* file READ file WRITE setFile NOTIFY fileChanged)
    Q_PROPERTY(MessagesSentEncryptedMessage core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesSentEncryptedMessageType {
        TypeMessagesSentEncryptedMessage,
        TypeMessagesSentEncryptedFile
    };

    MessagesSentEncryptedMessageObject(const MessagesSentEncryptedMessage &core, QObject *parent = 0);
    MessagesSentEncryptedMessageObject(QObject *parent = 0);
    virtual ~MessagesSentEncryptedMessageObject();

    void setDate(qint32 date);
    qint32 date() const;

    void setFile(EncryptedFileObject* file);
    EncryptedFileObject* file() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const MessagesSentEncryptedMessage &core);
    MessagesSentEncryptedMessage core() const;

    MessagesSentEncryptedMessageObject &operator =(const MessagesSentEncryptedMessage &b);
    bool operator ==(const MessagesSentEncryptedMessage &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void dateChanged();
    void fileChanged();

private Q_SLOTS:
    void coreFileChanged();

private:
    QPointer<EncryptedFileObject> m_file;
    MessagesSentEncryptedMessage m_core;
};

#endif // LQTG_TYPE_MESSAGESSENTENCRYPTEDMESSAGE_OBJECT

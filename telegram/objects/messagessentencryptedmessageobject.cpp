// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagessentencryptedmessageobject.h"

MessagesSentEncryptedMessageObject::MessagesSentEncryptedMessageObject(const MessagesSentEncryptedMessage &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_file(0),
    m_core(core)
{
    m_file = new EncryptedFileObject(m_core.file(), this);
    connect(m_file.data(), &EncryptedFileObject::coreChanged, this, &MessagesSentEncryptedMessageObject::coreFileChanged);
}

MessagesSentEncryptedMessageObject::MessagesSentEncryptedMessageObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_file(0),
    m_core()
{
    m_file = new EncryptedFileObject(m_core.file(), this);
    connect(m_file.data(), &EncryptedFileObject::coreChanged, this, &MessagesSentEncryptedMessageObject::coreFileChanged);
}

MessagesSentEncryptedMessageObject::~MessagesSentEncryptedMessageObject() {
}

void MessagesSentEncryptedMessageObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 MessagesSentEncryptedMessageObject::date() const {
    return m_core.date();
}

void MessagesSentEncryptedMessageObject::setFile(EncryptedFileObject* file) {
    if(m_file == file) return;
    if(m_file) delete m_file;
    m_file = file;
    if(m_file) {
        m_file->setParent(this);
        m_core.setFile(m_file->core());
        connect(m_file.data(), &EncryptedFileObject::coreChanged, this, &MessagesSentEncryptedMessageObject::coreFileChanged);
    }
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
}

EncryptedFileObject*  MessagesSentEncryptedMessageObject::file() const {
    return m_file;
}

MessagesSentEncryptedMessageObject &MessagesSentEncryptedMessageObject::operator =(const MessagesSentEncryptedMessage &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_file->setCore(b.file());

    Q_EMIT dateChanged();
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool MessagesSentEncryptedMessageObject::operator ==(const MessagesSentEncryptedMessage &b) const {
    return m_core == b;
}

void MessagesSentEncryptedMessageObject::setClassType(int classType) {
    MessagesSentEncryptedMessage::MessagesSentEncryptedMessageType result;
    switch(classType) {
    case TypeMessagesSentEncryptedMessage:
        result = MessagesSentEncryptedMessage::typeMessagesSentEncryptedMessage;
        break;
    case TypeMessagesSentEncryptedFile:
        result = MessagesSentEncryptedMessage::typeMessagesSentEncryptedFile;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int MessagesSentEncryptedMessageObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessagesSentEncryptedMessage::typeMessagesSentEncryptedMessage:
        result = TypeMessagesSentEncryptedMessage;
        break;
    case MessagesSentEncryptedMessage::typeMessagesSentEncryptedFile:
        result = TypeMessagesSentEncryptedFile;
        break;
    }

    return result;
}

void MessagesSentEncryptedMessageObject::setCore(const MessagesSentEncryptedMessage &core) {
    operator =(core);
}

MessagesSentEncryptedMessage MessagesSentEncryptedMessageObject::core() const {
    return m_core;
}

void MessagesSentEncryptedMessageObject::coreFileChanged() {
    if(m_core.file() == m_file->core()) return;
    m_core.setFile(m_file->core());
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
}


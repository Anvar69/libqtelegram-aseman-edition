// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "encryptedmessageobject.h"

EncryptedMessageObject::EncryptedMessageObject(const EncryptedMessage &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_file(0),
    m_core(core)
{
    m_file = new EncryptedFileObject(m_core.file(), this);
    connect(m_file, SIGNAL(coreChanged()), SLOT(coreFileChanged()));
}

EncryptedMessageObject::EncryptedMessageObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_file(0),
    m_core()
{
    m_file = new EncryptedFileObject(m_core.file(), this);
    connect(m_file, SIGNAL(coreChanged()), SLOT(coreFileChanged()));
}

EncryptedMessageObject::~EncryptedMessageObject() {
}

void EncryptedMessageObject::setBytes(const QByteArray &bytes) {
    if(m_core.bytes() == bytes) return;
    m_core.setBytes(bytes);
    Q_EMIT bytesChanged();
    Q_EMIT coreChanged();
}

QByteArray EncryptedMessageObject::bytes() const {
    return m_core.bytes();
}

void EncryptedMessageObject::setChatId(qint32 chatId) {
    if(m_core.chatId() == chatId) return;
    m_core.setChatId(chatId);
    Q_EMIT chatIdChanged();
    Q_EMIT coreChanged();
}

qint32 EncryptedMessageObject::chatId() const {
    return m_core.chatId();
}

void EncryptedMessageObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 EncryptedMessageObject::date() const {
    return m_core.date();
}

void EncryptedMessageObject::setFile(EncryptedFileObject* file) {
    if(m_file == file) return;
    if(m_file) delete m_file;
    m_file = file;
    if(m_file) {
        m_file->setParent(this);
        m_core.setFile(m_file->core());
        connect(m_file, SIGNAL(coreChanged()), SLOT(coreFileChanged()));
    }
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
}

EncryptedFileObject*  EncryptedMessageObject::file() const {
    return m_file;
}

void EncryptedMessageObject::setRandomId(qint64 randomId) {
    if(m_core.randomId() == randomId) return;
    m_core.setRandomId(randomId);
    Q_EMIT randomIdChanged();
    Q_EMIT coreChanged();
}

qint64 EncryptedMessageObject::randomId() const {
    return m_core.randomId();
}

EncryptedMessageObject &EncryptedMessageObject::operator =(const EncryptedMessage &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_file->setCore(b.file());

    Q_EMIT bytesChanged();
    Q_EMIT chatIdChanged();
    Q_EMIT dateChanged();
    Q_EMIT fileChanged();
    Q_EMIT randomIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool EncryptedMessageObject::operator ==(const EncryptedMessage &b) const {
    return m_core == b;
}

void EncryptedMessageObject::setClassType(int classType) {
    EncryptedMessage::EncryptedMessageType result;
    switch(classType) {
    case TypeEncryptedMessage:
        result = EncryptedMessage::typeEncryptedMessage;
        break;
    case TypeEncryptedMessageService:
        result = EncryptedMessage::typeEncryptedMessageService;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int EncryptedMessageObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case EncryptedMessage::typeEncryptedMessage:
        result = TypeEncryptedMessage;
        break;
    case EncryptedMessage::typeEncryptedMessageService:
        result = TypeEncryptedMessageService;
        break;
    }

    return result;
}

void EncryptedMessageObject::setCore(const EncryptedMessage &core) {
    operator =(core);
}

EncryptedMessage EncryptedMessageObject::core() const {
    return m_core;
}

void EncryptedMessageObject::coreFileChanged() {
    if(m_core.file() == m_file->core()) return;
    m_core.setFile(m_file->core());
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
}


// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputchannelobject.h"

InputChannelObject::InputChannelObject(const InputChannel &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

InputChannelObject::InputChannelObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

InputChannelObject::~InputChannelObject() {
}

void InputChannelObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 InputChannelObject::accessHash() const {
    return m_core.accessHash();
}

void InputChannelObject::setChannelId(qint32 channelId) {
    if(m_core.channelId() == channelId) return;
    m_core.setChannelId(channelId);
    Q_EMIT channelIdChanged();
    Q_EMIT coreChanged();
}

qint32 InputChannelObject::channelId() const {
    return m_core.channelId();
}

InputChannelObject &InputChannelObject::operator =(const InputChannel &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT accessHashChanged();
    Q_EMIT channelIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool InputChannelObject::operator ==(const InputChannel &b) const {
    return m_core == b;
}

void InputChannelObject::setClassType(int classType) {
    InputChannel::InputChannelType result;
    switch(classType) {
    case TypeInputChannelEmpty:
        result = InputChannel::typeInputChannelEmpty;
        break;
    case TypeInputChannel:
        result = InputChannel::typeInputChannel;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int InputChannelObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case InputChannel::typeInputChannelEmpty:
        result = TypeInputChannelEmpty;
        break;
    case InputChannel::typeInputChannel:
        result = TypeInputChannel;
        break;
    }

    return result;
}

void InputChannelObject::setCore(const InputChannel &core) {
    operator =(core);
}

InputChannel InputChannelObject::core() const {
    return m_core;
}


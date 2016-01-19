// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesfilterobject.h"

MessagesFilterObject::MessagesFilterObject(const MessagesFilter &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

MessagesFilterObject::MessagesFilterObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

MessagesFilterObject::~MessagesFilterObject() {
}

MessagesFilterObject &MessagesFilterObject::operator =(const MessagesFilter &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT coreChanged();
    return *this;
}

bool MessagesFilterObject::operator ==(const MessagesFilter &b) const {
    return m_core == b;
}

void MessagesFilterObject::setClassType(int classType) {
    MessagesFilter::MessagesFilterType result;
    switch(classType) {
    case TypeInputMessagesFilterEmpty:
        result = MessagesFilter::typeInputMessagesFilterEmpty;
        break;
    case TypeInputMessagesFilterPhotos:
        result = MessagesFilter::typeInputMessagesFilterPhotos;
        break;
    case TypeInputMessagesFilterVideo:
        result = MessagesFilter::typeInputMessagesFilterVideo;
        break;
    case TypeInputMessagesFilterPhotoVideo:
        result = MessagesFilter::typeInputMessagesFilterPhotoVideo;
        break;
    case TypeInputMessagesFilterPhotoVideoDocuments:
        result = MessagesFilter::typeInputMessagesFilterPhotoVideoDocuments;
        break;
    case TypeInputMessagesFilterDocument:
        result = MessagesFilter::typeInputMessagesFilterDocument;
        break;
    case TypeInputMessagesFilterAudio:
        result = MessagesFilter::typeInputMessagesFilterAudio;
        break;
    case TypeInputMessagesFilterAudioDocuments:
        result = MessagesFilter::typeInputMessagesFilterAudioDocuments;
        break;
    case TypeInputMessagesFilterUrl:
        result = MessagesFilter::typeInputMessagesFilterUrl;
        break;
    case TypeInputMessagesFilterGif:
        result = MessagesFilter::typeInputMessagesFilterGif;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int MessagesFilterObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessagesFilter::typeInputMessagesFilterEmpty:
        result = TypeInputMessagesFilterEmpty;
        break;
    case MessagesFilter::typeInputMessagesFilterPhotos:
        result = TypeInputMessagesFilterPhotos;
        break;
    case MessagesFilter::typeInputMessagesFilterVideo:
        result = TypeInputMessagesFilterVideo;
        break;
    case MessagesFilter::typeInputMessagesFilterPhotoVideo:
        result = TypeInputMessagesFilterPhotoVideo;
        break;
    case MessagesFilter::typeInputMessagesFilterPhotoVideoDocuments:
        result = TypeInputMessagesFilterPhotoVideoDocuments;
        break;
    case MessagesFilter::typeInputMessagesFilterDocument:
        result = TypeInputMessagesFilterDocument;
        break;
    case MessagesFilter::typeInputMessagesFilterAudio:
        result = TypeInputMessagesFilterAudio;
        break;
    case MessagesFilter::typeInputMessagesFilterAudioDocuments:
        result = TypeInputMessagesFilterAudioDocuments;
        break;
    case MessagesFilter::typeInputMessagesFilterUrl:
        result = TypeInputMessagesFilterUrl;
        break;
    case MessagesFilter::typeInputMessagesFilterGif:
        result = TypeInputMessagesFilterGif;
        break;
    }

    return result;
}

void MessagesFilterObject::setCore(const MessagesFilter &core) {
    operator =(core);
}

MessagesFilter MessagesFilterObject::core() const {
    return m_core;
}


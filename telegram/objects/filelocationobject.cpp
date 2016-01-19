// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "filelocationobject.h"

FileLocationObject::FileLocationObject(const FileLocation &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

FileLocationObject::FileLocationObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

FileLocationObject::~FileLocationObject() {
}

void FileLocationObject::setDcId(qint32 dcId) {
    if(m_core.dcId() == dcId) return;
    m_core.setDcId(dcId);
    Q_EMIT dcIdChanged();
    Q_EMIT coreChanged();
}

qint32 FileLocationObject::dcId() const {
    return m_core.dcId();
}

void FileLocationObject::setLocalId(qint32 localId) {
    if(m_core.localId() == localId) return;
    m_core.setLocalId(localId);
    Q_EMIT localIdChanged();
    Q_EMIT coreChanged();
}

qint32 FileLocationObject::localId() const {
    return m_core.localId();
}

void FileLocationObject::setSecret(qint64 secret) {
    if(m_core.secret() == secret) return;
    m_core.setSecret(secret);
    Q_EMIT secretChanged();
    Q_EMIT coreChanged();
}

qint64 FileLocationObject::secret() const {
    return m_core.secret();
}

void FileLocationObject::setVolumeId(qint64 volumeId) {
    if(m_core.volumeId() == volumeId) return;
    m_core.setVolumeId(volumeId);
    Q_EMIT volumeIdChanged();
    Q_EMIT coreChanged();
}

qint64 FileLocationObject::volumeId() const {
    return m_core.volumeId();
}

FileLocationObject &FileLocationObject::operator =(const FileLocation &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT dcIdChanged();
    Q_EMIT localIdChanged();
    Q_EMIT secretChanged();
    Q_EMIT volumeIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool FileLocationObject::operator ==(const FileLocation &b) const {
    return m_core == b;
}

void FileLocationObject::setClassType(int classType) {
    FileLocation::FileLocationType result;
    switch(classType) {
    case TypeFileLocationUnavailable:
        result = FileLocation::typeFileLocationUnavailable;
        break;
    case TypeFileLocation:
        result = FileLocation::typeFileLocation;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int FileLocationObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case FileLocation::typeFileLocationUnavailable:
        result = TypeFileLocationUnavailable;
        break;
    case FileLocation::typeFileLocation:
        result = TypeFileLocation;
        break;
    }

    return result;
}

void FileLocationObject::setCore(const FileLocation &core) {
    operator =(core);
}

FileLocation FileLocationObject::core() const {
    return m_core;
}


// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "storagefiletypeobject.h"

StorageFileTypeObject::StorageFileTypeObject(const StorageFileType &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

StorageFileTypeObject::StorageFileTypeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

StorageFileTypeObject::~StorageFileTypeObject() {
}

StorageFileTypeObject &StorageFileTypeObject::operator =(const StorageFileType &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT coreChanged();
    return *this;
}

bool StorageFileTypeObject::operator ==(const StorageFileType &b) const {
    return m_core == b;
}

void StorageFileTypeObject::setClassType(int classType) {
    StorageFileType::StorageFileTypeType result;
    switch(classType) {
    case TypeStorageFileUnknown:
        result = StorageFileType::typeStorageFileUnknown;
        break;
    case TypeStorageFileJpeg:
        result = StorageFileType::typeStorageFileJpeg;
        break;
    case TypeStorageFileGif:
        result = StorageFileType::typeStorageFileGif;
        break;
    case TypeStorageFilePng:
        result = StorageFileType::typeStorageFilePng;
        break;
    case TypeStorageFilePdf:
        result = StorageFileType::typeStorageFilePdf;
        break;
    case TypeStorageFileMp3:
        result = StorageFileType::typeStorageFileMp3;
        break;
    case TypeStorageFileMov:
        result = StorageFileType::typeStorageFileMov;
        break;
    case TypeStorageFilePartial:
        result = StorageFileType::typeStorageFilePartial;
        break;
    case TypeStorageFileMp4:
        result = StorageFileType::typeStorageFileMp4;
        break;
    case TypeStorageFileWebp:
        result = StorageFileType::typeStorageFileWebp;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int StorageFileTypeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case StorageFileType::typeStorageFileUnknown:
        result = TypeStorageFileUnknown;
        break;
    case StorageFileType::typeStorageFileJpeg:
        result = TypeStorageFileJpeg;
        break;
    case StorageFileType::typeStorageFileGif:
        result = TypeStorageFileGif;
        break;
    case StorageFileType::typeStorageFilePng:
        result = TypeStorageFilePng;
        break;
    case StorageFileType::typeStorageFilePdf:
        result = TypeStorageFilePdf;
        break;
    case StorageFileType::typeStorageFileMp3:
        result = TypeStorageFileMp3;
        break;
    case StorageFileType::typeStorageFileMov:
        result = TypeStorageFileMov;
        break;
    case StorageFileType::typeStorageFilePartial:
        result = TypeStorageFilePartial;
        break;
    case StorageFileType::typeStorageFileMp4:
        result = TypeStorageFileMp4;
        break;
    case StorageFileType::typeStorageFileWebp:
        result = TypeStorageFileWebp;
        break;
    }

    return result;
}

void StorageFileTypeObject::setCore(const StorageFileType &core) {
    operator =(core);
}

StorageFileType StorageFileTypeObject::core() const {
    return m_core;
}


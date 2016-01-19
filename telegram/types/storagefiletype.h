// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_STORAGEFILETYPE
#define LQTG_TYPE_STORAGEFILETYPE

#include "telegramtypeobject.h"

#include <QMetaType>

class LIBQTELEGRAMSHARED_EXPORT StorageFileType : public TelegramTypeObject
{
public:
    enum StorageFileTypeType {
        typeStorageFileUnknown = 0xaa963b05,
        typeStorageFileJpeg = 0x7efe0e,
        typeStorageFileGif = 0xcae1aadf,
        typeStorageFilePng = 0xa4f63c0,
        typeStorageFilePdf = 0xae1e508d,
        typeStorageFileMp3 = 0x528a0677,
        typeStorageFileMov = 0x4b09ebbc,
        typeStorageFilePartial = 0x40bc6f52,
        typeStorageFileMp4 = 0xb3cea0e4,
        typeStorageFileWebp = 0x1081464c
    };

    StorageFileType(StorageFileTypeType classType = typeStorageFileUnknown, InboundPkt *in = 0);
    StorageFileType(InboundPkt *in);
    StorageFileType(const Null&);
    virtual ~StorageFileType();

    void setClassType(StorageFileTypeType classType);
    StorageFileTypeType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const StorageFileType &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    StorageFileTypeType m_classType;
};

Q_DECLARE_METATYPE(StorageFileType)

#endif // LQTG_TYPE_STORAGEFILETYPE

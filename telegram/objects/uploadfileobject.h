// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_UPLOADFILE_OBJECT
#define LQTG_TYPE_UPLOADFILE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/uploadfile.h"

#include <QPointer>
#include "storagefiletypeobject.h"

class LIBQTELEGRAMSHARED_EXPORT UploadFileObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(UploadFileType)
    Q_PROPERTY(QByteArray bytes READ bytes WRITE setBytes NOTIFY bytesChanged)
    Q_PROPERTY(qint32 mtime READ mtime WRITE setMtime NOTIFY mtimeChanged)
    Q_PROPERTY(StorageFileTypeObject* type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(UploadFile core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum UploadFileType {
        TypeUploadFile
    };

    UploadFileObject(const UploadFile &core, QObject *parent = 0);
    UploadFileObject(QObject *parent = 0);
    virtual ~UploadFileObject();

    void setBytes(const QByteArray &bytes);
    QByteArray bytes() const;

    void setMtime(qint32 mtime);
    qint32 mtime() const;

    void setType(StorageFileTypeObject* type);
    StorageFileTypeObject* type() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const UploadFile &core);
    UploadFile core() const;

    UploadFileObject &operator =(const UploadFile &b);
    bool operator ==(const UploadFile &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void bytesChanged();
    void mtimeChanged();
    void typeChanged();

private Q_SLOTS:
    void coreTypeChanged();

private:
    QPointer<StorageFileTypeObject> m_type;
    UploadFile m_core;
};

#endif // LQTG_TYPE_UPLOADFILE_OBJECT

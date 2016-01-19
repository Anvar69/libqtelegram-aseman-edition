// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PHOTOSPHOTO_OBJECT
#define LQTG_TYPE_PHOTOSPHOTO_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/photosphoto.h"

#include <QPointer>
#include "photoobject.h"

class LIBQTELEGRAMSHARED_EXPORT PhotosPhotoObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(PhotosPhotoType)
    Q_PROPERTY(PhotoObject* photo READ photo WRITE setPhoto NOTIFY photoChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(PhotosPhoto core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum PhotosPhotoType {
        TypePhotosPhoto
    };

    PhotosPhotoObject(const PhotosPhoto &core, QObject *parent = 0);
    PhotosPhotoObject(QObject *parent = 0);
    virtual ~PhotosPhotoObject();

    void setPhoto(PhotoObject* photo);
    PhotoObject* photo() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const PhotosPhoto &core);
    PhotosPhoto core() const;

    PhotosPhotoObject &operator =(const PhotosPhoto &b);
    bool operator ==(const PhotosPhoto &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void photoChanged();
    void usersChanged();

private Q_SLOTS:
    void corePhotoChanged();

private:
    QPointer<PhotoObject> m_photo;
    PhotosPhoto m_core;
};

#endif // LQTG_TYPE_PHOTOSPHOTO_OBJECT

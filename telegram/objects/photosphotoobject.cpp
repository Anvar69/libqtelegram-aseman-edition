// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photosphotoobject.h"

PhotosPhotoObject::PhotosPhotoObject(const PhotosPhoto &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_photo(0),
    m_core(core)
{
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &PhotosPhotoObject::corePhotoChanged);
}

PhotosPhotoObject::PhotosPhotoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_photo(0),
    m_core()
{
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &PhotosPhotoObject::corePhotoChanged);
}

PhotosPhotoObject::~PhotosPhotoObject() {
}

void PhotosPhotoObject::setPhoto(PhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo.data(), &PhotoObject::coreChanged, this, &PhotosPhotoObject::corePhotoChanged);
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

PhotoObject*  PhotosPhotoObject::photo() const {
    return m_photo;
}

void PhotosPhotoObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

QList<User> PhotosPhotoObject::users() const {
    return m_core.users();
}

PhotosPhotoObject &PhotosPhotoObject::operator =(const PhotosPhoto &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_photo->setCore(b.photo());

    Q_EMIT photoChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool PhotosPhotoObject::operator ==(const PhotosPhoto &b) const {
    return m_core == b;
}

void PhotosPhotoObject::setClassType(int classType) {
    PhotosPhoto::PhotosPhotoType result;
    switch(classType) {
    case TypePhotosPhoto:
        result = PhotosPhoto::typePhotosPhoto;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int PhotosPhotoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case PhotosPhoto::typePhotosPhoto:
        result = TypePhotosPhoto;
        break;
    }

    return result;
}

void PhotosPhotoObject::setCore(const PhotosPhoto &core) {
    operator =(core);
}

PhotosPhoto PhotosPhotoObject::core() const {
    return m_core;
}

void PhotosPhotoObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}


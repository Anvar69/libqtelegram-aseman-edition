// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photosizeobject.h"

PhotoSizeObject::PhotoSizeObject(const PhotoSize &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_location(0),
    m_core(core)
{
    m_location = new FileLocationObject(m_core.location(), this);
    connect(m_location.data(), &FileLocationObject::coreChanged, this, &PhotoSizeObject::coreLocationChanged);
}

PhotoSizeObject::PhotoSizeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_location(0),
    m_core()
{
    m_location = new FileLocationObject(m_core.location(), this);
    connect(m_location.data(), &FileLocationObject::coreChanged, this, &PhotoSizeObject::coreLocationChanged);
}

PhotoSizeObject::~PhotoSizeObject() {
}

void PhotoSizeObject::setBytes(const QByteArray &bytes) {
    if(m_core.bytes() == bytes) return;
    m_core.setBytes(bytes);
    Q_EMIT bytesChanged();
    Q_EMIT coreChanged();
}

QByteArray PhotoSizeObject::bytes() const {
    return m_core.bytes();
}

void PhotoSizeObject::setH(qint32 h) {
    if(m_core.h() == h) return;
    m_core.setH(h);
    Q_EMIT hChanged();
    Q_EMIT coreChanged();
}

qint32 PhotoSizeObject::h() const {
    return m_core.h();
}

void PhotoSizeObject::setLocation(FileLocationObject* location) {
    if(m_location == location) return;
    if(m_location) delete m_location;
    m_location = location;
    if(m_location) {
        m_location->setParent(this);
        m_core.setLocation(m_location->core());
        connect(m_location.data(), &FileLocationObject::coreChanged, this, &PhotoSizeObject::coreLocationChanged);
    }
    Q_EMIT locationChanged();
    Q_EMIT coreChanged();
}

FileLocationObject*  PhotoSizeObject::location() const {
    return m_location;
}

void PhotoSizeObject::setSize(qint32 size) {
    if(m_core.size() == size) return;
    m_core.setSize(size);
    Q_EMIT sizeChanged();
    Q_EMIT coreChanged();
}

qint32 PhotoSizeObject::size() const {
    return m_core.size();
}

void PhotoSizeObject::setType(const QString &type) {
    if(m_core.type() == type) return;
    m_core.setType(type);
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
}

QString PhotoSizeObject::type() const {
    return m_core.type();
}

void PhotoSizeObject::setW(qint32 w) {
    if(m_core.w() == w) return;
    m_core.setW(w);
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
}

qint32 PhotoSizeObject::w() const {
    return m_core.w();
}

PhotoSizeObject &PhotoSizeObject::operator =(const PhotoSize &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_location->setCore(b.location());

    Q_EMIT bytesChanged();
    Q_EMIT hChanged();
    Q_EMIT locationChanged();
    Q_EMIT sizeChanged();
    Q_EMIT typeChanged();
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool PhotoSizeObject::operator ==(const PhotoSize &b) const {
    return m_core == b;
}

void PhotoSizeObject::setClassType(int classType) {
    PhotoSize::PhotoSizeType result;
    switch(classType) {
    case TypePhotoSizeEmpty:
        result = PhotoSize::typePhotoSizeEmpty;
        break;
    case TypePhotoSize:
        result = PhotoSize::typePhotoSize;
        break;
    case TypePhotoCachedSize:
        result = PhotoSize::typePhotoCachedSize;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int PhotoSizeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case PhotoSize::typePhotoSizeEmpty:
        result = TypePhotoSizeEmpty;
        break;
    case PhotoSize::typePhotoSize:
        result = TypePhotoSize;
        break;
    case PhotoSize::typePhotoCachedSize:
        result = TypePhotoCachedSize;
        break;
    }

    return result;
}

void PhotoSizeObject::setCore(const PhotoSize &core) {
    operator =(core);
}

PhotoSize PhotoSizeObject::core() const {
    return m_core;
}

void PhotoSizeObject::coreLocationChanged() {
    if(m_core.location() == m_location->core()) return;
    m_core.setLocation(m_location->core());
    Q_EMIT locationChanged();
    Q_EMIT coreChanged();
}


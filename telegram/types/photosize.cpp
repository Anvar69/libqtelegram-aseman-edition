// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photosize.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

PhotoSize::PhotoSize(PhotoSizeType classType, InboundPkt *in) :
    m_h(0),
    m_size(0),
    m_w(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

PhotoSize::PhotoSize(InboundPkt *in) :
    m_h(0),
    m_size(0),
    m_w(0),
    m_classType(typePhotoSizeEmpty)
{
    fetch(in);
}

PhotoSize::PhotoSize(const Null &null) :
    TelegramTypeObject(null),
    m_h(0),
    m_size(0),
    m_w(0),
    m_classType(typePhotoSizeEmpty)
{
}

PhotoSize::~PhotoSize() {
}

void PhotoSize::setBytes(const QByteArray &bytes) {
    m_bytes = bytes;
}

QByteArray PhotoSize::bytes() const {
    return m_bytes;
}

void PhotoSize::setH(qint32 h) {
    m_h = h;
}

qint32 PhotoSize::h() const {
    return m_h;
}

void PhotoSize::setLocation(const FileLocation &location) {
    m_location = location;
}

FileLocation PhotoSize::location() const {
    return m_location;
}

void PhotoSize::setSize(qint32 size) {
    m_size = size;
}

qint32 PhotoSize::size() const {
    return m_size;
}

void PhotoSize::setType(const QString &type) {
    m_type = type;
}

QString PhotoSize::type() const {
    return m_type;
}

void PhotoSize::setW(qint32 w) {
    m_w = w;
}

qint32 PhotoSize::w() const {
    return m_w;
}

bool PhotoSize::operator ==(const PhotoSize &b) const {
    return m_classType == b.m_classType &&
           m_bytes == b.m_bytes &&
           m_h == b.m_h &&
           m_location == b.m_location &&
           m_size == b.m_size &&
           m_type == b.m_type &&
           m_w == b.m_w;
}

void PhotoSize::setClassType(PhotoSize::PhotoSizeType classType) {
    m_classType = classType;
}

PhotoSize::PhotoSizeType PhotoSize::classType() const {
    return m_classType;
}

bool PhotoSize::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePhotoSizeEmpty: {
        m_type = in->fetchQString();
        m_classType = static_cast<PhotoSizeType>(x);
        return true;
    }
        break;
    
    case typePhotoSize: {
        m_type = in->fetchQString();
        m_location.fetch(in);
        m_w = in->fetchInt();
        m_h = in->fetchInt();
        m_size = in->fetchInt();
        m_classType = static_cast<PhotoSizeType>(x);
        return true;
    }
        break;
    
    case typePhotoCachedSize: {
        m_type = in->fetchQString();
        m_location.fetch(in);
        m_w = in->fetchInt();
        m_h = in->fetchInt();
        m_bytes = in->fetchBytes();
        m_classType = static_cast<PhotoSizeType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool PhotoSize::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePhotoSizeEmpty: {
        out->appendQString(m_type);
        return true;
    }
        break;
    
    case typePhotoSize: {
        out->appendQString(m_type);
        m_location.push(out);
        out->appendInt(m_w);
        out->appendInt(m_h);
        out->appendInt(m_size);
        return true;
    }
        break;
    
    case typePhotoCachedSize: {
        out->appendQString(m_type);
        m_location.push(out);
        out->appendInt(m_w);
        out->appendInt(m_h);
        out->appendBytes(m_bytes);
        return true;
    }
        break;
    
    default:
        return false;
    }
}


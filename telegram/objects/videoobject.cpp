// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "videoobject.h"

VideoObject::VideoObject(const Video &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_thumb(0),
    m_core(core)
{
    m_thumb = new PhotoSizeObject(m_core.thumb(), this);
    connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &VideoObject::coreThumbChanged);
}

VideoObject::VideoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_thumb(0),
    m_core()
{
    m_thumb = new PhotoSizeObject(m_core.thumb(), this);
    connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &VideoObject::coreThumbChanged);
}

VideoObject::~VideoObject() {
}

void VideoObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 VideoObject::accessHash() const {
    return m_core.accessHash();
}

void VideoObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 VideoObject::date() const {
    return m_core.date();
}

void VideoObject::setDcId(qint32 dcId) {
    if(m_core.dcId() == dcId) return;
    m_core.setDcId(dcId);
    Q_EMIT dcIdChanged();
    Q_EMIT coreChanged();
}

qint32 VideoObject::dcId() const {
    return m_core.dcId();
}

void VideoObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

qint32 VideoObject::duration() const {
    return m_core.duration();
}

void VideoObject::setH(qint32 h) {
    if(m_core.h() == h) return;
    m_core.setH(h);
    Q_EMIT hChanged();
    Q_EMIT coreChanged();
}

qint32 VideoObject::h() const {
    return m_core.h();
}

void VideoObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint64 VideoObject::id() const {
    return m_core.id();
}

void VideoObject::setMimeType(const QString &mimeType) {
    if(m_core.mimeType() == mimeType) return;
    m_core.setMimeType(mimeType);
    Q_EMIT mimeTypeChanged();
    Q_EMIT coreChanged();
}

QString VideoObject::mimeType() const {
    return m_core.mimeType();
}

void VideoObject::setSize(qint32 size) {
    if(m_core.size() == size) return;
    m_core.setSize(size);
    Q_EMIT sizeChanged();
    Q_EMIT coreChanged();
}

qint32 VideoObject::size() const {
    return m_core.size();
}

void VideoObject::setThumb(PhotoSizeObject* thumb) {
    if(m_thumb == thumb) return;
    if(m_thumb) delete m_thumb;
    m_thumb = thumb;
    if(m_thumb) {
        m_thumb->setParent(this);
        m_core.setThumb(m_thumb->core());
        connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &VideoObject::coreThumbChanged);
    }
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
}

PhotoSizeObject*  VideoObject::thumb() const {
    return m_thumb;
}

void VideoObject::setW(qint32 w) {
    if(m_core.w() == w) return;
    m_core.setW(w);
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
}

qint32 VideoObject::w() const {
    return m_core.w();
}

VideoObject &VideoObject::operator =(const Video &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_thumb->setCore(b.thumb());

    Q_EMIT accessHashChanged();
    Q_EMIT dateChanged();
    Q_EMIT dcIdChanged();
    Q_EMIT durationChanged();
    Q_EMIT hChanged();
    Q_EMIT idChanged();
    Q_EMIT mimeTypeChanged();
    Q_EMIT sizeChanged();
    Q_EMIT thumbChanged();
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool VideoObject::operator ==(const Video &b) const {
    return m_core == b;
}

void VideoObject::setClassType(int classType) {
    Video::VideoType result;
    switch(classType) {
    case TypeVideoEmpty:
        result = Video::typeVideoEmpty;
        break;
    case TypeVideo:
        result = Video::typeVideo;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int VideoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Video::typeVideoEmpty:
        result = TypeVideoEmpty;
        break;
    case Video::typeVideo:
        result = TypeVideo;
        break;
    }

    return result;
}

void VideoObject::setCore(const Video &core) {
    operator =(core);
}

Video VideoObject::core() const {
    return m_core;
}

void VideoObject::coreThumbChanged() {
    if(m_core.thumb() == m_thumb->core()) return;
    m_core.setThumb(m_thumb->core());
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
}


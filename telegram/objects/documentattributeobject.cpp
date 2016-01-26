// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "documentattributeobject.h"

DocumentAttributeObject::DocumentAttributeObject(const DocumentAttribute &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_stickerset(0),
    m_core(core)
{
    m_stickerset = new InputStickerSetObject(m_core.stickerset(), this);
    connect(m_stickerset.data(), &InputStickerSetObject::coreChanged, this, &DocumentAttributeObject::coreStickersetChanged);
}

DocumentAttributeObject::DocumentAttributeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_stickerset(0),
    m_core()
{
    m_stickerset = new InputStickerSetObject(m_core.stickerset(), this);
    connect(m_stickerset.data(), &InputStickerSetObject::coreChanged, this, &DocumentAttributeObject::coreStickersetChanged);
}

DocumentAttributeObject::~DocumentAttributeObject() {
}

void DocumentAttributeObject::setAlt(const QString &alt) {
    if(m_core.alt() == alt) return;
    m_core.setAlt(alt);
    Q_EMIT altChanged();
    Q_EMIT coreChanged();
}

QString DocumentAttributeObject::alt() const {
    return m_core.alt();
}

void DocumentAttributeObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

qint32 DocumentAttributeObject::duration() const {
    return m_core.duration();
}

void DocumentAttributeObject::setFileName(const QString &fileName) {
    if(m_core.fileName() == fileName) return;
    m_core.setFileName(fileName);
    Q_EMIT fileNameChanged();
    Q_EMIT coreChanged();
}

QString DocumentAttributeObject::fileName() const {
    return m_core.fileName();
}

void DocumentAttributeObject::setH(qint32 h) {
    if(m_core.h() == h) return;
    m_core.setH(h);
    Q_EMIT hChanged();
    Q_EMIT coreChanged();
}

qint32 DocumentAttributeObject::h() const {
    return m_core.h();
}

void DocumentAttributeObject::setPerformer(const QString &performer) {
    if(m_core.performer() == performer) return;
    m_core.setPerformer(performer);
    Q_EMIT performerChanged();
    Q_EMIT coreChanged();
}

QString DocumentAttributeObject::performer() const {
    return m_core.performer();
}

void DocumentAttributeObject::setStickerset(InputStickerSetObject* stickerset) {
    if(m_stickerset == stickerset) return;
    if(m_stickerset) delete m_stickerset;
    m_stickerset = stickerset;
    if(m_stickerset) {
        m_stickerset->setParent(this);
        m_core.setStickerset(m_stickerset->core());
        connect(m_stickerset.data(), &InputStickerSetObject::coreChanged, this, &DocumentAttributeObject::coreStickersetChanged);
    }
    Q_EMIT stickersetChanged();
    Q_EMIT coreChanged();
}

InputStickerSetObject*  DocumentAttributeObject::stickerset() const {
    return m_stickerset;
}

void DocumentAttributeObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

QString DocumentAttributeObject::title() const {
    return m_core.title();
}

void DocumentAttributeObject::setW(qint32 w) {
    if(m_core.w() == w) return;
    m_core.setW(w);
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
}

qint32 DocumentAttributeObject::w() const {
    return m_core.w();
}

DocumentAttributeObject &DocumentAttributeObject::operator =(const DocumentAttribute &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_stickerset->setCore(b.stickerset());

    Q_EMIT altChanged();
    Q_EMIT durationChanged();
    Q_EMIT fileNameChanged();
    Q_EMIT hChanged();
    Q_EMIT performerChanged();
    Q_EMIT stickersetChanged();
    Q_EMIT titleChanged();
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool DocumentAttributeObject::operator ==(const DocumentAttribute &b) const {
    return m_core == b;
}

void DocumentAttributeObject::setClassType(int classType) {
    DocumentAttribute::DocumentAttributeType result;
    switch(classType) {
    case TypeDocumentAttributeImageSize:
        result = DocumentAttribute::typeDocumentAttributeImageSize;
        break;
    case TypeDocumentAttributeAnimated:
        result = DocumentAttribute::typeDocumentAttributeAnimated;
        break;
    case TypeDocumentAttributeSticker:
        result = DocumentAttribute::typeDocumentAttributeSticker;
        break;
    case TypeDocumentAttributeVideo:
        result = DocumentAttribute::typeDocumentAttributeVideo;
        break;
    case TypeDocumentAttributeAudio:
        result = DocumentAttribute::typeDocumentAttributeAudio;
        break;
    case TypeDocumentAttributeFilename:
        result = DocumentAttribute::typeDocumentAttributeFilename;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int DocumentAttributeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case DocumentAttribute::typeDocumentAttributeImageSize:
        result = TypeDocumentAttributeImageSize;
        break;
    case DocumentAttribute::typeDocumentAttributeAnimated:
        result = TypeDocumentAttributeAnimated;
        break;
    case DocumentAttribute::typeDocumentAttributeSticker:
        result = TypeDocumentAttributeSticker;
        break;
    case DocumentAttribute::typeDocumentAttributeVideo:
        result = TypeDocumentAttributeVideo;
        break;
    case DocumentAttribute::typeDocumentAttributeAudio:
        result = TypeDocumentAttributeAudio;
        break;
    case DocumentAttribute::typeDocumentAttributeFilename:
        result = TypeDocumentAttributeFilename;
        break;
    }

    return result;
}

void DocumentAttributeObject::setCore(const DocumentAttribute &core) {
    operator =(core);
}

DocumentAttribute DocumentAttributeObject::core() const {
    return m_core;
}

void DocumentAttributeObject::coreStickersetChanged() {
    if(m_core.stickerset() == m_stickerset->core()) return;
    m_core.setStickerset(m_stickerset->core());
    Q_EMIT stickersetChanged();
    Q_EMIT coreChanged();
}


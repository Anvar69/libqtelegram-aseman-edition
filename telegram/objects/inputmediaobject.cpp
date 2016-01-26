// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputmediaobject.h"

InputMediaObject::InputMediaObject(const InputMedia &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_file(0),
    m_geoPoint(0),
    m_idInputAudio(0),
    m_idInputDocument(0),
    m_idInputPhoto(0),
    m_idInputVideo(0),
    m_thumb(0),
    m_core(core)
{
    m_file = new InputFileObject(m_core.file(), this);
    connect(m_file.data(), &InputFileObject::coreChanged, this, &InputMediaObject::coreFileChanged);
    m_geoPoint = new InputGeoPointObject(m_core.geoPoint(), this);
    connect(m_geoPoint.data(), &InputGeoPointObject::coreChanged, this, &InputMediaObject::coreGeoPointChanged);
    m_idInputAudio = new InputAudioObject(m_core.idInputAudio(), this);
    connect(m_idInputAudio.data(), &InputAudioObject::coreChanged, this, &InputMediaObject::coreIdInputAudioChanged);
    m_idInputDocument = new InputDocumentObject(m_core.idInputDocument(), this);
    connect(m_idInputDocument.data(), &InputDocumentObject::coreChanged, this, &InputMediaObject::coreIdInputDocumentChanged);
    m_idInputPhoto = new InputPhotoObject(m_core.idInputPhoto(), this);
    connect(m_idInputPhoto.data(), &InputPhotoObject::coreChanged, this, &InputMediaObject::coreIdInputPhotoChanged);
    m_idInputVideo = new InputVideoObject(m_core.idInputVideo(), this);
    connect(m_idInputVideo.data(), &InputVideoObject::coreChanged, this, &InputMediaObject::coreIdInputVideoChanged);
    m_thumb = new InputFileObject(m_core.thumb(), this);
    connect(m_thumb.data(), &InputFileObject::coreChanged, this, &InputMediaObject::coreThumbChanged);
}

InputMediaObject::InputMediaObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_file(0),
    m_geoPoint(0),
    m_idInputAudio(0),
    m_idInputDocument(0),
    m_idInputPhoto(0),
    m_idInputVideo(0),
    m_thumb(0),
    m_core()
{
    m_file = new InputFileObject(m_core.file(), this);
    connect(m_file.data(), &InputFileObject::coreChanged, this, &InputMediaObject::coreFileChanged);
    m_geoPoint = new InputGeoPointObject(m_core.geoPoint(), this);
    connect(m_geoPoint.data(), &InputGeoPointObject::coreChanged, this, &InputMediaObject::coreGeoPointChanged);
    m_idInputAudio = new InputAudioObject(m_core.idInputAudio(), this);
    connect(m_idInputAudio.data(), &InputAudioObject::coreChanged, this, &InputMediaObject::coreIdInputAudioChanged);
    m_idInputDocument = new InputDocumentObject(m_core.idInputDocument(), this);
    connect(m_idInputDocument.data(), &InputDocumentObject::coreChanged, this, &InputMediaObject::coreIdInputDocumentChanged);
    m_idInputPhoto = new InputPhotoObject(m_core.idInputPhoto(), this);
    connect(m_idInputPhoto.data(), &InputPhotoObject::coreChanged, this, &InputMediaObject::coreIdInputPhotoChanged);
    m_idInputVideo = new InputVideoObject(m_core.idInputVideo(), this);
    connect(m_idInputVideo.data(), &InputVideoObject::coreChanged, this, &InputMediaObject::coreIdInputVideoChanged);
    m_thumb = new InputFileObject(m_core.thumb(), this);
    connect(m_thumb.data(), &InputFileObject::coreChanged, this, &InputMediaObject::coreThumbChanged);
}

InputMediaObject::~InputMediaObject() {
}

void InputMediaObject::setAddress(const QString &address) {
    if(m_core.address() == address) return;
    m_core.setAddress(address);
    Q_EMIT addressChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::address() const {
    return m_core.address();
}

void InputMediaObject::setAttributes(const QList<DocumentAttribute> &attributes) {
    if(m_core.attributes() == attributes) return;
    m_core.setAttributes(attributes);
    Q_EMIT attributesChanged();
    Q_EMIT coreChanged();
}

QList<DocumentAttribute> InputMediaObject::attributes() const {
    return m_core.attributes();
}

void InputMediaObject::setCaption(const QString &caption) {
    if(m_core.caption() == caption) return;
    m_core.setCaption(caption);
    Q_EMIT captionChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::caption() const {
    return m_core.caption();
}

void InputMediaObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

qint32 InputMediaObject::duration() const {
    return m_core.duration();
}

void InputMediaObject::setFile(InputFileObject* file) {
    if(m_file == file) return;
    if(m_file) delete m_file;
    m_file = file;
    if(m_file) {
        m_file->setParent(this);
        m_core.setFile(m_file->core());
        connect(m_file.data(), &InputFileObject::coreChanged, this, &InputMediaObject::coreFileChanged);
    }
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
}

InputFileObject*  InputMediaObject::file() const {
    return m_file;
}

void InputMediaObject::setFirstName(const QString &firstName) {
    if(m_core.firstName() == firstName) return;
    m_core.setFirstName(firstName);
    Q_EMIT firstNameChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::firstName() const {
    return m_core.firstName();
}

void InputMediaObject::setGeoPoint(InputGeoPointObject* geoPoint) {
    if(m_geoPoint == geoPoint) return;
    if(m_geoPoint) delete m_geoPoint;
    m_geoPoint = geoPoint;
    if(m_geoPoint) {
        m_geoPoint->setParent(this);
        m_core.setGeoPoint(m_geoPoint->core());
        connect(m_geoPoint.data(), &InputGeoPointObject::coreChanged, this, &InputMediaObject::coreGeoPointChanged);
    }
    Q_EMIT geoPointChanged();
    Q_EMIT coreChanged();
}

InputGeoPointObject*  InputMediaObject::geoPoint() const {
    return m_geoPoint;
}

void InputMediaObject::setH(qint32 h) {
    if(m_core.h() == h) return;
    m_core.setH(h);
    Q_EMIT hChanged();
    Q_EMIT coreChanged();
}

qint32 InputMediaObject::h() const {
    return m_core.h();
}

void InputMediaObject::setIdInputAudio(InputAudioObject* idInputAudio) {
    if(m_idInputAudio == idInputAudio) return;
    if(m_idInputAudio) delete m_idInputAudio;
    m_idInputAudio = idInputAudio;
    if(m_idInputAudio) {
        m_idInputAudio->setParent(this);
        m_core.setIdInputAudio(m_idInputAudio->core());
        connect(m_idInputAudio.data(), &InputAudioObject::coreChanged, this, &InputMediaObject::coreIdInputAudioChanged);
    }
    Q_EMIT idInputAudioChanged();
    Q_EMIT coreChanged();
}

InputAudioObject*  InputMediaObject::idInputAudio() const {
    return m_idInputAudio;
}

void InputMediaObject::setIdInputDocument(InputDocumentObject* idInputDocument) {
    if(m_idInputDocument == idInputDocument) return;
    if(m_idInputDocument) delete m_idInputDocument;
    m_idInputDocument = idInputDocument;
    if(m_idInputDocument) {
        m_idInputDocument->setParent(this);
        m_core.setIdInputDocument(m_idInputDocument->core());
        connect(m_idInputDocument.data(), &InputDocumentObject::coreChanged, this, &InputMediaObject::coreIdInputDocumentChanged);
    }
    Q_EMIT idInputDocumentChanged();
    Q_EMIT coreChanged();
}

InputDocumentObject*  InputMediaObject::idInputDocument() const {
    return m_idInputDocument;
}

void InputMediaObject::setIdInputPhoto(InputPhotoObject* idInputPhoto) {
    if(m_idInputPhoto == idInputPhoto) return;
    if(m_idInputPhoto) delete m_idInputPhoto;
    m_idInputPhoto = idInputPhoto;
    if(m_idInputPhoto) {
        m_idInputPhoto->setParent(this);
        m_core.setIdInputPhoto(m_idInputPhoto->core());
        connect(m_idInputPhoto.data(), &InputPhotoObject::coreChanged, this, &InputMediaObject::coreIdInputPhotoChanged);
    }
    Q_EMIT idInputPhotoChanged();
    Q_EMIT coreChanged();
}

InputPhotoObject*  InputMediaObject::idInputPhoto() const {
    return m_idInputPhoto;
}

void InputMediaObject::setIdInputVideo(InputVideoObject* idInputVideo) {
    if(m_idInputVideo == idInputVideo) return;
    if(m_idInputVideo) delete m_idInputVideo;
    m_idInputVideo = idInputVideo;
    if(m_idInputVideo) {
        m_idInputVideo->setParent(this);
        m_core.setIdInputVideo(m_idInputVideo->core());
        connect(m_idInputVideo.data(), &InputVideoObject::coreChanged, this, &InputMediaObject::coreIdInputVideoChanged);
    }
    Q_EMIT idInputVideoChanged();
    Q_EMIT coreChanged();
}

InputVideoObject*  InputMediaObject::idInputVideo() const {
    return m_idInputVideo;
}

void InputMediaObject::setLastName(const QString &lastName) {
    if(m_core.lastName() == lastName) return;
    m_core.setLastName(lastName);
    Q_EMIT lastNameChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::lastName() const {
    return m_core.lastName();
}

void InputMediaObject::setMimeType(const QString &mimeType) {
    if(m_core.mimeType() == mimeType) return;
    m_core.setMimeType(mimeType);
    Q_EMIT mimeTypeChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::mimeType() const {
    return m_core.mimeType();
}

void InputMediaObject::setPhoneNumber(const QString &phoneNumber) {
    if(m_core.phoneNumber() == phoneNumber) return;
    m_core.setPhoneNumber(phoneNumber);
    Q_EMIT phoneNumberChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::phoneNumber() const {
    return m_core.phoneNumber();
}

void InputMediaObject::setProvider(const QString &provider) {
    if(m_core.provider() == provider) return;
    m_core.setProvider(provider);
    Q_EMIT providerChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::provider() const {
    return m_core.provider();
}

void InputMediaObject::setQ(const QString &q) {
    if(m_core.q() == q) return;
    m_core.setQ(q);
    Q_EMIT qChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::q() const {
    return m_core.q();
}

void InputMediaObject::setThumb(InputFileObject* thumb) {
    if(m_thumb == thumb) return;
    if(m_thumb) delete m_thumb;
    m_thumb = thumb;
    if(m_thumb) {
        m_thumb->setParent(this);
        m_core.setThumb(m_thumb->core());
        connect(m_thumb.data(), &InputFileObject::coreChanged, this, &InputMediaObject::coreThumbChanged);
    }
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
}

InputFileObject*  InputMediaObject::thumb() const {
    return m_thumb;
}

void InputMediaObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::title() const {
    return m_core.title();
}

void InputMediaObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::url() const {
    return m_core.url();
}

void InputMediaObject::setVenueId(const QString &venueId) {
    if(m_core.venueId() == venueId) return;
    m_core.setVenueId(venueId);
    Q_EMIT venueIdChanged();
    Q_EMIT coreChanged();
}

QString InputMediaObject::venueId() const {
    return m_core.venueId();
}

void InputMediaObject::setW(qint32 w) {
    if(m_core.w() == w) return;
    m_core.setW(w);
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
}

qint32 InputMediaObject::w() const {
    return m_core.w();
}

InputMediaObject &InputMediaObject::operator =(const InputMedia &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_file->setCore(b.file());
    m_geoPoint->setCore(b.geoPoint());
    m_idInputAudio->setCore(b.idInputAudio());
    m_idInputDocument->setCore(b.idInputDocument());
    m_idInputPhoto->setCore(b.idInputPhoto());
    m_idInputVideo->setCore(b.idInputVideo());
    m_thumb->setCore(b.thumb());

    Q_EMIT addressChanged();
    Q_EMIT attributesChanged();
    Q_EMIT captionChanged();
    Q_EMIT durationChanged();
    Q_EMIT fileChanged();
    Q_EMIT firstNameChanged();
    Q_EMIT geoPointChanged();
    Q_EMIT hChanged();
    Q_EMIT idInputAudioChanged();
    Q_EMIT idInputDocumentChanged();
    Q_EMIT idInputPhotoChanged();
    Q_EMIT idInputVideoChanged();
    Q_EMIT lastNameChanged();
    Q_EMIT mimeTypeChanged();
    Q_EMIT phoneNumberChanged();
    Q_EMIT providerChanged();
    Q_EMIT qChanged();
    Q_EMIT thumbChanged();
    Q_EMIT titleChanged();
    Q_EMIT urlChanged();
    Q_EMIT venueIdChanged();
    Q_EMIT wChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool InputMediaObject::operator ==(const InputMedia &b) const {
    return m_core == b;
}

void InputMediaObject::setClassType(int classType) {
    InputMedia::InputMediaType result;
    switch(classType) {
    case TypeInputMediaEmpty:
        result = InputMedia::typeInputMediaEmpty;
        break;
    case TypeInputMediaUploadedPhoto:
        result = InputMedia::typeInputMediaUploadedPhoto;
        break;
    case TypeInputMediaPhoto:
        result = InputMedia::typeInputMediaPhoto;
        break;
    case TypeInputMediaGeoPoint:
        result = InputMedia::typeInputMediaGeoPoint;
        break;
    case TypeInputMediaContact:
        result = InputMedia::typeInputMediaContact;
        break;
    case TypeInputMediaUploadedVideo:
        result = InputMedia::typeInputMediaUploadedVideo;
        break;
    case TypeInputMediaUploadedThumbVideo:
        result = InputMedia::typeInputMediaUploadedThumbVideo;
        break;
    case TypeInputMediaVideo:
        result = InputMedia::typeInputMediaVideo;
        break;
    case TypeInputMediaUploadedAudio:
        result = InputMedia::typeInputMediaUploadedAudio;
        break;
    case TypeInputMediaAudio:
        result = InputMedia::typeInputMediaAudio;
        break;
    case TypeInputMediaUploadedDocument:
        result = InputMedia::typeInputMediaUploadedDocument;
        break;
    case TypeInputMediaUploadedThumbDocument:
        result = InputMedia::typeInputMediaUploadedThumbDocument;
        break;
    case TypeInputMediaDocument:
        result = InputMedia::typeInputMediaDocument;
        break;
    case TypeInputMediaVenue:
        result = InputMedia::typeInputMediaVenue;
        break;
    case TypeInputMediaGifExternal:
        result = InputMedia::typeInputMediaGifExternal;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int InputMediaObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case InputMedia::typeInputMediaEmpty:
        result = TypeInputMediaEmpty;
        break;
    case InputMedia::typeInputMediaUploadedPhoto:
        result = TypeInputMediaUploadedPhoto;
        break;
    case InputMedia::typeInputMediaPhoto:
        result = TypeInputMediaPhoto;
        break;
    case InputMedia::typeInputMediaGeoPoint:
        result = TypeInputMediaGeoPoint;
        break;
    case InputMedia::typeInputMediaContact:
        result = TypeInputMediaContact;
        break;
    case InputMedia::typeInputMediaUploadedVideo:
        result = TypeInputMediaUploadedVideo;
        break;
    case InputMedia::typeInputMediaUploadedThumbVideo:
        result = TypeInputMediaUploadedThumbVideo;
        break;
    case InputMedia::typeInputMediaVideo:
        result = TypeInputMediaVideo;
        break;
    case InputMedia::typeInputMediaUploadedAudio:
        result = TypeInputMediaUploadedAudio;
        break;
    case InputMedia::typeInputMediaAudio:
        result = TypeInputMediaAudio;
        break;
    case InputMedia::typeInputMediaUploadedDocument:
        result = TypeInputMediaUploadedDocument;
        break;
    case InputMedia::typeInputMediaUploadedThumbDocument:
        result = TypeInputMediaUploadedThumbDocument;
        break;
    case InputMedia::typeInputMediaDocument:
        result = TypeInputMediaDocument;
        break;
    case InputMedia::typeInputMediaVenue:
        result = TypeInputMediaVenue;
        break;
    case InputMedia::typeInputMediaGifExternal:
        result = TypeInputMediaGifExternal;
        break;
    }

    return result;
}

void InputMediaObject::setCore(const InputMedia &core) {
    operator =(core);
}

InputMedia InputMediaObject::core() const {
    return m_core;
}

void InputMediaObject::coreFileChanged() {
    if(m_core.file() == m_file->core()) return;
    m_core.setFile(m_file->core());
    Q_EMIT fileChanged();
    Q_EMIT coreChanged();
}

void InputMediaObject::coreGeoPointChanged() {
    if(m_core.geoPoint() == m_geoPoint->core()) return;
    m_core.setGeoPoint(m_geoPoint->core());
    Q_EMIT geoPointChanged();
    Q_EMIT coreChanged();
}

void InputMediaObject::coreIdInputAudioChanged() {
    if(m_core.idInputAudio() == m_idInputAudio->core()) return;
    m_core.setIdInputAudio(m_idInputAudio->core());
    Q_EMIT idInputAudioChanged();
    Q_EMIT coreChanged();
}

void InputMediaObject::coreIdInputDocumentChanged() {
    if(m_core.idInputDocument() == m_idInputDocument->core()) return;
    m_core.setIdInputDocument(m_idInputDocument->core());
    Q_EMIT idInputDocumentChanged();
    Q_EMIT coreChanged();
}

void InputMediaObject::coreIdInputPhotoChanged() {
    if(m_core.idInputPhoto() == m_idInputPhoto->core()) return;
    m_core.setIdInputPhoto(m_idInputPhoto->core());
    Q_EMIT idInputPhotoChanged();
    Q_EMIT coreChanged();
}

void InputMediaObject::coreIdInputVideoChanged() {
    if(m_core.idInputVideo() == m_idInputVideo->core()) return;
    m_core.setIdInputVideo(m_idInputVideo->core());
    Q_EMIT idInputVideoChanged();
    Q_EMIT coreChanged();
}

void InputMediaObject::coreThumbChanged() {
    if(m_core.thumb() == m_thumb->core()) return;
    m_core.setThumb(m_thumb->core());
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
}


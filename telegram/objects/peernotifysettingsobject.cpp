// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "peernotifysettingsobject.h"

PeerNotifySettingsObject::PeerNotifySettingsObject(const PeerNotifySettings &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

PeerNotifySettingsObject::PeerNotifySettingsObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

PeerNotifySettingsObject::~PeerNotifySettingsObject() {
}

void PeerNotifySettingsObject::setEventsMask(qint32 eventsMask) {
    if(m_core.eventsMask() == eventsMask) return;
    m_core.setEventsMask(eventsMask);
    Q_EMIT eventsMaskChanged();
    Q_EMIT coreChanged();
}

qint32 PeerNotifySettingsObject::eventsMask() const {
    return m_core.eventsMask();
}

void PeerNotifySettingsObject::setMuteUntil(qint32 muteUntil) {
    if(m_core.muteUntil() == muteUntil) return;
    m_core.setMuteUntil(muteUntil);
    Q_EMIT muteUntilChanged();
    Q_EMIT coreChanged();
}

qint32 PeerNotifySettingsObject::muteUntil() const {
    return m_core.muteUntil();
}

void PeerNotifySettingsObject::setShowPreviews(bool showPreviews) {
    if(m_core.showPreviews() == showPreviews) return;
    m_core.setShowPreviews(showPreviews);
    Q_EMIT showPreviewsChanged();
    Q_EMIT coreChanged();
}

bool PeerNotifySettingsObject::showPreviews() const {
    return m_core.showPreviews();
}

void PeerNotifySettingsObject::setSound(const QString &sound) {
    if(m_core.sound() == sound) return;
    m_core.setSound(sound);
    Q_EMIT soundChanged();
    Q_EMIT coreChanged();
}

QString PeerNotifySettingsObject::sound() const {
    return m_core.sound();
}

PeerNotifySettingsObject &PeerNotifySettingsObject::operator =(const PeerNotifySettings &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT eventsMaskChanged();
    Q_EMIT muteUntilChanged();
    Q_EMIT showPreviewsChanged();
    Q_EMIT soundChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool PeerNotifySettingsObject::operator ==(const PeerNotifySettings &b) const {
    return m_core == b;
}

void PeerNotifySettingsObject::setClassType(int classType) {
    PeerNotifySettings::PeerNotifySettingsType result;
    switch(classType) {
    case TypePeerNotifySettingsEmpty:
        result = PeerNotifySettings::typePeerNotifySettingsEmpty;
        break;
    case TypePeerNotifySettings:
        result = PeerNotifySettings::typePeerNotifySettings;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int PeerNotifySettingsObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case PeerNotifySettings::typePeerNotifySettingsEmpty:
        result = TypePeerNotifySettingsEmpty;
        break;
    case PeerNotifySettings::typePeerNotifySettings:
        result = TypePeerNotifySettings;
        break;
    }

    return result;
}

void PeerNotifySettingsObject::setCore(const PeerNotifySettings &core) {
    operator =(core);
}

PeerNotifySettings PeerNotifySettingsObject::core() const {
    return m_core;
}


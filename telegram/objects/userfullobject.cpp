// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "userfullobject.h"

UserFullObject::UserFullObject(const UserFull &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_botInfo(0),
    m_link(0),
    m_notifySettings(0),
    m_profilePhoto(0),
    m_user(0),
    m_core(core)
{
    m_botInfo = new BotInfoObject(m_core.botInfo(), this);
    connect(m_botInfo, SIGNAL(coreChanged()), SLOT(coreBotInfoChanged()));
    m_link = new ContactsLinkObject(m_core.link(), this);
    connect(m_link, SIGNAL(coreChanged()), SLOT(coreLinkChanged()));
    m_notifySettings = new PeerNotifySettingsObject(m_core.notifySettings(), this);
    connect(m_notifySettings, SIGNAL(coreChanged()), SLOT(coreNotifySettingsChanged()));
    m_profilePhoto = new PhotoObject(m_core.profilePhoto(), this);
    connect(m_profilePhoto, SIGNAL(coreChanged()), SLOT(coreProfilePhotoChanged()));
    m_user = new UserObject(m_core.user(), this);
    connect(m_user, SIGNAL(coreChanged()), SLOT(coreUserChanged()));
}

UserFullObject::UserFullObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_botInfo(0),
    m_link(0),
    m_notifySettings(0),
    m_profilePhoto(0),
    m_user(0),
    m_core()
{
    m_botInfo = new BotInfoObject(m_core.botInfo(), this);
    connect(m_botInfo, SIGNAL(coreChanged()), SLOT(coreBotInfoChanged()));
    m_link = new ContactsLinkObject(m_core.link(), this);
    connect(m_link, SIGNAL(coreChanged()), SLOT(coreLinkChanged()));
    m_notifySettings = new PeerNotifySettingsObject(m_core.notifySettings(), this);
    connect(m_notifySettings, SIGNAL(coreChanged()), SLOT(coreNotifySettingsChanged()));
    m_profilePhoto = new PhotoObject(m_core.profilePhoto(), this);
    connect(m_profilePhoto, SIGNAL(coreChanged()), SLOT(coreProfilePhotoChanged()));
    m_user = new UserObject(m_core.user(), this);
    connect(m_user, SIGNAL(coreChanged()), SLOT(coreUserChanged()));
}

UserFullObject::~UserFullObject() {
}

void UserFullObject::setBlocked(bool blocked) {
    if(m_core.blocked() == blocked) return;
    m_core.setBlocked(blocked);
    Q_EMIT blockedChanged();
    Q_EMIT coreChanged();
}

bool UserFullObject::blocked() const {
    return m_core.blocked();
}

void UserFullObject::setBotInfo(BotInfoObject* botInfo) {
    if(m_botInfo == botInfo) return;
    if(m_botInfo) delete m_botInfo;
    m_botInfo = botInfo;
    if(m_botInfo) {
        m_botInfo->setParent(this);
        m_core.setBotInfo(m_botInfo->core());
        connect(m_botInfo, SIGNAL(coreChanged()), SLOT(coreBotInfoChanged()));
    }
    Q_EMIT botInfoChanged();
    Q_EMIT coreChanged();
}

BotInfoObject*  UserFullObject::botInfo() const {
    return m_botInfo;
}

void UserFullObject::setLink(ContactsLinkObject* link) {
    if(m_link == link) return;
    if(m_link) delete m_link;
    m_link = link;
    if(m_link) {
        m_link->setParent(this);
        m_core.setLink(m_link->core());
        connect(m_link, SIGNAL(coreChanged()), SLOT(coreLinkChanged()));
    }
    Q_EMIT linkChanged();
    Q_EMIT coreChanged();
}

ContactsLinkObject*  UserFullObject::link() const {
    return m_link;
}

void UserFullObject::setNotifySettings(PeerNotifySettingsObject* notifySettings) {
    if(m_notifySettings == notifySettings) return;
    if(m_notifySettings) delete m_notifySettings;
    m_notifySettings = notifySettings;
    if(m_notifySettings) {
        m_notifySettings->setParent(this);
        m_core.setNotifySettings(m_notifySettings->core());
        connect(m_notifySettings, SIGNAL(coreChanged()), SLOT(coreNotifySettingsChanged()));
    }
    Q_EMIT notifySettingsChanged();
    Q_EMIT coreChanged();
}

PeerNotifySettingsObject*  UserFullObject::notifySettings() const {
    return m_notifySettings;
}

void UserFullObject::setProfilePhoto(PhotoObject* profilePhoto) {
    if(m_profilePhoto == profilePhoto) return;
    if(m_profilePhoto) delete m_profilePhoto;
    m_profilePhoto = profilePhoto;
    if(m_profilePhoto) {
        m_profilePhoto->setParent(this);
        m_core.setProfilePhoto(m_profilePhoto->core());
        connect(m_profilePhoto, SIGNAL(coreChanged()), SLOT(coreProfilePhotoChanged()));
    }
    Q_EMIT profilePhotoChanged();
    Q_EMIT coreChanged();
}

PhotoObject*  UserFullObject::profilePhoto() const {
    return m_profilePhoto;
}

void UserFullObject::setUser(UserObject* user) {
    if(m_user == user) return;
    if(m_user) delete m_user;
    m_user = user;
    if(m_user) {
        m_user->setParent(this);
        m_core.setUser(m_user->core());
        connect(m_user, SIGNAL(coreChanged()), SLOT(coreUserChanged()));
    }
    Q_EMIT userChanged();
    Q_EMIT coreChanged();
}

UserObject*  UserFullObject::user() const {
    return m_user;
}

UserFullObject &UserFullObject::operator =(const UserFull &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_botInfo->setCore(b.botInfo());
    m_link->setCore(b.link());
    m_notifySettings->setCore(b.notifySettings());
    m_profilePhoto->setCore(b.profilePhoto());
    m_user->setCore(b.user());

    Q_EMIT blockedChanged();
    Q_EMIT botInfoChanged();
    Q_EMIT linkChanged();
    Q_EMIT notifySettingsChanged();
    Q_EMIT profilePhotoChanged();
    Q_EMIT userChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool UserFullObject::operator ==(const UserFull &b) const {
    return m_core == b;
}

void UserFullObject::setClassType(int classType) {
    UserFull::UserFullType result;
    switch(classType) {
    case TypeUserFull:
        result = UserFull::typeUserFull;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int UserFullObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case UserFull::typeUserFull:
        result = TypeUserFull;
        break;
    }

    return result;
}

void UserFullObject::setCore(const UserFull &core) {
    operator =(core);
}

UserFull UserFullObject::core() const {
    return m_core;
}

void UserFullObject::coreBotInfoChanged() {
    if(m_core.botInfo() == m_botInfo->core()) return;
    m_core.setBotInfo(m_botInfo->core());
    Q_EMIT botInfoChanged();
    Q_EMIT coreChanged();
}

void UserFullObject::coreLinkChanged() {
    if(m_core.link() == m_link->core()) return;
    m_core.setLink(m_link->core());
    Q_EMIT linkChanged();
    Q_EMIT coreChanged();
}

void UserFullObject::coreNotifySettingsChanged() {
    if(m_core.notifySettings() == m_notifySettings->core()) return;
    m_core.setNotifySettings(m_notifySettings->core());
    Q_EMIT notifySettingsChanged();
    Q_EMIT coreChanged();
}

void UserFullObject::coreProfilePhotoChanged() {
    if(m_core.profilePhoto() == m_profilePhoto->core()) return;
    m_core.setProfilePhoto(m_profilePhoto->core());
    Q_EMIT profilePhotoChanged();
    Q_EMIT coreChanged();
}

void UserFullObject::coreUserChanged() {
    if(m_core.user() == m_user->core()) return;
    m_core.setUser(m_user->core());
    Q_EMIT userChanged();
    Q_EMIT coreChanged();
}


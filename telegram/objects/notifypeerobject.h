// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_NOTIFYPEER_OBJECT
#define LQTG_TYPE_NOTIFYPEER_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/notifypeer.h"

#include <QPointer>
#include "peerobject.h"

class LIBQTELEGRAMSHARED_EXPORT NotifyPeerObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(NotifyPeerType)
    Q_PROPERTY(PeerObject* peer READ peer WRITE setPeer NOTIFY peerChanged)
    Q_PROPERTY(NotifyPeer core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum NotifyPeerType {
        TypeNotifyPeer,
        TypeNotifyUsers,
        TypeNotifyChats,
        TypeNotifyAll
    };

    NotifyPeerObject(const NotifyPeer &core, QObject *parent = 0);
    NotifyPeerObject(QObject *parent = 0);
    virtual ~NotifyPeerObject();

    void setPeer(PeerObject* peer);
    PeerObject* peer() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const NotifyPeer &core);
    NotifyPeer core() const;

    NotifyPeerObject &operator =(const NotifyPeer &b);
    bool operator ==(const NotifyPeer &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void peerChanged();

private Q_SLOTS:
    void corePeerChanged();

private:
    QPointer<PeerObject> m_peer;
    NotifyPeer m_core;
};

#endif // LQTG_TYPE_NOTIFYPEER_OBJECT

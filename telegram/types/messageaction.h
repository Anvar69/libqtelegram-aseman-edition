// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEACTION
#define LQTG_TYPE_MESSAGEACTION

#include "telegramtypeobject.h"
#include <QString>
#include <QtGlobal>
#include "photo.h"
#include <QList>

class LIBQTELEGRAMSHARED_EXPORT MessageAction : public TelegramTypeObject
{
public:
    enum MessageActionType {
        typeMessageActionEmpty = 0xb6aef7b0,
        typeMessageActionChatCreate = 0xa6638b9a,
        typeMessageActionChatEditTitle = 0xb5a1ce5a,
        typeMessageActionChatEditPhoto = 0x7fcb13a8,
        typeMessageActionChatDeletePhoto = 0x95e3fbef,
        typeMessageActionChatAddUser = 0x5e3cfc4b,
        typeMessageActionChatDeleteUser = 0xb2ae9b0c,
        typeMessageActionGeoChatCreate = 0x6f038ebc,
        typeMessageActionGeoChatCheckin = 0xc7d53de,
        typeMessageActionChatJoinedByLink = 0xf89cf5e8
    };

    MessageAction(MessageActionType classType = typeMessageActionEmpty, InboundPkt *in = 0);
    MessageAction(InboundPkt *in);
    virtual ~MessageAction();

    void setAddress(const QString &address);
    QString address() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setPhoto(const Photo &photo);
    Photo photo() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setUsers(const QList<qint32> &users);
    QList<qint32> users() const;

    void setClassType(MessageActionType classType);
    MessageActionType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessageAction &b);

private:
    QString m_address;
    qint32 m_inviterId;
    Photo m_photo;
    QString m_title;
    qint32 m_userId;
    QList<qint32> m_users;
    MessageActionType m_classType;
};

#endif // LQTG_TYPE_MESSAGEACTION

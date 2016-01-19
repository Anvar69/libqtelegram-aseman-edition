// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_BOTINFO
#define LQTG_TYPE_BOTINFO

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QList>
#include "botcommand.h"
#include <QString>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT BotInfo : public TelegramTypeObject
{
public:
    enum BotInfoType {
        typeBotInfoEmpty = 0xbb2e37ce,
        typeBotInfo = 0x9cf585d
    };

    BotInfo(BotInfoType classType = typeBotInfoEmpty, InboundPkt *in = 0);
    BotInfo(InboundPkt *in);
    BotInfo(const Null&);
    virtual ~BotInfo();

    void setCommands(const QList<BotCommand> &commands);
    QList<BotCommand> commands() const;

    void setDescription(const QString &description);
    QString description() const;

    void setShareText(const QString &shareText);
    QString shareText() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(BotInfoType classType);
    BotInfoType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const BotInfo &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QList<BotCommand> m_commands;
    QString m_description;
    QString m_shareText;
    qint32 m_userId;
    qint32 m_version;
    BotInfoType m_classType;
};

Q_DECLARE_METATYPE(BotInfo)

#endif // LQTG_TYPE_BOTINFO

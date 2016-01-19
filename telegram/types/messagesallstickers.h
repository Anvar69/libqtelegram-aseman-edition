// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESALLSTICKERS
#define LQTG_TYPE_MESSAGESALLSTICKERS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QList>
#include "stickerset.h"

class LIBQTELEGRAMSHARED_EXPORT MessagesAllStickers : public TelegramTypeObject
{
public:
    enum MessagesAllStickersType {
        typeMessagesAllStickersNotModified = 0xe86602c3,
        typeMessagesAllStickers = 0xedfd405f
    };

    MessagesAllStickers(MessagesAllStickersType classType = typeMessagesAllStickersNotModified, InboundPkt *in = 0);
    MessagesAllStickers(InboundPkt *in);
    MessagesAllStickers(const Null&);
    virtual ~MessagesAllStickers();

    void setHash(qint32 hash);
    qint32 hash() const;

    void setSets(const QList<StickerSet> &sets);
    QList<StickerSet> sets() const;

    void setClassType(MessagesAllStickersType classType);
    MessagesAllStickersType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesAllStickers &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint32 m_hash;
    QList<StickerSet> m_sets;
    MessagesAllStickersType m_classType;
};

Q_DECLARE_METATYPE(MessagesAllStickers)

#endif // LQTG_TYPE_MESSAGESALLSTICKERS

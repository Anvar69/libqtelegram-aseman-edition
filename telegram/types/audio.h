// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUDIO
#define LQTG_TYPE_AUDIO

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT Audio : public TelegramTypeObject
{
public:
    enum AudioType {
        typeAudioEmpty = 0x586988d8,
        typeAudio = 0xf9e35055
    };

    Audio(AudioType classType = typeAudioEmpty, InboundPkt *in = 0);
    Audio(InboundPkt *in);
    Audio(const Null&);
    virtual ~Audio();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setId(qint64 id);
    qint64 id() const;

    void setMimeType(const QString &mimeType);
    QString mimeType() const;

    void setSize(qint32 size);
    qint32 size() const;

    void setClassType(AudioType classType);
    AudioType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const Audio &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint64 m_accessHash;
    qint32 m_date;
    qint32 m_dcId;
    qint32 m_duration;
    qint64 m_id;
    QString m_mimeType;
    qint32 m_size;
    AudioType m_classType;
};

Q_DECLARE_METATYPE(Audio)

#endif // LQTG_TYPE_AUDIO

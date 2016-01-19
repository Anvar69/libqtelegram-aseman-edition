// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTAUDIO_OBJECT
#define LQTG_TYPE_INPUTAUDIO_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputaudio.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputAudioObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputAudioType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(InputAudio core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputAudioType {
        TypeInputAudioEmpty,
        TypeInputAudio
    };

    InputAudioObject(const InputAudio &core, QObject *parent = 0);
    InputAudioObject(QObject *parent = 0);
    virtual ~InputAudioObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const InputAudio &core);
    InputAudio core() const;

    InputAudioObject &operator =(const InputAudio &b);
    bool operator ==(const InputAudio &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void idChanged();

private Q_SLOTS:

private:
    InputAudio m_core;
};

#endif // LQTG_TYPE_INPUTAUDIO_OBJECT

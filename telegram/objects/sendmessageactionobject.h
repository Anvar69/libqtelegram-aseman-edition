// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_SENDMESSAGEACTION_OBJECT
#define LQTG_TYPE_SENDMESSAGEACTION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/sendmessageaction.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT SendMessageActionObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(SendMessageActionType)
    Q_PROPERTY(qint32 progress READ progress WRITE setProgress NOTIFY progressChanged)
    Q_PROPERTY(SendMessageAction core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum SendMessageActionType {
        TypeSendMessageTypingAction,
        TypeSendMessageCancelAction,
        TypeSendMessageRecordVideoAction,
        TypeSendMessageUploadVideoAction,
        TypeSendMessageRecordAudioAction,
        TypeSendMessageUploadAudioAction,
        TypeSendMessageUploadPhotoAction,
        TypeSendMessageUploadDocumentAction,
        TypeSendMessageGeoLocationAction,
        TypeSendMessageChooseContactAction
    };

    SendMessageActionObject(const SendMessageAction &core, QObject *parent = 0);
    SendMessageActionObject(QObject *parent = 0);
    virtual ~SendMessageActionObject();

    void setProgress(qint32 progress);
    qint32 progress() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const SendMessageAction &core);
    SendMessageAction core() const;

    SendMessageActionObject &operator =(const SendMessageAction &b);
    bool operator ==(const SendMessageAction &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void progressChanged();

private Q_SLOTS:

private:
    SendMessageAction m_core;
};

#endif // LQTG_TYPE_SENDMESSAGEACTION_OBJECT

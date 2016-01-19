// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESFOUNDGIFS_OBJECT
#define LQTG_TYPE_MESSAGESFOUNDGIFS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesfoundgifs.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesFoundGifsObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesFoundGifsType)
    Q_PROPERTY(qint32 nextOffset READ nextOffset WRITE setNextOffset NOTIFY nextOffsetChanged)
    Q_PROPERTY(QList<FoundGif> results READ results WRITE setResults NOTIFY resultsChanged)
    Q_PROPERTY(MessagesFoundGifs core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesFoundGifsType {
        TypeMessagesFoundGifs
    };

    MessagesFoundGifsObject(const MessagesFoundGifs &core, QObject *parent = 0);
    MessagesFoundGifsObject(QObject *parent = 0);
    virtual ~MessagesFoundGifsObject();

    void setNextOffset(qint32 nextOffset);
    qint32 nextOffset() const;

    void setResults(const QList<FoundGif> &results);
    QList<FoundGif> results() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const MessagesFoundGifs &core);
    MessagesFoundGifs core() const;

    MessagesFoundGifsObject &operator =(const MessagesFoundGifs &b);
    bool operator ==(const MessagesFoundGifs &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void nextOffsetChanged();
    void resultsChanged();

private Q_SLOTS:

private:
    MessagesFoundGifs m_core;
};

#endif // LQTG_TYPE_MESSAGESFOUNDGIFS_OBJECT

// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTAPPEVENT_OBJECT
#define LQTG_TYPE_INPUTAPPEVENT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputappevent.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputAppEventObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputAppEventType)
    Q_PROPERTY(QString data READ data WRITE setData NOTIFY dataChanged)
    Q_PROPERTY(qint64 peer READ peer WRITE setPeer NOTIFY peerChanged)
    Q_PROPERTY(qreal time READ time WRITE setTime NOTIFY timeChanged)
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(InputAppEvent core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputAppEventType {
        TypeInputAppEvent
    };

    InputAppEventObject(const InputAppEvent &core, QObject *parent = 0);
    InputAppEventObject(QObject *parent = 0);
    virtual ~InputAppEventObject();

    void setData(const QString &data);
    QString data() const;

    void setPeer(qint64 peer);
    qint64 peer() const;

    void setTime(qreal time);
    qreal time() const;

    void setType(const QString &type);
    QString type() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const InputAppEvent &core);
    InputAppEvent core() const;

    InputAppEventObject &operator =(const InputAppEvent &b);
    bool operator ==(const InputAppEvent &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void dataChanged();
    void peerChanged();
    void timeChanged();
    void typeChanged();

private Q_SLOTS:

private:
    InputAppEvent m_core;
};

#endif // LQTG_TYPE_INPUTAPPEVENT_OBJECT

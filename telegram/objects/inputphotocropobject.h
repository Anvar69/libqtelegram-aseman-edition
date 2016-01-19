// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTPHOTOCROP_OBJECT
#define LQTG_TYPE_INPUTPHOTOCROP_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputphotocrop.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputPhotoCropObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputPhotoCropType)
    Q_PROPERTY(qreal cropLeft READ cropLeft WRITE setCropLeft NOTIFY cropLeftChanged)
    Q_PROPERTY(qreal cropTop READ cropTop WRITE setCropTop NOTIFY cropTopChanged)
    Q_PROPERTY(qreal cropWidth READ cropWidth WRITE setCropWidth NOTIFY cropWidthChanged)
    Q_PROPERTY(InputPhotoCrop core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputPhotoCropType {
        TypeInputPhotoCropAuto,
        TypeInputPhotoCrop
    };

    InputPhotoCropObject(const InputPhotoCrop &core, QObject *parent = 0);
    InputPhotoCropObject(QObject *parent = 0);
    virtual ~InputPhotoCropObject();

    void setCropLeft(qreal cropLeft);
    qreal cropLeft() const;

    void setCropTop(qreal cropTop);
    qreal cropTop() const;

    void setCropWidth(qreal cropWidth);
    qreal cropWidth() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const InputPhotoCrop &core);
    InputPhotoCrop core() const;

    InputPhotoCropObject &operator =(const InputPhotoCrop &b);
    bool operator ==(const InputPhotoCrop &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void cropLeftChanged();
    void cropTopChanged();
    void cropWidthChanged();

private Q_SLOTS:

private:
    InputPhotoCrop m_core;
};

#endif // LQTG_TYPE_INPUTPHOTOCROP_OBJECT

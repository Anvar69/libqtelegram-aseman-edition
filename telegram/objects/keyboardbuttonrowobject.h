// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_KEYBOARDBUTTONROW_OBJECT
#define LQTG_TYPE_KEYBOARDBUTTONROW_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/keyboardbuttonrow.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT KeyboardButtonRowObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(KeyboardButtonRowType)
    Q_PROPERTY(QList<KeyboardButton> buttons READ buttons WRITE setButtons NOTIFY buttonsChanged)
    Q_PROPERTY(KeyboardButtonRow core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum KeyboardButtonRowType {
        TypeKeyboardButtonRow
    };

    KeyboardButtonRowObject(const KeyboardButtonRow &core, QObject *parent = 0);
    KeyboardButtonRowObject(QObject *parent = 0);
    virtual ~KeyboardButtonRowObject();

    void setButtons(const QList<KeyboardButton> &buttons);
    QList<KeyboardButton> buttons() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const KeyboardButtonRow &core);
    KeyboardButtonRow core() const;

    KeyboardButtonRowObject &operator =(const KeyboardButtonRow &b);
    bool operator ==(const KeyboardButtonRow &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void buttonsChanged();

private Q_SLOTS:

private:
    KeyboardButtonRow m_core;
};

#endif // LQTG_TYPE_KEYBOARDBUTTONROW_OBJECT

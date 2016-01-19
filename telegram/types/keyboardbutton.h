// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_KEYBOARDBUTTON
#define LQTG_TYPE_KEYBOARDBUTTON

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT KeyboardButton : public TelegramTypeObject
{
public:
    enum KeyboardButtonType {
        typeKeyboardButton = 0xa2fa4880
    };

    KeyboardButton(KeyboardButtonType classType = typeKeyboardButton, InboundPkt *in = 0);
    KeyboardButton(InboundPkt *in);
    KeyboardButton(const Null&);
    virtual ~KeyboardButton();

    void setText(const QString &text);
    QString text() const;

    void setClassType(KeyboardButtonType classType);
    KeyboardButtonType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const KeyboardButton &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_text;
    KeyboardButtonType m_classType;
};

Q_DECLARE_METATYPE(KeyboardButton)

#endif // LQTG_TYPE_KEYBOARDBUTTON

// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "keyboardbuttonrow.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

KeyboardButtonRow::KeyboardButtonRow(KeyboardButtonRowType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

KeyboardButtonRow::KeyboardButtonRow(InboundPkt *in) :
    m_classType(typeKeyboardButtonRow)
{
    fetch(in);
}

KeyboardButtonRow::KeyboardButtonRow(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeKeyboardButtonRow)
{
}

KeyboardButtonRow::~KeyboardButtonRow() {
}

void KeyboardButtonRow::setButtons(const QList<KeyboardButton> &buttons) {
    m_buttons = buttons;
}

QList<KeyboardButton> KeyboardButtonRow::buttons() const {
    return m_buttons;
}

bool KeyboardButtonRow::operator ==(const KeyboardButtonRow &b) const {
    return m_classType == b.m_classType &&
           m_buttons == b.m_buttons;
}

void KeyboardButtonRow::setClassType(KeyboardButtonRow::KeyboardButtonRowType classType) {
    m_classType = classType;
}

KeyboardButtonRow::KeyboardButtonRowType KeyboardButtonRow::classType() const {
    return m_classType;
}

bool KeyboardButtonRow::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeKeyboardButtonRow: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_buttons_length = in->fetchInt();
        m_buttons.clear();
        for (qint32 i = 0; i < m_buttons_length; i++) {
            KeyboardButton type;
            type.fetch(in);
            m_buttons.append(type);
        }
        m_classType = static_cast<KeyboardButtonRowType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool KeyboardButtonRow::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeKeyboardButtonRow: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_buttons.count());
        for (qint32 i = 0; i < m_buttons.count(); i++) {
            m_buttons[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}


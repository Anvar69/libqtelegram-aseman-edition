// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "helpinvitetextobject.h"

HelpInviteTextObject::HelpInviteTextObject(const HelpInviteText &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

HelpInviteTextObject::HelpInviteTextObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

HelpInviteTextObject::~HelpInviteTextObject() {
}

void HelpInviteTextObject::setMessage(const QString &message) {
    if(m_core.message() == message) return;
    m_core.setMessage(message);
    Q_EMIT messageChanged();
    Q_EMIT coreChanged();
}

QString HelpInviteTextObject::message() const {
    return m_core.message();
}

HelpInviteTextObject &HelpInviteTextObject::operator =(const HelpInviteText &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT messageChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool HelpInviteTextObject::operator ==(const HelpInviteText &b) const {
    return m_core == b;
}

void HelpInviteTextObject::setClassType(int classType) {
    HelpInviteText::HelpInviteTextType result;
    switch(classType) {
    case TypeHelpInviteText:
        result = HelpInviteText::typeHelpInviteText;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int HelpInviteTextObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case HelpInviteText::typeHelpInviteText:
        result = TypeHelpInviteText;
        break;
    }

    return result;
}

void HelpInviteTextObject::setCore(const HelpInviteText &core) {
    operator =(core);
}

HelpInviteText HelpInviteTextObject::core() const {
    return m_core;
}


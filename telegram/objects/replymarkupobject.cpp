// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "replymarkupobject.h"

ReplyMarkupObject::ReplyMarkupObject(const ReplyMarkup &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ReplyMarkupObject::ReplyMarkupObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ReplyMarkupObject::~ReplyMarkupObject() {
}

void ReplyMarkupObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 ReplyMarkupObject::flags() const {
    return m_core.flags();
}

void ReplyMarkupObject::setResize(bool resize) {
    if(m_core.resize() == resize) return;
    m_core.setResize(resize);
    Q_EMIT resizeChanged();
    Q_EMIT coreChanged();
}

bool ReplyMarkupObject::resize() const {
    return m_core.resize();
}

void ReplyMarkupObject::setRows(const QList<KeyboardButtonRow> &rows) {
    if(m_core.rows() == rows) return;
    m_core.setRows(rows);
    Q_EMIT rowsChanged();
    Q_EMIT coreChanged();
}

QList<KeyboardButtonRow> ReplyMarkupObject::rows() const {
    return m_core.rows();
}

void ReplyMarkupObject::setSelective(bool selective) {
    if(m_core.selective() == selective) return;
    m_core.setSelective(selective);
    Q_EMIT selectiveChanged();
    Q_EMIT coreChanged();
}

bool ReplyMarkupObject::selective() const {
    return m_core.selective();
}

void ReplyMarkupObject::setSingleUse(bool singleUse) {
    if(m_core.singleUse() == singleUse) return;
    m_core.setSingleUse(singleUse);
    Q_EMIT singleUseChanged();
    Q_EMIT coreChanged();
}

bool ReplyMarkupObject::singleUse() const {
    return m_core.singleUse();
}

ReplyMarkupObject &ReplyMarkupObject::operator =(const ReplyMarkup &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT flagsChanged();
    Q_EMIT resizeChanged();
    Q_EMIT rowsChanged();
    Q_EMIT selectiveChanged();
    Q_EMIT singleUseChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ReplyMarkupObject::operator ==(const ReplyMarkup &b) const {
    return m_core == b;
}

void ReplyMarkupObject::setClassType(int classType) {
    ReplyMarkup::ReplyMarkupType result;
    switch(classType) {
    case TypeReplyKeyboardHide:
        result = ReplyMarkup::typeReplyKeyboardHide;
        break;
    case TypeReplyKeyboardForceReply:
        result = ReplyMarkup::typeReplyKeyboardForceReply;
        break;
    case TypeReplyKeyboardMarkup:
        result = ReplyMarkup::typeReplyKeyboardMarkup;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int ReplyMarkupObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ReplyMarkup::typeReplyKeyboardHide:
        result = TypeReplyKeyboardHide;
        break;
    case ReplyMarkup::typeReplyKeyboardForceReply:
        result = TypeReplyKeyboardForceReply;
        break;
    case ReplyMarkup::typeReplyKeyboardMarkup:
        result = TypeReplyKeyboardMarkup;
        break;
    }

    return result;
}

void ReplyMarkupObject::setCore(const ReplyMarkup &core) {
    operator =(core);
}

ReplyMarkup ReplyMarkupObject::core() const {
    return m_core;
}


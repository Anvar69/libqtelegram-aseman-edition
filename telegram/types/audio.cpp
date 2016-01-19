// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "audio.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

Audio::Audio(AudioType classType, InboundPkt *in) :
    m_accessHash(0),
    m_date(0),
    m_dcId(0),
    m_duration(0),
    m_id(0),
    m_size(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Audio::Audio(InboundPkt *in) :
    m_accessHash(0),
    m_date(0),
    m_dcId(0),
    m_duration(0),
    m_id(0),
    m_size(0),
    m_classType(typeAudioEmpty)
{
    fetch(in);
}

Audio::Audio(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_date(0),
    m_dcId(0),
    m_duration(0),
    m_id(0),
    m_size(0),
    m_classType(typeAudioEmpty)
{
}

Audio::~Audio() {
}

void Audio::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 Audio::accessHash() const {
    return m_accessHash;
}

void Audio::setDate(qint32 date) {
    m_date = date;
}

qint32 Audio::date() const {
    return m_date;
}

void Audio::setDcId(qint32 dcId) {
    m_dcId = dcId;
}

qint32 Audio::dcId() const {
    return m_dcId;
}

void Audio::setDuration(qint32 duration) {
    m_duration = duration;
}

qint32 Audio::duration() const {
    return m_duration;
}

void Audio::setId(qint64 id) {
    m_id = id;
}

qint64 Audio::id() const {
    return m_id;
}

void Audio::setMimeType(const QString &mimeType) {
    m_mimeType = mimeType;
}

QString Audio::mimeType() const {
    return m_mimeType;
}

void Audio::setSize(qint32 size) {
    m_size = size;
}

qint32 Audio::size() const {
    return m_size;
}

bool Audio::operator ==(const Audio &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_date == b.m_date &&
           m_dcId == b.m_dcId &&
           m_duration == b.m_duration &&
           m_id == b.m_id &&
           m_mimeType == b.m_mimeType &&
           m_size == b.m_size;
}

void Audio::setClassType(Audio::AudioType classType) {
    m_classType = classType;
}

Audio::AudioType Audio::classType() const {
    return m_classType;
}

bool Audio::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAudioEmpty: {
        m_id = in->fetchLong();
        m_classType = static_cast<AudioType>(x);
        return true;
    }
        break;
    
    case typeAudio: {
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_date = in->fetchInt();
        m_duration = in->fetchInt();
        m_mimeType = in->fetchQString();
        m_size = in->fetchInt();
        m_dcId = in->fetchInt();
        m_classType = static_cast<AudioType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Audio::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAudioEmpty: {
        out->appendLong(m_id);
        return true;
    }
        break;
    
    case typeAudio: {
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        out->appendInt(m_date);
        out->appendInt(m_duration);
        out->appendQString(m_mimeType);
        out->appendInt(m_size);
        out->appendInt(m_dcId);
        return true;
    }
        break;
    
    default:
        return false;
    }
}


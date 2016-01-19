// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputchatphoto.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

InputChatPhoto::InputChatPhoto(InputChatPhotoType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputChatPhoto::InputChatPhoto(InboundPkt *in) :
    m_classType(typeInputChatPhotoEmpty)
{
    fetch(in);
}

InputChatPhoto::InputChatPhoto(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeInputChatPhotoEmpty)
{
}

InputChatPhoto::~InputChatPhoto() {
}

void InputChatPhoto::setCrop(const InputPhotoCrop &crop) {
    m_crop = crop;
}

InputPhotoCrop InputChatPhoto::crop() const {
    return m_crop;
}

void InputChatPhoto::setFile(const InputFile &file) {
    m_file = file;
}

InputFile InputChatPhoto::file() const {
    return m_file;
}

void InputChatPhoto::setId(const InputPhoto &id) {
    m_id = id;
}

InputPhoto InputChatPhoto::id() const {
    return m_id;
}

bool InputChatPhoto::operator ==(const InputChatPhoto &b) const {
    return m_classType == b.m_classType &&
           m_crop == b.m_crop &&
           m_file == b.m_file &&
           m_id == b.m_id;
}

void InputChatPhoto::setClassType(InputChatPhoto::InputChatPhotoType classType) {
    m_classType = classType;
}

InputChatPhoto::InputChatPhotoType InputChatPhoto::classType() const {
    return m_classType;
}

bool InputChatPhoto::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputChatPhotoEmpty: {
        m_classType = static_cast<InputChatPhotoType>(x);
        return true;
    }
        break;
    
    case typeInputChatUploadedPhoto: {
        m_file.fetch(in);
        m_crop.fetch(in);
        m_classType = static_cast<InputChatPhotoType>(x);
        return true;
    }
        break;
    
    case typeInputChatPhoto: {
        m_id.fetch(in);
        m_crop.fetch(in);
        m_classType = static_cast<InputChatPhotoType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputChatPhoto::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputChatPhotoEmpty: {
        return true;
    }
        break;
    
    case typeInputChatUploadedPhoto: {
        m_file.push(out);
        m_crop.push(out);
        return true;
    }
        break;
    
    case typeInputChatPhoto: {
        m_id.push(out);
        m_crop.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}


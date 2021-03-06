// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photos.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

using namespace Tg;

Functions::Photos::Photos() {
}

Functions::Photos::~Photos() {
}

bool Functions::Photos::updateProfilePhoto(OutboundPkt *out, const InputPhoto &id, const InputPhotoCrop &crop) {
    out->appendInt(fncPhotosUpdateProfilePhoto);
    if(!id.push(out)) return false;
    if(!crop.push(out)) return false;
    return true;
}

UserProfilePhoto Functions::Photos::updateProfilePhotoResult(InboundPkt *in) {
    UserProfilePhoto result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Photos::uploadProfilePhoto(OutboundPkt *out, const InputFile &file, const QString &caption, const InputGeoPoint &geoPoint, const InputPhotoCrop &crop) {
    out->appendInt(fncPhotosUploadProfilePhoto);
    if(!file.push(out)) return false;
    out->appendQString(caption);
    if(!geoPoint.push(out)) return false;
    if(!crop.push(out)) return false;
    return true;
}

PhotosPhoto Functions::Photos::uploadProfilePhotoResult(InboundPkt *in) {
    PhotosPhoto result;
    if(!result.fetch(in)) return result;
    return result;
}

bool Functions::Photos::deletePhotos(OutboundPkt *out, const QList<InputPhoto> &id) {
    out->appendInt(fncPhotosDeletePhotos);
    out->appendInt(CoreTypes::typeVector);
    out->appendInt(id.count());
    for (qint32 i = 0; i < id.count(); i++) {
        if(!id[i].push(out)) return false;
    }
    return true;
}

QList<qint64> Functions::Photos::deletePhotosResult(InboundPkt *in) {
    QList<qint64> result;
    if(in->fetchInt() != (qint32)CoreTypes::typeVector) return result;
    qint32 result_length = in->fetchInt();
    result.clear();
    for (qint32 i = 0; i < result_length; i++) {
        qint64 type;
        type = in->fetchLong();
        result.append(type);
    }
    return result;
}

bool Functions::Photos::getUserPhotos(OutboundPkt *out, const InputUser &userId, qint32 offset, qint32 maxId, qint32 limit) {
    out->appendInt(fncPhotosGetUserPhotos);
    if(!userId.push(out)) return false;
    out->appendInt(offset);
    out->appendInt(maxId);
    out->appendInt(limit);
    return true;
}

PhotosPhotos Functions::Photos::getUserPhotosResult(InboundPkt *in) {
    PhotosPhotos result;
    if(!result.fetch(in)) return result;
    return result;
}


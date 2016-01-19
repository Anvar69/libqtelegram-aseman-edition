// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_GEOPOINT
#define LQTG_TYPE_GEOPOINT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT GeoPoint : public TelegramTypeObject
{
public:
    enum GeoPointType {
        typeGeoPointEmpty = 0x1117dd5f,
        typeGeoPoint = 0x2049d70c
    };

    GeoPoint(GeoPointType classType = typeGeoPointEmpty, InboundPkt *in = 0);
    GeoPoint(InboundPkt *in);
    GeoPoint(const Null&);
    virtual ~GeoPoint();

    void setLat(qreal lat);
    qreal lat() const;

    void setLongValue(qreal longValue);
    qreal longValue() const;

    void setClassType(GeoPointType classType);
    GeoPointType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const GeoPoint &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qreal m_lat;
    qreal m_longValue;
    GeoPointType m_classType;
};

Q_DECLARE_METATYPE(GeoPoint)

#endif // LQTG_TYPE_GEOPOINT

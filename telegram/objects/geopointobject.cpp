// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "geopointobject.h"

GeoPointObject::GeoPointObject(const GeoPoint &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

GeoPointObject::GeoPointObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

GeoPointObject::~GeoPointObject() {
}

void GeoPointObject::setLat(qreal lat) {
    if(m_core.lat() == lat) return;
    m_core.setLat(lat);
    Q_EMIT latChanged();
    Q_EMIT coreChanged();
}

qreal GeoPointObject::lat() const {
    return m_core.lat();
}

void GeoPointObject::setLongValue(qreal longValue) {
    if(m_core.longValue() == longValue) return;
    m_core.setLongValue(longValue);
    Q_EMIT longValueChanged();
    Q_EMIT coreChanged();
}

qreal GeoPointObject::longValue() const {
    return m_core.longValue();
}

GeoPointObject &GeoPointObject::operator =(const GeoPoint &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT latChanged();
    Q_EMIT longValueChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool GeoPointObject::operator ==(const GeoPoint &b) const {
    return m_core == b;
}

void GeoPointObject::setClassType(int classType) {
    GeoPoint::GeoPointType result;
    switch(classType) {
    case TypeGeoPointEmpty:
        result = GeoPoint::typeGeoPointEmpty;
        break;
    case TypeGeoPoint:
        result = GeoPoint::typeGeoPoint;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int GeoPointObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case GeoPoint::typeGeoPointEmpty:
        result = TypeGeoPointEmpty;
        break;
    case GeoPoint::typeGeoPoint:
        result = TypeGeoPoint;
        break;
    }

    return result;
}

void GeoPointObject::setCore(const GeoPoint &core) {
    operator =(core);
}

GeoPoint GeoPointObject::core() const {
    return m_core;
}


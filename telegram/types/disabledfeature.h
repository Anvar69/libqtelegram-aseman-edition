// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DISABLEDFEATURE
#define LQTG_TYPE_DISABLEDFEATURE

#include "telegramtypeobject.h"
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT DisabledFeature : public TelegramTypeObject
{
public:
    enum DisabledFeatureType {
        typeDisabledFeature = 0xae636f24
    };

    DisabledFeature(DisabledFeatureType classType = typeDisabledFeature, InboundPkt *in = 0);
    DisabledFeature(InboundPkt *in);
    virtual ~DisabledFeature();

    void setDescription(const QString &description);
    QString description() const;

    void setFeature(const QString &feature);
    QString feature() const;

    void setClassType(DisabledFeatureType classType);
    DisabledFeatureType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const DisabledFeature &b);

private:
    QString m_description;
    QString m_feature;
    DisabledFeatureType m_classType;
};

#endif // LQTG_TYPE_DISABLEDFEATURE

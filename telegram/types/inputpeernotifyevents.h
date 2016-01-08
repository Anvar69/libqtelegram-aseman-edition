// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTPEERNOTIFYEVENTS
#define LQTG_TYPE_INPUTPEERNOTIFYEVENTS

#include "telegramtypeobject.h"

class LIBQTELEGRAMSHARED_EXPORT InputPeerNotifyEvents : public TelegramTypeObject
{
public:
    enum InputPeerNotifyEventsType {
        typeInputPeerNotifyEventsEmpty = 0xf03064d8,
        typeInputPeerNotifyEventsAll = 0xe86a2c74
    };

    InputPeerNotifyEvents(InputPeerNotifyEventsType classType = typeInputPeerNotifyEventsEmpty, InboundPkt *in = 0);
    InputPeerNotifyEvents(InboundPkt *in);
    virtual ~InputPeerNotifyEvents();

    void setClassType(InputPeerNotifyEventsType classType);
    InputPeerNotifyEventsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputPeerNotifyEvents &b);

private:
    InputPeerNotifyEventsType m_classType;
};

#endif // LQTG_TYPE_INPUTPEERNOTIFYEVENTS
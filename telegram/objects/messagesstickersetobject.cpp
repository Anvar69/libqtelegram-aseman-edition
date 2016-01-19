// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesstickersetobject.h"

MessagesStickerSetObject::MessagesStickerSetObject(const MessagesStickerSet &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_set(0),
    m_core(core)
{
    m_set = new StickerSetObject(m_core.set(), this);
    connect(m_set, SIGNAL(coreChanged()), SLOT(coreSetChanged()));
}

MessagesStickerSetObject::MessagesStickerSetObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_set(0),
    m_core()
{
    m_set = new StickerSetObject(m_core.set(), this);
    connect(m_set, SIGNAL(coreChanged()), SLOT(coreSetChanged()));
}

MessagesStickerSetObject::~MessagesStickerSetObject() {
}

void MessagesStickerSetObject::setDocuments(const QList<Document> &documents) {
    if(m_core.documents() == documents) return;
    m_core.setDocuments(documents);
    Q_EMIT documentsChanged();
    Q_EMIT coreChanged();
}

QList<Document> MessagesStickerSetObject::documents() const {
    return m_core.documents();
}

void MessagesStickerSetObject::setPacks(const QList<StickerPack> &packs) {
    if(m_core.packs() == packs) return;
    m_core.setPacks(packs);
    Q_EMIT packsChanged();
    Q_EMIT coreChanged();
}

QList<StickerPack> MessagesStickerSetObject::packs() const {
    return m_core.packs();
}

void MessagesStickerSetObject::setSet(StickerSetObject* set) {
    if(m_set == set) return;
    if(m_set) delete m_set;
    m_set = set;
    if(m_set) {
        m_set->setParent(this);
        m_core.setSet(m_set->core());
        connect(m_set, SIGNAL(coreChanged()), SLOT(coreSetChanged()));
    }
    Q_EMIT setChanged();
    Q_EMIT coreChanged();
}

StickerSetObject*  MessagesStickerSetObject::set() const {
    return m_set;
}

MessagesStickerSetObject &MessagesStickerSetObject::operator =(const MessagesStickerSet &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_set->setCore(b.set());

    Q_EMIT documentsChanged();
    Q_EMIT packsChanged();
    Q_EMIT setChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool MessagesStickerSetObject::operator ==(const MessagesStickerSet &b) const {
    return m_core == b;
}

void MessagesStickerSetObject::setClassType(int classType) {
    MessagesStickerSet::MessagesStickerSetType result;
    switch(classType) {
    case TypeMessagesStickerSet:
        result = MessagesStickerSet::typeMessagesStickerSet;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

int MessagesStickerSetObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessagesStickerSet::typeMessagesStickerSet:
        result = TypeMessagesStickerSet;
        break;
    }

    return result;
}

void MessagesStickerSetObject::setCore(const MessagesStickerSet &core) {
    operator =(core);
}

MessagesStickerSet MessagesStickerSetObject::core() const {
    return m_core;
}

void MessagesStickerSetObject::coreSetChanged() {
    if(m_core.set() == m_set->core()) return;
    m_core.setSet(m_set->core());
    Q_EMIT setChanged();
    Q_EMIT coreChanged();
}


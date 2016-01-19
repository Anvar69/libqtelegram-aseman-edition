// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_REPORTREASON_OBJECT
#define LQTG_TYPE_REPORTREASON_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/reportreason.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ReportReasonObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ReportReasonType)
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)
    Q_PROPERTY(ReportReason core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(int classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ReportReasonType {
        TypeInputReportReasonSpam,
        TypeInputReportReasonViolence,
        TypeInputReportReasonPornography,
        TypeInputReportReasonOther
    };

    ReportReasonObject(const ReportReason &core, QObject *parent = 0);
    ReportReasonObject(QObject *parent = 0);
    virtual ~ReportReasonObject();

    void setText(const QString &text);
    QString text() const;

    void setClassType(int classType);
    int classType() const;

    void setCore(const ReportReason &core);
    ReportReason core() const;

    ReportReasonObject &operator =(const ReportReason &b);
    bool operator ==(const ReportReason &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void textChanged();

private Q_SLOTS:

private:
    ReportReason m_core;
};

#endif // LQTG_TYPE_REPORTREASON_OBJECT

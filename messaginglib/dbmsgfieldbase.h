#pragma once

#include <QVariant>

#include "messaginglib_global.h"

class MESSAGINGLIB_EXPORT DbMsgFieldBase
{
public:
    DbMsgFieldBase();
    virtual ~DbMsgFieldBase();

    bool hasValue() const;
    virtual void clear();

    bool touched() const;
    void setTouched(bool touched);

    virtual QVariant toVariant() const = 0;
    virtual void setVariant(const QVariant &variant) = 0;

protected:
    void setHasValue(bool hasValue);

private:
    bool m_hasValue;
    bool m_touched;
};

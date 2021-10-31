#pragma once

#include <QtCore/QCoreApplication>
#include <QtCore/QJniObject>

class __JniBaseClass : public QJniObject
{
public:
    template<typename ...Ts>
    explicit __JniBaseClass(const char *className, const char *sig, Ts...agv) : QJniObject(className, sig, std::forward<Ts>(agv)...) {}
    __JniBaseClass(QJniObject obj);
};

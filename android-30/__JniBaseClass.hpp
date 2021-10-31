#pragma once

#include <QtAndroidExtras/QAndroidJniObject>

class __JniBaseClass : public QAndroidJniObject
{
public:
    template<typename ...Ts>
    explicit __JniBaseClass(const char *className, const char *sig, Ts...agv) : QAndroidJniObject(className, sig, std::forward<Ts>(agv)...) {}
    __JniBaseClass(QAndroidJniObject obj);
};

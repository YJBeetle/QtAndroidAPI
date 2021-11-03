#pragma once
#include <QtAndroidExtras/QAndroidJniObject>
class JObject : public QAndroidJniObject
{
public:
    explicit JObject();
    template<typename ...Ts>
    explicit JObject(const char *className, const char *sig, Ts...agv) : QAndroidJniObject(className, sig, std::forward<Ts>(agv)...) {}
    JObject(QAndroidJniObject obj);
};

#pragma once
#include <QtCore/QCoreApplication>
#include <QtCore/QJniObject>
class JObject : public QJniObject
{
public:
    explicit JObject();
    template<typename ...Ts>
    explicit JObject(const char *className, const char *sig, Ts...agv) : QJniObject(className, sig, std::forward<Ts>(agv)...) {}
    JObject(QJniObject obj);
};

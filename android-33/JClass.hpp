#pragma once
#include "./JObject.hpp"
class JClass : public JObject
{
public:
    template<typename ...Ts>
    explicit JClass(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
    JClass(QAndroidJniObject obj) : JObject(obj) {}
    
};

#pragma once
#include "./JObject.hpp"
class JThrowable : public JObject
{
public:
    template<typename ...Ts>
    explicit JThrowable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
    JThrowable(QJniObject obj);
    
};

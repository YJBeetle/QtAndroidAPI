#pragma once
#include "./JObject.hpp"
class JArray : public JObject
{
public:
    template<typename ...Ts>
    explicit JArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
    JArray(QJniObject obj);
    
};

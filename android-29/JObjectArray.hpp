#pragma once
#include "./JArray.hpp"
class JObjectArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JObjectArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JObjectArray(QJniObject obj) : JArray(obj) {}
    
};

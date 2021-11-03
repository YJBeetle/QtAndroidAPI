#pragma once
#include "./JArray.hpp"
class JByteArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JByteArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JByteArray(QJniObject obj);
    
};

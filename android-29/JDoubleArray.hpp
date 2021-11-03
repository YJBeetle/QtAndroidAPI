#pragma once
#include "./JArray.hpp"
class JDoubleArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JDoubleArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JDoubleArray(QJniObject obj);
    
};

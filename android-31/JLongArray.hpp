#pragma once
#include "./JArray.hpp"
class JLongArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JLongArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JLongArray(QJniObject obj);
    
};

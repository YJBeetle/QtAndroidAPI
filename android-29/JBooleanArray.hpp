#pragma once
#include "./JArray.hpp"
class JBooleanArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JBooleanArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JBooleanArray(QAndroidJniObject obj);
    
};

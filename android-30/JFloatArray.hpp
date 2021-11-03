#pragma once
#include "./JArray.hpp"
class JFloatArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JFloatArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JFloatArray(QAndroidJniObject obj);
};

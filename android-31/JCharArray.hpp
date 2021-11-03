#pragma once
#include "./JArray.hpp"
class JCharArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JCharArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JCharArray(QAndroidJniObject obj);
};

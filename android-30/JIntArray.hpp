#pragma once
#include "./JArray.hpp"
class JIntArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JIntArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JIntArray(QJniObject obj);
};

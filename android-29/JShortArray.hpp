#pragma once
#include "./JArray.hpp"
class JShortArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JShortArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JShortArray(QJniObject obj);
};

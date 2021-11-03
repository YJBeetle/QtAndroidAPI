#include "./JString.hpp"
JString::JString(QAndroidJniObject obj) : JObject(obj) {}
JString::JString(const QString &string) : JObject(QAndroidJniObject::fromString(string)) {}

#include "./JString.hpp"
JString::JString(QJniObject obj) : JObject(obj) {}
JString::JString(const QString &string) : JObject(QJniObject::fromString(string)) {}

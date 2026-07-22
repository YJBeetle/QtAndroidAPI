#pragma once
#include "./JArray.hpp"
#include <QtCore/QJniEnvironment>
#include <QtCore/QByteArray>
class JByteArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JByteArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JByteArray(QJniObject obj) : JArray(obj) {}
    JByteArray(const QByteArray &bytes) : JArray(QJniObject())
    {
        QJniEnvironment env;
        jbyteArray array = env->NewByteArray(bytes.size());
        if (array) {
            env->SetByteArrayRegion(array, 0, bytes.size(), reinterpret_cast<const jbyte*>(bytes.constData()));
            *static_cast<QJniObject*>(this) = QJniObject(array);
        }
    }
    QByteArray toByteArray() const
    {
        if (!isValid()) return QByteArray();
        QJniEnvironment env;
        jbyteArray array = object<jbyteArray>();
        if (!array) return QByteArray();
        jsize len = env->GetArrayLength(array);
        jbyte* buffer = env->GetByteArrayElements(array, nullptr);
        QByteArray result(reinterpret_cast<const char*>(buffer), len);
        env->ReleaseByteArrayElements(array, buffer, JNI_ABORT);
        return result;
    }
    operator QByteArray() const { return toByteArray(); }
};

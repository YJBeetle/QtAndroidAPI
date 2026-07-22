#pragma once
#include "./JArray.hpp"
#include <QtCore/QJniEnvironment>
#include <QtCore/QStringList>
class JObjectArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JObjectArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JObjectArray(QJniObject obj) : JArray(obj) {}
    JObjectArray(const QStringList &list) : JArray(QJniObject())
    {
        QJniEnvironment env;
        jclass stringClass = env->FindClass("java/lang/String");
        jobjectArray array = env->NewObjectArray(list.size(), stringClass, nullptr);
        for (int i = 0; i < list.size(); ++i) {
            QJniObject jstr = QJniObject::fromString(list[i]);
            env->SetObjectArrayElement(array, i, jstr.object());
        }
        *static_cast<QJniObject*>(this) = QJniObject(array);
    }
    QStringList toStringList() const
    {
        if (!isValid()) return QStringList();
        QJniEnvironment env;
        jobjectArray array = object<jobjectArray>();
        if (!array) return QStringList();
        jsize len = env->GetArrayLength(array);
        QStringList result;
        result.reserve(len);
        for (jsize i = 0; i < len; ++i) {
            jobject elem = env->GetObjectArrayElement(array, i);
            result.append(QJniObject(elem).toString());
            env->DeleteLocalRef(elem);
        }
        return result;
    }
    operator QStringList() const { return toStringList(); }
};

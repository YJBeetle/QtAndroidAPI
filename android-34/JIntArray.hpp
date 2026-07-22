#pragma once
#include "./JArray.hpp"
#include <QtCore/QJniEnvironment>
#include <QtCore/QList>
class JIntArray : public JArray
{
public:
    template<typename ...Ts>
    explicit JIntArray(const char *className, const char *sig, Ts...agv) : JArray(className, sig, std::forward<Ts>(agv)...) {}
    JIntArray(QJniObject obj) : JArray(obj) {}
    JIntArray(const QList<int> &list) : JArray(QJniObject())
    {
        QJniEnvironment env;
        jintArray array = env->NewIntArray(list.size());
        if (array) {
            env->SetIntArrayRegion(array, 0, list.size(), reinterpret_cast<const jint*>(list.constData()));
            *static_cast<QJniObject*>(this) = QJniObject(array);
        }
    }
    QList<int> toQList() const
    {
        if (!isValid()) return {};
        QJniEnvironment env;
        jintArray array = object<jintArray>();
        if (!array) return {};
        jsize len = env->GetArrayLength(array);
        QList<int> result(len, 0);
        env->GetIntArrayRegion(array, 0, len, reinterpret_cast<jint*>(result.data()));
        return result;
    }
    operator QList<int>() const { return toQList(); }
};

#pragma once

#include <QtAndroidExtras/QAndroidJniObject>

class __JniBaseClass
{
protected:
    QAndroidJniObject __thiz;

public:
    __JniBaseClass() = default;
    __JniBaseClass(QAndroidJniObject obj);

    QAndroidJniObject __jniObject();
};

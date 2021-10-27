#include "./__JniBaseClass.hpp"

__JniBaseClass::__JniBaseClass(QAndroidJniObject obj) : __thiz(obj) {}

QAndroidJniObject __JniBaseClass::__jniObject() { return __thiz; }

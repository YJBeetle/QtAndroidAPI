#pragma once

#include <QtAndroidExtras/QAndroidJniObject>

#define toJString(str) QAndroidJniObject::fromString(str).object<jstring>()

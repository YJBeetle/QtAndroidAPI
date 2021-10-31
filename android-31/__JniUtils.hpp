#pragma once

#include <QtAndroidExtras/QAndroidJniObject>

#define JSTRING(str) QAndroidJniObject::fromString(str).object<jstring>()

#define ACTIVITY android::app::Activity(QtAndroid::androidActivity())
#define SERVICE android::app::Service(QtAndroid::androidService())
#define CONTEXT android::content::Context(QtAndroid::androidContext())

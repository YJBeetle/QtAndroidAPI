#pragma once
#include <QtAndroidExtras/QAndroidJniObject>
#include <QtAndroidExtras/QtAndroid>
#include <android/app/Activity.hpp>
#include <android/app/Service.hpp>
#include <android/content/Context.hpp>
#define JSTRING(str) QAndroidJniObject::fromString(str).object<jstring>()
#define ACTIVITY android::app::Activity(QtAndroid::androidActivity())
#define SERVICE android::app::Service(QtAndroid::androidService())
#define CONTEXT android::content::Context(QtAndroid::androidContext())

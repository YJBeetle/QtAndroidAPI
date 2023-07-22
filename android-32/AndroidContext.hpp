#pragma once
#include <QtAndroidExtras/QtAndroid>
#include "./android/app/Activity.hpp"
#include "./android/app/Service.hpp"
#include "./android/content/Context.hpp"
#define ACTIVITY android::app::Activity(QtAndroid::androidActivity())
#define SERVICE android::app::Service(QtAndroid::androidService())
#define CONTEXT android::content::Context(QtAndroid::androidContext())

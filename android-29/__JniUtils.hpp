#pragma once

#include <QtCore/QCoreApplication>
#include <QtCore/QJniObject>
#include <android/app/Activity.hpp>
#include <android/app/Service.hpp>
#include <android/content/Context.hpp>

#define JSTRING(str) QJniObject::fromString(str).object<jstring>()

#define ACTIVITY QNativeInterface::QAndroidApplication::isActivityContext()?android::app::Activity(QNativeInterface::QAndroidApplication::context()):android::app::Activity()
#define SERVICE QNativeInterface::QAndroidApplication::isActivityContext()?android::app::Service():android::app::Service(QNativeInterface::QAndroidApplication::context)
#define CONTEXT android::content::Context(QNativeInterface::QAndroidApplication::context())

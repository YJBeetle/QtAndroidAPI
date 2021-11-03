#pragma once
#include <QtCore/QCoreApplication>
#include <android/app/Activity.hpp>
#include <android/app/Service.hpp>
#include <android/content/Context.hpp>
#define ACTIVITY android::app::Activity(QNativeInterface::QAndroidApplication::isActivityContext()?QNativeInterface::QAndroidApplication::context():QJniObject())
#define SERVICE android::app::Service(QNativeInterface::QAndroidApplication::isActivityContext()?QJniObject():QNativeInterface::QAndroidApplication::context)
#define CONTEXT android::content::Context(QNativeInterface::QAndroidApplication::context())

#pragma once

#ifndef ANDROID_APPWIDGET_APPWIDGETPROVIDER
#define ANDROID_APPWIDGET_APPWIDGETPROVIDER

#include "../../__JniBaseClass.hpp"
#include "../content/BroadcastReceiver.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::appwidget
{
	class AppWidgetManager;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::appwidget
{
	class AppWidgetProvider : public __jni_impl::android::content::BroadcastReceiver
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onEnabled(__jni_impl::android::content::Context arg0);
		void onDisabled(__jni_impl::android::content::Context arg0);
		void onAppWidgetOptionsChanged(__jni_impl::android::content::Context arg0, __jni_impl::android::appwidget::AppWidgetManager arg1, jint arg2, __jni_impl::android::os::Bundle arg3);
		void onDeleted(__jni_impl::android::content::Context arg0, jintArray arg1);
		void onRestored(__jni_impl::android::content::Context arg0, jintArray arg1, jintArray arg2);
		void onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1);
		void onUpdate(__jni_impl::android::content::Context arg0, __jni_impl::android::appwidget::AppWidgetManager arg1, jintArray arg2);
	};
} // namespace __jni_impl::android::appwidget

#include "../content/Context.hpp"
#include "AppWidgetManager.hpp"
#include "../os/Bundle.hpp"
#include "../content/Intent.hpp"

namespace __jni_impl::android::appwidget
{
	// Fields
	
	// Constructors
	void AppWidgetProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetProvider",
			"()V"
		);
	}
	
	// Methods
	void AppWidgetProvider::onEnabled(__jni_impl::android::content::Context arg0)
	{
		__thiz.callMethod<void>(
			"onEnabled",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetProvider::onDisabled(__jni_impl::android::content::Context arg0)
	{
		__thiz.callMethod<void>(
			"onDisabled",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetProvider::onAppWidgetOptionsChanged(__jni_impl::android::content::Context arg0, __jni_impl::android::appwidget::AppWidgetManager arg1, jint arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"onAppWidgetOptionsChanged",
			"(Landroid/content/Context;Landroid/appwidget/AppWidgetManager;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void AppWidgetProvider::onDeleted(__jni_impl::android::content::Context arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"onDeleted",
			"(Landroid/content/Context;[I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AppWidgetProvider::onRestored(__jni_impl::android::content::Context arg0, jintArray arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"onRestored",
			"(Landroid/content/Context;[I[I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AppWidgetProvider::onReceive(__jni_impl::android::content::Context arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AppWidgetProvider::onUpdate(__jni_impl::android::content::Context arg0, __jni_impl::android::appwidget::AppWidgetManager arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"onUpdate",
			"(Landroid/content/Context;Landroid/appwidget/AppWidgetManager;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::appwidget

namespace android::appwidget
{
	class AppWidgetProvider : public __jni_impl::android::appwidget::AppWidgetProvider
	{
	public:
		AppWidgetProvider(QAndroidJniObject obj) { __thiz = obj; }
		AppWidgetProvider()
		{
			__constructor();
		}
	};
} // namespace android::appwidget

#endif // ANDROID_APPWIDGET_APPWIDGETPROVIDER


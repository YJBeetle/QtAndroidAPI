#pragma once

#ifndef ANDROID_LOCATION_SETTINGINJECTORSERVICE
#define ANDROID_LOCATION_SETTINGINJECTORSERVICE

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::location
{
	class SettingInjectorService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_INJECTED_SETTING_CHANGED();
		static QAndroidJniObject ACTION_SERVICE_INTENT();
		static QAndroidJniObject ATTRIBUTES_NAME();
		static QAndroidJniObject META_DATA_NAME();
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		void onStart(__jni_impl::android::content::Intent arg0, jint arg1);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		jint onStartCommand(__jni_impl::android::content::Intent arg0, jint arg1, jint arg2);
		static void refreshSettings(__jni_impl::android::content::Context arg0);
	};
} // namespace __jni_impl::android::location

#include "../content/Intent.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::location
{
	// Fields
	QAndroidJniObject SettingInjectorService::ACTION_INJECTED_SETTING_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_INJECTED_SETTING_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingInjectorService::ACTION_SERVICE_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_SERVICE_INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingInjectorService::ATTRIBUTES_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ATTRIBUTES_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SettingInjectorService::META_DATA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"META_DATA_NAME",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void SettingInjectorService::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.SettingInjectorService",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	void SettingInjectorService::onStart(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SettingInjectorService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	jint SettingInjectorService::onStartCommand(__jni_impl::android::content::Intent arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void SettingInjectorService::refreshSettings(__jni_impl::android::content::Context arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.location.SettingInjectorService",
			"refreshSettings",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class SettingInjectorService : public __jni_impl::android::location::SettingInjectorService
	{
	public:
		SettingInjectorService(QAndroidJniObject obj) { __thiz = obj; }
		SettingInjectorService(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_SETTINGINJECTORSERVICE


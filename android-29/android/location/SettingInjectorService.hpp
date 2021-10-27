#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::location
{
	class SettingInjectorService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring ACTION_INJECTED_SETTING_CHANGED();
		static jstring ACTION_SERVICE_INTENT();
		static jstring ATTRIBUTES_NAME();
		static jstring META_DATA_NAME();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		static void refreshSettings(__jni_impl::android::content::Context arg0);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onStart(__jni_impl::android::content::Intent arg0, jint arg1);
		jint onStartCommand(__jni_impl::android::content::Intent arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::location

#include "../content/Context.hpp"
#include "../content/Intent.hpp"

namespace __jni_impl::android::location
{
	// Fields
	jstring SettingInjectorService::ACTION_INJECTED_SETTING_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_INJECTED_SETTING_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingInjectorService::ACTION_SERVICE_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_SERVICE_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingInjectorService::ATTRIBUTES_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ATTRIBUTES_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingInjectorService::META_DATA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"META_DATA_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SettingInjectorService::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.SettingInjectorService",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SettingInjectorService::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.SettingInjectorService",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	void SettingInjectorService::refreshSettings(__jni_impl::android::content::Context arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.location.SettingInjectorService",
			"refreshSettings",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SettingInjectorService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void SettingInjectorService::onStart(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint SettingInjectorService::onStartCommand(__jni_impl::android::content::Intent arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
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


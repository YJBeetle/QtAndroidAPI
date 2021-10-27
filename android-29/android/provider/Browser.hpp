#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::provider
{
	class Browser : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_APPLICATION_ID();
		static jstring EXTRA_CREATE_NEW_TAB();
		static jstring EXTRA_HEADERS();
		static jstring INITIAL_ZOOM_LEVEL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void sendString(__jni_impl::android::content::Context arg0, jstring arg1);
		static void sendString(__jni_impl::android::content::Context arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::provider

#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Browser::EXTRA_APPLICATION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_APPLICATION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::EXTRA_CREATE_NEW_TAB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_CREATE_NEW_TAB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::EXTRA_HEADERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_HEADERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Browser::INITIAL_ZOOM_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Browser",
			"INITIAL_ZOOM_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Browser::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Browser",
			"()V"
		);
	}
	
	// Methods
	void Browser::sendString(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Browser",
			"sendString",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Browser::sendString(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Browser",
			"sendString",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Browser : public __jni_impl::android::provider::Browser
	{
	public:
		Browser(QAndroidJniObject obj) { __thiz = obj; }
		Browser()
		{
			__constructor();
		}
	};
} // namespace android::provider


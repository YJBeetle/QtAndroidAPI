#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_SMS
#define ANDROID_PROVIDER_TELEPHONY_SMS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::provider
{
	class Telephony_Sms : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getDefaultSmsPackage(__jni_impl::android::content::Context arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Sms::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Sms::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Sms::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Sms",
			"(V)V");
	}
	
	// Methods
	jstring Telephony_Sms::getDefaultSmsPackage(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$Sms",
			"getDefaultSmsPackage",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Sms : public __jni_impl::android::provider::Telephony_Sms
	{
	public:
		Telephony_Sms(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Sms()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_SMS


#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_SMS_OUTBOX
#define ANDROID_PROVIDER_TELEPHONY_SMS_OUTBOX

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Sms_Outbox : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Sms_Outbox::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Outbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Sms_Outbox::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Outbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Sms_Outbox::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Sms$Outbox",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Sms_Outbox : public __jni_impl::android::provider::Telephony_Sms_Outbox
	{
	public:
		Telephony_Sms_Outbox(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Sms_Outbox()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_SMS_OUTBOX


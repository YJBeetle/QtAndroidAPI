#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_SMS_INBOX
#define ANDROID_PROVIDER_TELEPHONY_SMS_INBOX

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Sms_Inbox : public __JniBaseClass
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
	QAndroidJniObject Telephony_Sms_Inbox::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Inbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Sms_Inbox::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Inbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Sms_Inbox::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Sms$Inbox",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Sms_Inbox : public __jni_impl::android::provider::Telephony_Sms_Inbox
	{
	public:
		Telephony_Sms_Inbox(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Sms_Inbox()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_SMS_INBOX


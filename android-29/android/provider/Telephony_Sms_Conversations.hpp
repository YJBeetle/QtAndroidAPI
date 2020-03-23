#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_SMS_CONVERSATIONS
#define ANDROID_PROVIDER_TELEPHONY_SMS_CONVERSATIONS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Sms_Conversations : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		static QAndroidJniObject MESSAGE_COUNT();
		static QAndroidJniObject SNIPPET();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Sms_Conversations::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Sms_Conversations::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Conversations::MESSAGE_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"MESSAGE_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Sms_Conversations::SNIPPET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"SNIPPET",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Telephony_Sms_Conversations::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Sms$Conversations",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Sms_Conversations : public __jni_impl::android::provider::Telephony_Sms_Conversations
	{
	public:
		Telephony_Sms_Conversations(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Sms_Conversations()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_SMS_CONVERSATIONS


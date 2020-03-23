#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_SMS_DRAFT
#define ANDROID_PROVIDER_TELEPHONY_SMS_DRAFT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Sms_Draft : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Sms_Draft::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Draft",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Sms_Draft::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Draft",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Telephony_Sms_Draft::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Sms$Draft",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Sms_Draft : public __jni_impl::android::provider::Telephony_Sms_Draft
	{
	public:
		Telephony_Sms_Draft(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Sms_Draft()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_SMS_DRAFT


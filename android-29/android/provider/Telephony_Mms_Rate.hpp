#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMS_RATE
#define ANDROID_PROVIDER_TELEPHONY_MMS_RATE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Mms_Rate : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject SENT_TIME();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Mms_Rate::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Rate",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Mms_Rate::SENT_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Rate",
			"SENT_TIME",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Telephony_Mms_Rate::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms$Rate",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms_Rate : public __jni_impl::android::provider::Telephony_Mms_Rate
	{
	public:
		Telephony_Mms_Rate(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms_Rate()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_MMS_RATE


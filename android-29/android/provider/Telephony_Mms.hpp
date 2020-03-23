#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMS
#define ANDROID_PROVIDER_TELEPHONY_MMS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Mms : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DEFAULT_SORT_ORDER();
		static QAndroidJniObject REPORT_REQUEST_URI();
		static QAndroidJniObject REPORT_STATUS_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Mms::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Mms::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms::REPORT_REQUEST_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms",
			"REPORT_REQUEST_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Mms::REPORT_STATUS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms",
			"REPORT_STATUS_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void Telephony_Mms::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms : public __jni_impl::android::provider::Telephony_Mms
	{
	public:
		Telephony_Mms(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_MMS


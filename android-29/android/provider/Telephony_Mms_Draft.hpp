#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMS_DRAFT
#define ANDROID_PROVIDER_TELEPHONY_MMS_DRAFT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Mms_Draft : public __JniBaseClass
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
	QAndroidJniObject Telephony_Mms_Draft::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Draft",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Mms_Draft::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Draft",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Telephony_Mms_Draft::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms$Draft",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms_Draft : public __jni_impl::android::provider::Telephony_Mms_Draft
	{
	public:
		Telephony_Mms_Draft(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms_Draft()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_MMS_DRAFT


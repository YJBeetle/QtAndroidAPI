#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMS_INBOX
#define ANDROID_PROVIDER_TELEPHONY_MMS_INBOX

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Mms_Inbox : public __JniBaseClass
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
	QAndroidJniObject Telephony_Mms_Inbox::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Inbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Mms_Inbox::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Inbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Mms_Inbox::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms$Inbox",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms_Inbox : public __jni_impl::android::provider::Telephony_Mms_Inbox
	{
	public:
		Telephony_Mms_Inbox(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms_Inbox()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_MMS_INBOX


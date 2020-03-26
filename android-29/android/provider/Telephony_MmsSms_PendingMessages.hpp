#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMSSMS_PENDINGMESSAGES
#define ANDROID_PROVIDER_TELEPHONY_MMSSMS_PENDINGMESSAGES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_MmsSms_PendingMessages : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DUE_TIME();
		static jstring ERROR_CODE();
		static jstring ERROR_TYPE();
		static jstring LAST_TRY();
		static jstring MSG_ID();
		static jstring MSG_TYPE();
		static jstring PROTO_TYPE();
		static jstring RETRY_INDEX();
		static jstring SUBSCRIPTION_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_MmsSms_PendingMessages::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_MmsSms_PendingMessages::DUE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"DUE_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::ERROR_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"ERROR_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::ERROR_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"ERROR_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::LAST_TRY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"LAST_TRY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::MSG_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"MSG_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::MSG_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"MSG_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::PROTO_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"PROTO_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::RETRY_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"RETRY_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::SUBSCRIPTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_MmsSms_PendingMessages::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_MmsSms_PendingMessages : public __jni_impl::android::provider::Telephony_MmsSms_PendingMessages
	{
	public:
		Telephony_MmsSms_PendingMessages(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_MmsSms_PendingMessages()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_MMSSMS_PENDINGMESSAGES


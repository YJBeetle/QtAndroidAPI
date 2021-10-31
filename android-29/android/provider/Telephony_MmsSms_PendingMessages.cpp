#include "../net/Uri.hpp"
#include "./Telephony_MmsSms_PendingMessages.hpp"

namespace android::provider
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
	
	// QAndroidJniObject forward
	Telephony_MmsSms_PendingMessages::Telephony_MmsSms_PendingMessages(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider


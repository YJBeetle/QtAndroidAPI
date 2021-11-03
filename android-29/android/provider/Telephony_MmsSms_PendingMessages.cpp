#include "../net/Uri.hpp"
#include "./Telephony_MmsSms_PendingMessages.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_MmsSms_PendingMessages::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_MmsSms_PendingMessages::DUE_TIME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"DUE_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::ERROR_CODE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"ERROR_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::ERROR_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"ERROR_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::LAST_TRY()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"LAST_TRY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::MSG_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"MSG_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::MSG_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"MSG_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::PROTO_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"PROTO_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::RETRY_INDEX()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"RETRY_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_MmsSms_PendingMessages::SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms$PendingMessages",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Telephony_MmsSms_PendingMessages::Telephony_MmsSms_PendingMessages(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider


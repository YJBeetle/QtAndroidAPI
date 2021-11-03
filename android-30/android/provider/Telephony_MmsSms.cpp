#include "../net/Uri.hpp"
#include "./Telephony_MmsSms.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_MmsSms::CONTENT_CONVERSATIONS_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_CONVERSATIONS_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Telephony_MmsSms::CONTENT_DRAFT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_DRAFT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Telephony_MmsSms::CONTENT_FILTER_BYPHONE_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_FILTER_BYPHONE_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Telephony_MmsSms::CONTENT_LOCKED_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_LOCKED_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Telephony_MmsSms::CONTENT_UNDELIVERED_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_UNDELIVERED_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Telephony_MmsSms::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_GENERIC()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_GENERIC"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_GENERIC_PERMANENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_GENERIC_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_MMS_PROTO_PERMANENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_MMS_PROTO_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_MMS_PROTO_TRANSIENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_MMS_PROTO_TRANSIENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_SMS_PROTO_PERMANENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_SMS_PROTO_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_SMS_PROTO_TRANSIENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_SMS_PROTO_TRANSIENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_TRANSPORT_FAILURE()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_TRANSPORT_FAILURE"
		);
	}
	jint Telephony_MmsSms::MMS_PROTO()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"MMS_PROTO"
		);
	}
	jint Telephony_MmsSms::NO_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"NO_ERROR"
		);
	}
	android::net::Uri Telephony_MmsSms::SEARCH_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"SEARCH_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Telephony_MmsSms::SMS_PROTO()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"SMS_PROTO"
		);
	}
	jstring Telephony_MmsSms::TYPE_DISCRIMINATOR_COLUMN()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"TYPE_DISCRIMINATOR_COLUMN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Telephony_MmsSms::Telephony_MmsSms(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider


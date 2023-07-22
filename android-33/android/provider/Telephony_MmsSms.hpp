#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_MmsSms.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri Telephony_MmsSms::CONTENT_CONVERSATIONS_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_CONVERSATIONS_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri Telephony_MmsSms::CONTENT_DRAFT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_DRAFT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri Telephony_MmsSms::CONTENT_FILTER_BYPHONE_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_FILTER_BYPHONE_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri Telephony_MmsSms::CONTENT_LOCKED_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_LOCKED_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri Telephony_MmsSms::CONTENT_UNDELIVERED_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_UNDELIVERED_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri Telephony_MmsSms::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jint Telephony_MmsSms::ERR_TYPE_GENERIC()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_GENERIC"
		);
	}
	inline jint Telephony_MmsSms::ERR_TYPE_GENERIC_PERMANENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_GENERIC_PERMANENT"
		);
	}
	inline jint Telephony_MmsSms::ERR_TYPE_MMS_PROTO_PERMANENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_MMS_PROTO_PERMANENT"
		);
	}
	inline jint Telephony_MmsSms::ERR_TYPE_MMS_PROTO_TRANSIENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_MMS_PROTO_TRANSIENT"
		);
	}
	inline jint Telephony_MmsSms::ERR_TYPE_SMS_PROTO_PERMANENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_SMS_PROTO_PERMANENT"
		);
	}
	inline jint Telephony_MmsSms::ERR_TYPE_SMS_PROTO_TRANSIENT()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_SMS_PROTO_TRANSIENT"
		);
	}
	inline jint Telephony_MmsSms::ERR_TYPE_TRANSPORT_FAILURE()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_TRANSPORT_FAILURE"
		);
	}
	inline jint Telephony_MmsSms::MMS_PROTO()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"MMS_PROTO"
		);
	}
	inline jint Telephony_MmsSms::NO_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"NO_ERROR"
		);
	}
	inline android::net::Uri Telephony_MmsSms::SEARCH_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"SEARCH_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jint Telephony_MmsSms::SMS_PROTO()
	{
		return getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"SMS_PROTO"
		);
	}
	inline JString Telephony_MmsSms::TYPE_DISCRIMINATOR_COLUMN()
	{
		return getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"TYPE_DISCRIMINATOR_COLUMN",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif

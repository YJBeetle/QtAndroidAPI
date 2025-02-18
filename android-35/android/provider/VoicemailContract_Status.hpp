#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./VoicemailContract_Status.def.hpp"

namespace android::provider
{
	// Fields
	inline JString VoicemailContract_Status::CONFIGURATION_STATE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE",
			"Ljava/lang/String;"
		);
	}
	inline jint VoicemailContract_Status::CONFIGURATION_STATE_CAN_BE_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_CAN_BE_CONFIGURED"
		);
	}
	inline jint VoicemailContract_Status::CONFIGURATION_STATE_CONFIGURING()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_CONFIGURING"
		);
	}
	inline jint VoicemailContract_Status::CONFIGURATION_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_DISABLED"
		);
	}
	inline jint VoicemailContract_Status::CONFIGURATION_STATE_FAILED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_FAILED"
		);
	}
	inline jint VoicemailContract_Status::CONFIGURATION_STATE_NOT_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_NOT_CONFIGURED"
		);
	}
	inline jint VoicemailContract_Status::CONFIGURATION_STATE_OK()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_OK"
		);
	}
	inline android::net::Uri VoicemailContract_Status::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString VoicemailContract_Status::DATA_CHANNEL_STATE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE",
			"Ljava/lang/String;"
		);
	}
	inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_BAD_CONFIGURATION()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_BAD_CONFIGURATION"
		);
	}
	inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_COMMUNICATION_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_COMMUNICATION_ERROR"
		);
	}
	inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_NO_CONNECTION"
		);
	}
	inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED"
		);
	}
	inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_OK()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_OK"
		);
	}
	inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR"
		);
	}
	inline jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_SERVER_ERROR"
		);
	}
	inline JString VoicemailContract_Status::DIR_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"DIR_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString VoicemailContract_Status::ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE",
			"Ljava/lang/String;"
		);
	}
	inline jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING"
		);
	}
	inline jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_NO_CONNECTION()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_NO_CONNECTION"
		);
	}
	inline jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_OK()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_OK"
		);
	}
	inline JString VoicemailContract_Status::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString VoicemailContract_Status::PHONE_ACCOUNT_ID()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString VoicemailContract_Status::QUOTA_OCCUPIED()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"QUOTA_OCCUPIED",
			"Ljava/lang/String;"
		);
	}
	inline JString VoicemailContract_Status::QUOTA_TOTAL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"QUOTA_TOTAL",
			"Ljava/lang/String;"
		);
	}
	inline jint VoicemailContract_Status::QUOTA_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"QUOTA_UNAVAILABLE"
		);
	}
	inline JString VoicemailContract_Status::SETTINGS_URI()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SETTINGS_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString VoicemailContract_Status::SOURCE_PACKAGE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SOURCE_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString VoicemailContract_Status::SOURCE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SOURCE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString VoicemailContract_Status::VOICEMAIL_ACCESS_URI()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"VOICEMAIL_ACCESS_URI",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri VoicemailContract_Status::buildSourceUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.VoicemailContract$Status",
			"buildSourceUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif

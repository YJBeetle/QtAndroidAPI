#pragma once

#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./CallLog_Calls.def.hpp"

namespace android::provider
{
	// Fields
	inline jint CallLog_Calls::ANSWERED_EXTERNALLY_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"ANSWERED_EXTERNALLY_TYPE"
		);
	}
	inline jint CallLog_Calls::BLOCKED_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCKED_TYPE"
		);
	}
	inline JString CallLog_Calls::BLOCK_REASON()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON",
			"Ljava/lang/String;"
		);
	}
	inline jint CallLog_Calls::BLOCK_REASON_BLOCKED_NUMBER()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_BLOCKED_NUMBER"
		);
	}
	inline jint CallLog_Calls::BLOCK_REASON_CALL_SCREENING_SERVICE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_CALL_SCREENING_SERVICE"
		);
	}
	inline jint CallLog_Calls::BLOCK_REASON_DIRECT_TO_VOICEMAIL()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_DIRECT_TO_VOICEMAIL"
		);
	}
	inline jint CallLog_Calls::BLOCK_REASON_NOT_BLOCKED()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_NOT_BLOCKED"
		);
	}
	inline jint CallLog_Calls::BLOCK_REASON_NOT_IN_CONTACTS()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_NOT_IN_CONTACTS"
		);
	}
	inline jint CallLog_Calls::BLOCK_REASON_PAY_PHONE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_PAY_PHONE"
		);
	}
	inline jint CallLog_Calls::BLOCK_REASON_RESTRICTED_NUMBER()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_RESTRICTED_NUMBER"
		);
	}
	inline jint CallLog_Calls::BLOCK_REASON_UNKNOWN_NUMBER()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_UNKNOWN_NUMBER"
		);
	}
	inline JString CallLog_Calls::CACHED_FORMATTED_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_FORMATTED_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CACHED_LOOKUP_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_LOOKUP_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CACHED_MATCHED_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_MATCHED_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CACHED_NAME()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CACHED_NORMALIZED_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NORMALIZED_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CACHED_NUMBER_LABEL()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NUMBER_LABEL",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CACHED_NUMBER_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NUMBER_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CACHED_PHOTO_ID()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_PHOTO_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CACHED_PHOTO_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_PHOTO_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CALL_SCREENING_APP_NAME()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CALL_SCREENING_APP_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CALL_SCREENING_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CALL_SCREENING_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri CallLog_Calls::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString CallLog_Calls::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri CallLog_Calls::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri CallLog_Calls::CONTENT_URI_WITH_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_URI_WITH_VOICEMAIL",
			"Landroid/net/Uri;"
		);
	}
	inline JString CallLog_Calls::COUNTRY_ISO()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"COUNTRY_ISO",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::DATA_USAGE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DATA_USAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::DATE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DATE",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::DURATION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DURATION",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::EXTRA_CALL_TYPE_FILTER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"EXTRA_CALL_TYPE_FILTER",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::FEATURES()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"FEATURES",
			"Ljava/lang/String;"
		);
	}
	inline jint CallLog_Calls::FEATURES_ASSISTED_DIALING_USED()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_ASSISTED_DIALING_USED"
		);
	}
	inline jint CallLog_Calls::FEATURES_HD_CALL()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_HD_CALL"
		);
	}
	inline jint CallLog_Calls::FEATURES_PULLED_EXTERNALLY()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_PULLED_EXTERNALLY"
		);
	}
	inline jint CallLog_Calls::FEATURES_RTT()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_RTT"
		);
	}
	inline jint CallLog_Calls::FEATURES_VIDEO()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_VIDEO"
		);
	}
	inline jint CallLog_Calls::FEATURES_VOLTE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_VOLTE"
		);
	}
	inline jint CallLog_Calls::FEATURES_WIFI()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_WIFI"
		);
	}
	inline JString CallLog_Calls::GEOCODED_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"GEOCODED_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline jint CallLog_Calls::INCOMING_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"INCOMING_TYPE"
		);
	}
	inline JString CallLog_Calls::IS_READ()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"IS_READ",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::LAST_MODIFIED()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"LAST_MODIFIED",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::LIMIT_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;"
		);
	}
	inline jint CallLog_Calls::MISSED_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"MISSED_TYPE"
		);
	}
	inline JString CallLog_Calls::NEW()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NEW",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::NUMBER_PRESENTATION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NUMBER_PRESENTATION",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::OFFSET_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"OFFSET_PARAM_KEY",
			"Ljava/lang/String;"
		);
	}
	inline jint CallLog_Calls::OUTGOING_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"OUTGOING_TYPE"
		);
	}
	inline JString CallLog_Calls::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::PHONE_ACCOUNT_ID()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::POST_DIAL_DIGITS()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"POST_DIAL_DIGITS",
			"Ljava/lang/String;"
		);
	}
	inline jint CallLog_Calls::PRESENTATION_ALLOWED()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_ALLOWED"
		);
	}
	inline jint CallLog_Calls::PRESENTATION_PAYPHONE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_PAYPHONE"
		);
	}
	inline jint CallLog_Calls::PRESENTATION_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_RESTRICTED"
		);
	}
	inline jint CallLog_Calls::PRESENTATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_UNKNOWN"
		);
	}
	inline jint CallLog_Calls::REJECTED_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"REJECTED_TYPE"
		);
	}
	inline JString CallLog_Calls::TRANSCRIPTION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"TRANSCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString CallLog_Calls::VIA_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"VIA_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline jint CallLog_Calls::VOICEMAIL_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"VOICEMAIL_TYPE"
		);
	}
	inline JString CallLog_Calls::VOICEMAIL_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"VOICEMAIL_URI",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CallLog_Calls::CallLog_Calls()
		: JObject(
			"android.provider.CallLog$Calls",
			"()V"
		) {}
	
	// Methods
	inline JString CallLog_Calls::getLastOutgoingCall(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.CallLog$Calls",
			"getLastOutgoingCall",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers


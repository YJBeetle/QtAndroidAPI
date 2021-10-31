#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./CallLog_Calls.hpp"

namespace android::provider
{
	// Fields
	jint CallLog_Calls::ANSWERED_EXTERNALLY_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"ANSWERED_EXTERNALLY_TYPE"
		);
	}
	jlong CallLog_Calls::AUTO_MISSED_EMERGENCY_CALL()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"AUTO_MISSED_EMERGENCY_CALL"
		);
	}
	jlong CallLog_Calls::AUTO_MISSED_MAXIMUM_DIALING()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"AUTO_MISSED_MAXIMUM_DIALING"
		);
	}
	jlong CallLog_Calls::AUTO_MISSED_MAXIMUM_RINGING()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"AUTO_MISSED_MAXIMUM_RINGING"
		);
	}
	jint CallLog_Calls::BLOCKED_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCKED_TYPE"
		);
	}
	jstring CallLog_Calls::BLOCK_REASON()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::BLOCK_REASON_BLOCKED_NUMBER()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_BLOCKED_NUMBER"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_CALL_SCREENING_SERVICE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_CALL_SCREENING_SERVICE"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_DIRECT_TO_VOICEMAIL()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_DIRECT_TO_VOICEMAIL"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_NOT_BLOCKED()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_NOT_BLOCKED"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_NOT_IN_CONTACTS()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_NOT_IN_CONTACTS"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_PAY_PHONE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_PAY_PHONE"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_RESTRICTED_NUMBER()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_RESTRICTED_NUMBER"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_UNKNOWN_NUMBER()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_UNKNOWN_NUMBER"
		);
	}
	jstring CallLog_Calls::CACHED_FORMATTED_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_FORMATTED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_LOOKUP_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_LOOKUP_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_MATCHED_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_MATCHED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_NAME()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_NORMALIZED_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NORMALIZED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_NUMBER_LABEL()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NUMBER_LABEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_NUMBER_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NUMBER_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_PHOTO_ID()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_PHOTO_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_PHOTO_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_PHOTO_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CALL_SCREENING_APP_NAME()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CALL_SCREENING_APP_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CALL_SCREENING_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CALL_SCREENING_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::COMPOSER_PHOTO_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"COMPOSER_PHOTO_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CallLog_Calls::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CallLog_Calls::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CallLog_Calls::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri CallLog_Calls::CONTENT_URI_WITH_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_URI_WITH_VOICEMAIL",
			"Landroid/net/Uri;"
		);
	}
	jstring CallLog_Calls::COUNTRY_ISO()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"COUNTRY_ISO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::DATA_USAGE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DATA_USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::DATE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::DURATION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::EXTRA_CALL_TYPE_FILTER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"EXTRA_CALL_TYPE_FILTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::FEATURES()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"FEATURES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::FEATURES_ASSISTED_DIALING_USED()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_ASSISTED_DIALING_USED"
		);
	}
	jint CallLog_Calls::FEATURES_HD_CALL()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_HD_CALL"
		);
	}
	jint CallLog_Calls::FEATURES_PULLED_EXTERNALLY()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_PULLED_EXTERNALLY"
		);
	}
	jint CallLog_Calls::FEATURES_RTT()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_RTT"
		);
	}
	jint CallLog_Calls::FEATURES_VIDEO()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_VIDEO"
		);
	}
	jint CallLog_Calls::FEATURES_VOLTE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_VOLTE"
		);
	}
	jint CallLog_Calls::FEATURES_WIFI()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_WIFI"
		);
	}
	jstring CallLog_Calls::GEOCODED_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"GEOCODED_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::INCOMING_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"INCOMING_TYPE"
		);
	}
	jstring CallLog_Calls::IS_READ()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"IS_READ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::LAST_MODIFIED()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"LAST_MODIFIED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::LIMIT_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::LOCATION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::MISSED_REASON()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"MISSED_REASON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong CallLog_Calls::MISSED_REASON_NOT_MISSED()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"MISSED_REASON_NOT_MISSED"
		);
	}
	jint CallLog_Calls::MISSED_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"MISSED_TYPE"
		);
	}
	jstring CallLog_Calls::NEW()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::NUMBER_PRESENTATION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NUMBER_PRESENTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::OFFSET_PARAM_KEY()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"OFFSET_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::OUTGOING_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"OUTGOING_TYPE"
		);
	}
	jstring CallLog_Calls::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::PHONE_ACCOUNT_ID()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::POST_DIAL_DIGITS()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"POST_DIAL_DIGITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::PRESENTATION_ALLOWED()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_ALLOWED"
		);
	}
	jint CallLog_Calls::PRESENTATION_PAYPHONE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_PAYPHONE"
		);
	}
	jint CallLog_Calls::PRESENTATION_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_RESTRICTED"
		);
	}
	jint CallLog_Calls::PRESENTATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_UNKNOWN"
		);
	}
	jstring CallLog_Calls::PRIORITY()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"PRIORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::PRIORITY_NORMAL()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRIORITY_NORMAL"
		);
	}
	jint CallLog_Calls::PRIORITY_URGENT()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRIORITY_URGENT"
		);
	}
	jint CallLog_Calls::REJECTED_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"REJECTED_TYPE"
		);
	}
	jstring CallLog_Calls::SUBJECT()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"SUBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::TRANSCRIPTION()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"TRANSCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::TYPE()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong CallLog_Calls::USER_MISSED_CALL_FILTERS_TIMEOUT()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"USER_MISSED_CALL_FILTERS_TIMEOUT"
		);
	}
	jlong CallLog_Calls::USER_MISSED_CALL_SCREENING_SERVICE_SILENCED()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"USER_MISSED_CALL_SCREENING_SERVICE_SILENCED"
		);
	}
	jlong CallLog_Calls::USER_MISSED_DND_MODE()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"USER_MISSED_DND_MODE"
		);
	}
	jlong CallLog_Calls::USER_MISSED_LOW_RING_VOLUME()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"USER_MISSED_LOW_RING_VOLUME"
		);
	}
	jlong CallLog_Calls::USER_MISSED_NO_ANSWER()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"USER_MISSED_NO_ANSWER"
		);
	}
	jlong CallLog_Calls::USER_MISSED_NO_VIBRATE()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"USER_MISSED_NO_VIBRATE"
		);
	}
	jlong CallLog_Calls::USER_MISSED_SHORT_RING()
	{
		return getStaticField<jlong>(
			"android.provider.CallLog$Calls",
			"USER_MISSED_SHORT_RING"
		);
	}
	jstring CallLog_Calls::VIA_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"VIA_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::VOICEMAIL_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"VOICEMAIL_TYPE"
		);
	}
	jstring CallLog_Calls::VOICEMAIL_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog$Calls",
			"VOICEMAIL_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	CallLog_Calls::CallLog_Calls(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CallLog_Calls::CallLog_Calls()
		: __JniBaseClass(
			"android.provider.CallLog$Calls",
			"()V"
		) {}
	
	// Methods
	jstring CallLog_Calls::getLastOutgoingCall(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.CallLog$Calls",
			"getLastOutgoingCall",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
} // namespace android::provider


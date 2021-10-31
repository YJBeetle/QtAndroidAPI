#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./CallLog_Calls.hpp"

namespace android::provider
{
	// Fields
	jint CallLog_Calls::ANSWERED_EXTERNALLY_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"ANSWERED_EXTERNALLY_TYPE"
		);
	}
	jint CallLog_Calls::BLOCKED_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCKED_TYPE"
		);
	}
	jstring CallLog_Calls::BLOCK_REASON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::BLOCK_REASON_BLOCKED_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_BLOCKED_NUMBER"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_CALL_SCREENING_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_CALL_SCREENING_SERVICE"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_DIRECT_TO_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_DIRECT_TO_VOICEMAIL"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_NOT_BLOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_NOT_BLOCKED"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_NOT_IN_CONTACTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_NOT_IN_CONTACTS"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_PAY_PHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_PAY_PHONE"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_RESTRICTED_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_RESTRICTED_NUMBER"
		);
	}
	jint CallLog_Calls::BLOCK_REASON_UNKNOWN_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"BLOCK_REASON_UNKNOWN_NUMBER"
		);
	}
	jstring CallLog_Calls::CACHED_FORMATTED_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_FORMATTED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_LOOKUP_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_LOOKUP_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_MATCHED_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_MATCHED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_NORMALIZED_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NORMALIZED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_NUMBER_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NUMBER_LABEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_NUMBER_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_NUMBER_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_PHOTO_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_PHOTO_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CACHED_PHOTO_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CACHED_PHOTO_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CALL_SCREENING_APP_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CALL_SCREENING_APP_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CALL_SCREENING_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CALL_SCREENING_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CallLog_Calls::CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring CallLog_Calls::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CallLog_Calls::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri CallLog_Calls::CONTENT_URI_WITH_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"CONTENT_URI_WITH_VOICEMAIL",
			"Landroid/net/Uri;"
		);
	}
	jstring CallLog_Calls::COUNTRY_ISO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"COUNTRY_ISO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::DATA_USAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DATA_USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::EXTRA_CALL_TYPE_FILTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"EXTRA_CALL_TYPE_FILTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::FEATURES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"FEATURES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::FEATURES_HD_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_HD_CALL"
		);
	}
	jint CallLog_Calls::FEATURES_PULLED_EXTERNALLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_PULLED_EXTERNALLY"
		);
	}
	jint CallLog_Calls::FEATURES_RTT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_RTT"
		);
	}
	jint CallLog_Calls::FEATURES_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_VIDEO"
		);
	}
	jint CallLog_Calls::FEATURES_WIFI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"FEATURES_WIFI"
		);
	}
	jstring CallLog_Calls::GEOCODED_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"GEOCODED_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::INCOMING_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"INCOMING_TYPE"
		);
	}
	jstring CallLog_Calls::IS_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"IS_READ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::LAST_MODIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"LAST_MODIFIED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::LIMIT_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"LIMIT_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::MISSED_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"MISSED_TYPE"
		);
	}
	jstring CallLog_Calls::NEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::NUMBER_PRESENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"NUMBER_PRESENTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::OFFSET_PARAM_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"OFFSET_PARAM_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::OUTGOING_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"OUTGOING_TYPE"
		);
	}
	jstring CallLog_Calls::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::PHONE_ACCOUNT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::POST_DIAL_DIGITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"POST_DIAL_DIGITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::PRESENTATION_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_ALLOWED"
		);
	}
	jint CallLog_Calls::PRESENTATION_PAYPHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_PAYPHONE"
		);
	}
	jint CallLog_Calls::PRESENTATION_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_RESTRICTED"
		);
	}
	jint CallLog_Calls::PRESENTATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"PRESENTATION_UNKNOWN"
		);
	}
	jint CallLog_Calls::REJECTED_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"REJECTED_TYPE"
		);
	}
	jstring CallLog_Calls::TRANSCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"TRANSCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CallLog_Calls::VIA_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CallLog$Calls",
			"VIA_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint CallLog_Calls::VOICEMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.CallLog$Calls",
			"VOICEMAIL_TYPE"
		);
	}
	jstring CallLog_Calls::VOICEMAIL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
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
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CallLog$Calls",
			"getLastOutgoingCall",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
} // namespace android::provider


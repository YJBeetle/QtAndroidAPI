#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CallLog_Calls : public __JniBaseClass
	{
	public:
		// Fields
		static jint ANSWERED_EXTERNALLY_TYPE();
		static jlong AUTO_MISSED_EMERGENCY_CALL();
		static jlong AUTO_MISSED_MAXIMUM_DIALING();
		static jlong AUTO_MISSED_MAXIMUM_RINGING();
		static jint BLOCKED_TYPE();
		static jstring BLOCK_REASON();
		static jint BLOCK_REASON_BLOCKED_NUMBER();
		static jint BLOCK_REASON_CALL_SCREENING_SERVICE();
		static jint BLOCK_REASON_DIRECT_TO_VOICEMAIL();
		static jint BLOCK_REASON_NOT_BLOCKED();
		static jint BLOCK_REASON_NOT_IN_CONTACTS();
		static jint BLOCK_REASON_PAY_PHONE();
		static jint BLOCK_REASON_RESTRICTED_NUMBER();
		static jint BLOCK_REASON_UNKNOWN_NUMBER();
		static jstring CACHED_FORMATTED_NUMBER();
		static jstring CACHED_LOOKUP_URI();
		static jstring CACHED_MATCHED_NUMBER();
		static jstring CACHED_NAME();
		static jstring CACHED_NORMALIZED_NUMBER();
		static jstring CACHED_NUMBER_LABEL();
		static jstring CACHED_NUMBER_TYPE();
		static jstring CACHED_PHOTO_ID();
		static jstring CACHED_PHOTO_URI();
		static jstring CALL_SCREENING_APP_NAME();
		static jstring CALL_SCREENING_COMPONENT_NAME();
		static jstring COMPOSER_PHOTO_URI();
		static android::net::Uri CONTENT_FILTER_URI();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri CONTENT_URI_WITH_VOICEMAIL();
		static jstring COUNTRY_ISO();
		static jstring DATA_USAGE();
		static jstring DATE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring DURATION();
		static jstring EXTRA_CALL_TYPE_FILTER();
		static jstring FEATURES();
		static jint FEATURES_ASSISTED_DIALING_USED();
		static jint FEATURES_HD_CALL();
		static jint FEATURES_PULLED_EXTERNALLY();
		static jint FEATURES_RTT();
		static jint FEATURES_VIDEO();
		static jint FEATURES_VOLTE();
		static jint FEATURES_WIFI();
		static jstring GEOCODED_LOCATION();
		static jint INCOMING_TYPE();
		static jstring IS_READ();
		static jstring LAST_MODIFIED();
		static jstring LIMIT_PARAM_KEY();
		static jstring LOCATION();
		static jstring MISSED_REASON();
		static jlong MISSED_REASON_NOT_MISSED();
		static jint MISSED_TYPE();
		static jstring NEW();
		static jstring NUMBER();
		static jstring NUMBER_PRESENTATION();
		static jstring OFFSET_PARAM_KEY();
		static jint OUTGOING_TYPE();
		static jstring PHONE_ACCOUNT_COMPONENT_NAME();
		static jstring PHONE_ACCOUNT_ID();
		static jstring POST_DIAL_DIGITS();
		static jint PRESENTATION_ALLOWED();
		static jint PRESENTATION_PAYPHONE();
		static jint PRESENTATION_RESTRICTED();
		static jint PRESENTATION_UNKNOWN();
		static jstring PRIORITY();
		static jint PRIORITY_NORMAL();
		static jint PRIORITY_URGENT();
		static jint REJECTED_TYPE();
		static jstring SUBJECT();
		static jstring TRANSCRIPTION();
		static jstring TYPE();
		static jlong USER_MISSED_CALL_FILTERS_TIMEOUT();
		static jlong USER_MISSED_CALL_SCREENING_SERVICE_SILENCED();
		static jlong USER_MISSED_DND_MODE();
		static jlong USER_MISSED_LOW_RING_VOLUME();
		static jlong USER_MISSED_NO_ANSWER();
		static jlong USER_MISSED_NO_VIBRATE();
		static jlong USER_MISSED_SHORT_RING();
		static jstring VIA_NUMBER();
		static jint VOICEMAIL_TYPE();
		static jstring VOICEMAIL_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CallLog_Calls(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CallLog_Calls(QAndroidJniObject obj);
		
		// Constructors
		CallLog_Calls();
		
		// Methods
		static jstring getLastOutgoingCall(android::content::Context arg0);
	};
} // namespace android::provider


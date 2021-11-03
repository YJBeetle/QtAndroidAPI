#pragma once

#include "../../JObject.hpp"

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
	class CallLog_Calls : public JObject
	{
	public:
		// Fields
		static jint ANSWERED_EXTERNALLY_TYPE();
		static jint BLOCKED_TYPE();
		static jstring CACHED_FORMATTED_NUMBER();
		static jstring CACHED_LOOKUP_URI();
		static jstring CACHED_MATCHED_NUMBER();
		static jstring CACHED_NAME();
		static jstring CACHED_NORMALIZED_NUMBER();
		static jstring CACHED_NUMBER_LABEL();
		static jstring CACHED_NUMBER_TYPE();
		static jstring CACHED_PHOTO_ID();
		static jstring CACHED_PHOTO_URI();
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
		static jint FEATURES_HD_CALL();
		static jint FEATURES_PULLED_EXTERNALLY();
		static jint FEATURES_RTT();
		static jint FEATURES_VIDEO();
		static jint FEATURES_WIFI();
		static jstring GEOCODED_LOCATION();
		static jint INCOMING_TYPE();
		static jstring IS_READ();
		static jstring LAST_MODIFIED();
		static jstring LIMIT_PARAM_KEY();
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
		static jint REJECTED_TYPE();
		static jstring TRANSCRIPTION();
		static jstring TYPE();
		static jstring VIA_NUMBER();
		static jint VOICEMAIL_TYPE();
		static jstring VOICEMAIL_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallLog_Calls(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallLog_Calls(QJniObject obj);
		
		// Constructors
		CallLog_Calls();
		
		// Methods
		static jstring getLastOutgoingCall(android::content::Context arg0);
	};
} // namespace android::provider


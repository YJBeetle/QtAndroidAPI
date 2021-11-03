#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_MmsSms : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_CONVERSATIONS_URI();
		static android::net::Uri CONTENT_DRAFT_URI();
		static android::net::Uri CONTENT_FILTER_BYPHONE_URI();
		static android::net::Uri CONTENT_LOCKED_URI();
		static android::net::Uri CONTENT_UNDELIVERED_URI();
		static android::net::Uri CONTENT_URI();
		static jint ERR_TYPE_GENERIC();
		static jint ERR_TYPE_GENERIC_PERMANENT();
		static jint ERR_TYPE_MMS_PROTO_PERMANENT();
		static jint ERR_TYPE_MMS_PROTO_TRANSIENT();
		static jint ERR_TYPE_SMS_PROTO_PERMANENT();
		static jint ERR_TYPE_SMS_PROTO_TRANSIENT();
		static jint ERR_TYPE_TRANSPORT_FAILURE();
		static jint MMS_PROTO();
		static jint NO_ERROR();
		static android::net::Uri SEARCH_URI();
		static jint SMS_PROTO();
		static JString TYPE_DISCRIMINATOR_COLUMN();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_MmsSms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_MmsSms(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider


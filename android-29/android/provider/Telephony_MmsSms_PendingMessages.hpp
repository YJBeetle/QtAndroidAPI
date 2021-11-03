#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_MmsSms_PendingMessages : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static JString DUE_TIME();
		static JString ERROR_CODE();
		static JString ERROR_TYPE();
		static JString LAST_TRY();
		static JString MSG_ID();
		static JString MSG_TYPE();
		static JString PROTO_TYPE();
		static JString RETRY_INDEX();
		static JString SUBSCRIPTION_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_MmsSms_PendingMessages(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_MmsSms_PendingMessages(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider


#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_Mms : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		static android::net::Uri REPORT_REQUEST_URI();
		static android::net::Uri REPORT_STATUS_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Mms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider


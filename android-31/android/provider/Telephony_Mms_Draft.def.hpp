#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_Mms_Draft : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Draft(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Draft(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider


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
class JString;

namespace android::provider
{
	class Telephony_Sms : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Sms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Sms(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getDefaultSmsPackage(android::content::Context arg0);
	};
} // namespace android::provider


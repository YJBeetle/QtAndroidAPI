#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_Mms_Rate : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static JString SENT_TIME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Rate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Rate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider


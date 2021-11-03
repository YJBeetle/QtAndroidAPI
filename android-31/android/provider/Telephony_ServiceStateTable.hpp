#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_ServiceStateTable : public JObject
	{
	public:
		// Fields
		static JString AUTHORITY();
		static android::net::Uri CONTENT_URI();
		static JString DATA_NETWORK_TYPE();
		static JString DATA_REG_STATE();
		static JString DUPLEX_MODE();
		static JString IS_MANUAL_NETWORK_SELECTION();
		static JString VOICE_OPERATOR_NUMERIC();
		static JString VOICE_REG_STATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_ServiceStateTable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_ServiceStateTable(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getUriForSubscriptionId(jint arg0);
		static android::net::Uri getUriForSubscriptionIdAndField(jint arg0, JString arg1);
	};
} // namespace android::provider


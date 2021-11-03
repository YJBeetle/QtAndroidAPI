#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_ServiceStateTable : public JObject
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static android::net::Uri CONTENT_URI();
		static jstring DATA_NETWORK_TYPE();
		static jstring DATA_REG_STATE();
		static jstring DUPLEX_MODE();
		static jstring IS_MANUAL_NETWORK_SELECTION();
		static jstring VOICE_OPERATOR_NUMERIC();
		static jstring VOICE_REG_STATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_ServiceStateTable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_ServiceStateTable(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getUriForSubscriptionId(jint arg0);
		static android::net::Uri getUriForSubscriptionIdAndField(jint arg0, jstring arg1);
	};
} // namespace android::provider


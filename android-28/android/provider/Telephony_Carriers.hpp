#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_Carriers : public JObject
	{
	public:
		// Fields
		static JString APN();
		static JString AUTH_TYPE();
		static JString BEARER();
		static JString CARRIER_ENABLED();
		static android::net::Uri CONTENT_URI();
		static JString CURRENT();
		static JString DEFAULT_SORT_ORDER();
		static JString MCC();
		static JString MMSC();
		static JString MMSPORT();
		static JString MMSPROXY();
		static JString MNC();
		static JString MVNO_MATCH_DATA();
		static JString MVNO_TYPE();
		static JString NAME();
		static JString NETWORK_TYPE_BITMASK();
		static JString NUMERIC();
		static JString PASSWORD();
		static JString PORT();
		static JString PROTOCOL();
		static JString PROXY();
		static JString ROAMING_PROTOCOL();
		static JString SERVER();
		static JString SUBSCRIPTION_ID();
		static JString TYPE();
		static JString USER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Carriers(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Carriers(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider


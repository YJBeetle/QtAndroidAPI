#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class WifiEnterpriseConfig_Phase2 : public JObject
	{
	public:
		// Fields
		static jint AKA();
		static jint AKA_PRIME();
		static jint GTC();
		static jint MSCHAP();
		static jint MSCHAPV2();
		static jint NONE();
		static jint PAP();
		static jint SIM();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiEnterpriseConfig_Phase2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiEnterpriseConfig_Phase2(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi


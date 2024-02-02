#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::net::wifi
{
	class WifiConfiguration_KeyMgmt : public JObject
	{
	public:
		// Fields
		static jint DPP();
		static jint FILS_SHA256();
		static jint FILS_SHA384();
		static jint FT_EAP();
		static jint FT_PSK();
		static jint IEEE8021X();
		static jint NONE();
		static jint OSEN();
		static jint OWE();
		static jint SAE();
		static jint SUITE_B_192();
		static jint WAPI_CERT();
		static jint WAPI_PSK();
		static jint WPA2_PSK();
		static jint WPA_EAP();
		static jint WPA_EAP_SHA256();
		static jint WPA_PSK();
		static jint WPA_PSK_SHA256();
		static JArray strings();
		static JString varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_KeyMgmt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_KeyMgmt(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi


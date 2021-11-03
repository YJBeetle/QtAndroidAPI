#pragma once

#include "../../../JObject.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_KeyMgmt : public JObject
	{
	public:
		// Fields
		static jint IEEE8021X();
		static jint NONE();
		static jint OWE();
		static jint SAE();
		static jint SUITE_B_192();
		static jint WPA_EAP();
		static jint WPA_PSK();
		static jarray strings();
		static jstring varName();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_KeyMgmt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_KeyMgmt(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi


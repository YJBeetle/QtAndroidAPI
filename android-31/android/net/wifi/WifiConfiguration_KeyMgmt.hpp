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
		static jint IEEE8021X();
		static jint NONE();
		static jint OWE();
		static jint SAE();
		static jint SUITE_B_192();
		static jint WPA_EAP();
		static jint WPA_PSK();
		static JArray strings();
		static JString varName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_KeyMgmt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_KeyMgmt(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi


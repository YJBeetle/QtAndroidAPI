#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_KeyMgmt : public __JniBaseClass
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
		
		WifiConfiguration_KeyMgmt(QAndroidJniObject obj);
		// Constructors
		WifiConfiguration_KeyMgmt() = default;
		
		// Methods
	};
} // namespace android::net::wifi


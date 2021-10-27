#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiEnterpriseConfig_Phase2 : public __JniBaseClass
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
		
		WifiEnterpriseConfig_Phase2(QAndroidJniObject obj);
		// Constructors
		WifiEnterpriseConfig_Phase2() = default;
		
		// Methods
	};
} // namespace android::net::wifi


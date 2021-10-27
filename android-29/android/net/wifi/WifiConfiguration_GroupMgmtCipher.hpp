#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiConfiguration_GroupMgmtCipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint BIP_CMAC_256();
		static jint BIP_GMAC_128();
		static jint BIP_GMAC_256();
		
		WifiConfiguration_GroupMgmtCipher(QAndroidJniObject obj);
		// Constructors
		WifiConfiguration_GroupMgmtCipher() = default;
		
		// Methods
	};
} // namespace android::net::wifi


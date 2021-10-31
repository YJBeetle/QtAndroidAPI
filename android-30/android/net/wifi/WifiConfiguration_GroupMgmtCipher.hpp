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
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiConfiguration_GroupMgmtCipher(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiConfiguration_GroupMgmtCipher(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi


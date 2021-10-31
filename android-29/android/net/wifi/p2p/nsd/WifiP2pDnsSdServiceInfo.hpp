#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./WifiP2pServiceInfo.hpp"


namespace android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceInfo : public android::net::wifi::p2p::nsd::WifiP2pServiceInfo
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pDnsSdServiceInfo(const char *className, const char *sig, Ts...agv) : android::net::wifi::p2p::nsd::WifiP2pServiceInfo(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDnsSdServiceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceInfo newInstance(jstring arg0, jstring arg1, __JniBaseClass arg2);
	};
} // namespace android::net::wifi::p2p::nsd


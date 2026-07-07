#pragma once

#include "./WifiP2pServiceInfo.def.hpp"

class JString;

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceInfo : public android::net::wifi::p2p::nsd::WifiP2pServiceInfo
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pDnsSdServiceInfo(const char *className, const char *sig, Ts...agv) : android::net::wifi::p2p::nsd::WifiP2pServiceInfo(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDnsSdServiceInfo(QJniObject obj) : android::net::wifi::p2p::nsd::WifiP2pServiceInfo(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceInfo newInstance(JString arg0, JString arg1, JObject arg2);
	};
} // namespace android::net::wifi::p2p::nsd


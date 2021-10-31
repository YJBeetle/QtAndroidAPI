#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./WifiP2pServiceRequest.hpp"


namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUpnpServiceRequest : public android::net::wifi::p2p::nsd::WifiP2pServiceRequest
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pUpnpServiceRequest(const char *className, const char *sig, Ts...agv) : android::net::wifi::p2p::nsd::WifiP2pServiceRequest(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pUpnpServiceRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest newInstance();
		static android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest newInstance(jstring arg0);
	};
} // namespace android::net::wifi::p2p::nsd


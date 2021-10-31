#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./WifiP2pServiceRequest.hpp"


namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUpnpServiceRequest : public android::net::wifi::p2p::nsd::WifiP2pServiceRequest
	{
	public:
		// Fields
		
		WifiP2pUpnpServiceRequest(QAndroidJniObject obj);
		// Constructors
		WifiP2pUpnpServiceRequest() = default;
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0);
	};
} // namespace android::net::wifi::p2p::nsd


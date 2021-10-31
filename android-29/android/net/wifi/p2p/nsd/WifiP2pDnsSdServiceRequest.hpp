#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./WifiP2pServiceRequest.hpp"


namespace android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceRequest : public android::net::wifi::p2p::nsd::WifiP2pServiceRequest
	{
	public:
		// Fields
		
		WifiP2pDnsSdServiceRequest(QAndroidJniObject obj);
		// Constructors
		WifiP2pDnsSdServiceRequest() = default;
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1);
	};
} // namespace android::net::wifi::p2p::nsd


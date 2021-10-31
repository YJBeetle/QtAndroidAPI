#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./WifiP2pServiceRequest.hpp"


namespace android::net::wifi::p2p::nsd
{
	class WifiP2pDnsSdServiceRequest : public android::net::wifi::p2p::nsd::WifiP2pServiceRequest
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiP2pDnsSdServiceRequest(const char *className, const char *sig, Ts...agv) : android::net::wifi::p2p::nsd::WifiP2pServiceRequest(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDnsSdServiceRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1);
	};
} // namespace android::net::wifi::p2p::nsd


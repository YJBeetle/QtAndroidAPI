#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "./WifiP2pServiceInfo.hpp"


namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUpnpServiceInfo : public android::net::wifi::p2p::nsd::WifiP2pServiceInfo
	{
	public:
		// Fields
		
		WifiP2pUpnpServiceInfo(QAndroidJniObject obj);
		// Constructors
		WifiP2pUpnpServiceInfo() = default;
		
		// Methods
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1, __JniBaseClass arg2);
		static QAndroidJniObject newInstance(const QString &arg0, const QString &arg1, __JniBaseClass arg2);
	};
} // namespace android::net::wifi::p2p::nsd


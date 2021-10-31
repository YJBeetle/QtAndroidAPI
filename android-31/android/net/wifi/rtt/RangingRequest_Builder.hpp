#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi
{
	class ScanResult;
}
namespace android::net::wifi::aware
{
	class PeerHandle;
}
namespace android::net::wifi::rtt
{
	class RangingRequest;
}

namespace android::net::wifi::rtt
{
	class RangingRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RangingRequest_Builder(QJniObject obj);
		
		// Constructors
		RangingRequest_Builder();
		
		// Methods
		android::net::wifi::rtt::RangingRequest_Builder addAccessPoint(android::net::wifi::ScanResult arg0);
		android::net::wifi::rtt::RangingRequest_Builder addAccessPoints(__JniBaseClass arg0);
		android::net::wifi::rtt::RangingRequest_Builder addNon80211mcCapableAccessPoint(android::net::wifi::ScanResult arg0);
		android::net::wifi::rtt::RangingRequest_Builder addNon80211mcCapableAccessPoints(__JniBaseClass arg0);
		android::net::wifi::rtt::RangingRequest_Builder addWifiAwarePeer(android::net::MacAddress arg0);
		android::net::wifi::rtt::RangingRequest_Builder addWifiAwarePeer(android::net::wifi::aware::PeerHandle arg0);
		android::net::wifi::rtt::RangingRequest build();
		android::net::wifi::rtt::RangingRequest_Builder setRttBurstSize(jint arg0);
	};
} // namespace android::net::wifi::rtt


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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RangingRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RangingRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		RangingRequest_Builder();
		
		// Methods
		QAndroidJniObject addAccessPoint(android::net::wifi::ScanResult arg0);
		QAndroidJniObject addAccessPoints(__JniBaseClass arg0);
		QAndroidJniObject addWifiAwarePeer(android::net::MacAddress arg0);
		QAndroidJniObject addWifiAwarePeer(android::net::wifi::aware::PeerHandle arg0);
		QAndroidJniObject build();
	};
} // namespace android::net::wifi::rtt


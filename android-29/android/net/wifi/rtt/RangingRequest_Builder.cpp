#include "../../MacAddress.hpp"
#include "../ScanResult.hpp"
#include "../aware/PeerHandle.hpp"
#include "./RangingRequest.hpp"
#include "./RangingRequest_Builder.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	
	// QAndroidJniObject forward
	RangingRequest_Builder::RangingRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RangingRequest_Builder::RangingRequest_Builder()
		: __JniBaseClass(
			"android.net.wifi.rtt.RangingRequest$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject RangingRequest_Builder::addAccessPoint(android::net::wifi::ScanResult arg0)
	{
		return callObjectMethod(
			"addAccessPoint",
			"(Landroid/net/wifi/ScanResult;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject RangingRequest_Builder::addAccessPoints(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addAccessPoints",
			"(Ljava/util/List;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject RangingRequest_Builder::addWifiAwarePeer(android::net::MacAddress arg0)
	{
		return callObjectMethod(
			"addWifiAwarePeer",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject RangingRequest_Builder::addWifiAwarePeer(android::net::wifi::aware::PeerHandle arg0)
	{
		return callObjectMethod(
			"addWifiAwarePeer",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject RangingRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/rtt/RangingRequest;"
		);
	}
} // namespace android::net::wifi::rtt


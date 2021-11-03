#include "../../MacAddress.hpp"
#include "../ScanResult.hpp"
#include "../aware/PeerHandle.hpp"
#include "./RangingRequest.hpp"
#include "./RangingRequest_Builder.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	
	// QJniObject forward
	RangingRequest_Builder::RangingRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RangingRequest_Builder::RangingRequest_Builder()
		: JObject(
			"android.net.wifi.rtt.RangingRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addAccessPoint(android::net::wifi::ScanResult arg0) const
	{
		return callObjectMethod(
			"addAccessPoint",
			"(Landroid/net/wifi/ScanResult;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addAccessPoints(JObject arg0) const
	{
		return callObjectMethod(
			"addAccessPoints",
			"(Ljava/util/List;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addWifiAwarePeer(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"addWifiAwarePeer",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addWifiAwarePeer(android::net::wifi::aware::PeerHandle arg0) const
	{
		return callObjectMethod(
			"addWifiAwarePeer",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::rtt::RangingRequest RangingRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/rtt/RangingRequest;"
		);
	}
} // namespace android::net::wifi::rtt


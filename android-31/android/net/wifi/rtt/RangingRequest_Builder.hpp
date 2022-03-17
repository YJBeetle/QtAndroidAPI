#pragma once

#include "../../MacAddress.def.hpp"
#include "../ScanResult.def.hpp"
#include "../aware/PeerHandle.def.hpp"
#include "./RangingRequest.def.hpp"
#include "./RangingRequest_Builder.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	
	// Constructors
	inline RangingRequest_Builder::RangingRequest_Builder()
		: JObject(
			"android.net.wifi.rtt.RangingRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addAccessPoint(android::net::wifi::ScanResult arg0) const
	{
		return callObjectMethod(
			"addAccessPoint",
			"(Landroid/net/wifi/ScanResult;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addAccessPoints(JObject arg0) const
	{
		return callObjectMethod(
			"addAccessPoints",
			"(Ljava/util/List;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addNon80211mcCapableAccessPoint(android::net::wifi::ScanResult arg0) const
	{
		return callObjectMethod(
			"addNon80211mcCapableAccessPoint",
			"(Landroid/net/wifi/ScanResult;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addNon80211mcCapableAccessPoints(JObject arg0) const
	{
		return callObjectMethod(
			"addNon80211mcCapableAccessPoints",
			"(Ljava/util/List;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addWifiAwarePeer(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"addWifiAwarePeer",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::addWifiAwarePeer(android::net::wifi::aware::PeerHandle arg0) const
	{
		return callObjectMethod(
			"addWifiAwarePeer",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::RangingRequest RangingRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/rtt/RangingRequest;"
		);
	}
	inline android::net::wifi::rtt::RangingRequest_Builder RangingRequest_Builder::setRttBurstSize(jint arg0) const
	{
		return callObjectMethod(
			"setRttBurstSize",
			"(I)Landroid/net/wifi/rtt/RangingRequest$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers


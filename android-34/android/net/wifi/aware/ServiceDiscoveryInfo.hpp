#pragma once

#include "../../../../JByteArray.hpp"
#include "./AwarePairingConfig.def.hpp"
#include "./PeerHandle.def.hpp"
#include "../../../../JString.hpp"
#include "./ServiceDiscoveryInfo.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject ServiceDiscoveryInfo::getMatchFilters() const
	{
		return callObjectMethod(
			"getMatchFilters",
			"()Ljava/util/List;"
		);
	}
	inline JString ServiceDiscoveryInfo::getPairedAlias() const
	{
		return callObjectMethod(
			"getPairedAlias",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::wifi::aware::AwarePairingConfig ServiceDiscoveryInfo::getPairingConfig() const
	{
		return callObjectMethod(
			"getPairingConfig",
			"()Landroid/net/wifi/aware/AwarePairingConfig;"
		);
	}
	inline jint ServiceDiscoveryInfo::getPeerCipherSuite() const
	{
		return callMethod<jint>(
			"getPeerCipherSuite",
			"()I"
		);
	}
	inline android::net::wifi::aware::PeerHandle ServiceDiscoveryInfo::getPeerHandle() const
	{
		return callObjectMethod(
			"getPeerHandle",
			"()Landroid/net/wifi/aware/PeerHandle;"
		);
	}
	inline JByteArray ServiceDiscoveryInfo::getScid() const
	{
		return callObjectMethod(
			"getScid",
			"()[B"
		);
	}
	inline JByteArray ServiceDiscoveryInfo::getServiceSpecificInfo() const
	{
		return callObjectMethod(
			"getServiceSpecificInfo",
			"()[B"
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif

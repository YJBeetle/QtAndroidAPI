#pragma once

#include "../../../Network.def.hpp"
#include "./IkeNetworkLostException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	inline IkeNetworkLostException::IkeNetworkLostException(android::net::Network arg0)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeNetworkLostException",
			"(Landroid/net/Network;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::Network IkeNetworkLostException::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

// Base class headers
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"
#include "./IkeNonProtocolException.hpp"


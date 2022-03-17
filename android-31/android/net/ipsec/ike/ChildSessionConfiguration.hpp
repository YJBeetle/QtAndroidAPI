#pragma once

#include "./ChildSessionConfiguration.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject ChildSessionConfiguration::getInboundTrafficSelectors() const
	{
		return callObjectMethod(
			"getInboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	inline JObject ChildSessionConfiguration::getOutboundTrafficSelectors() const
	{
		return callObjectMethod(
			"getOutboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers


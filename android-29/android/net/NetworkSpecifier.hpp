#pragma once

#include "./NetworkSpecifier.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline NetworkSpecifier::NetworkSpecifier()
		: JObject(
			"android.net.NetworkSpecifier",
			"()V"
		) {}
	
	// Methods
} // namespace android::net

// Base class headers


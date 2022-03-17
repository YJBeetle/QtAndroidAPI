#pragma once

#include "../../JString.hpp"
#include "./IpSecManager_SpiUnavailableException.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint IpSecManager_SpiUnavailableException::getSpi() const
	{
		return callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
} // namespace android::net

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


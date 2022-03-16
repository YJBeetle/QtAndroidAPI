#pragma once

#include "./WifiManager.def.hpp"
#include "../../../JString.hpp"
#include "./WifiManager_MulticastLock.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void WifiManager_MulticastLock::acquire() const
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	inline jboolean WifiManager_MulticastLock::isHeld() const
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	inline void WifiManager_MulticastLock::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void WifiManager_MulticastLock::setReferenceCounted(jboolean arg0) const
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	inline JString WifiManager_MulticastLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::wifi

// Base class headers


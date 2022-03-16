#pragma once

#include "./WifiManager.def.hpp"
#include "../../os/WorkSource.def.hpp"
#include "../../../JString.hpp"
#include "./WifiManager_WifiLock.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void WifiManager_WifiLock::acquire() const
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	inline jboolean WifiManager_WifiLock::isHeld() const
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	inline void WifiManager_WifiLock::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void WifiManager_WifiLock::setReferenceCounted(jboolean arg0) const
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	inline void WifiManager_WifiLock::setWorkSource(android::os::WorkSource arg0) const
	{
		callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		);
	}
	inline JString WifiManager_WifiLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::wifi

// Base class headers


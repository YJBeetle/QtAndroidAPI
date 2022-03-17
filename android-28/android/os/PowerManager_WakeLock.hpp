#pragma once

#include "./PowerManager.def.hpp"
#include "./WorkSource.def.hpp"
#include "../../JString.hpp"
#include "./PowerManager_WakeLock.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PowerManager_WakeLock::acquire() const
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	inline void PowerManager_WakeLock::acquire(jlong arg0) const
	{
		callMethod<void>(
			"acquire",
			"(J)V",
			arg0
		);
	}
	inline jboolean PowerManager_WakeLock::isHeld() const
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	inline void PowerManager_WakeLock::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void PowerManager_WakeLock::release(jint arg0) const
	{
		callMethod<void>(
			"release",
			"(I)V",
			arg0
		);
	}
	inline void PowerManager_WakeLock::setReferenceCounted(jboolean arg0) const
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	inline void PowerManager_WakeLock::setWorkSource(android::os::WorkSource arg0) const
	{
		callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		);
	}
	inline JString PowerManager_WakeLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif

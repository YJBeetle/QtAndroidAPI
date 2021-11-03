#include "./PowerManager.hpp"
#include "./WorkSource.hpp"
#include "../../JString.hpp"
#include "./PowerManager_WakeLock.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	PowerManager_WakeLock::PowerManager_WakeLock(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PowerManager_WakeLock::acquire() const
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	void PowerManager_WakeLock::acquire(jlong arg0) const
	{
		callMethod<void>(
			"acquire",
			"(J)V",
			arg0
		);
	}
	jboolean PowerManager_WakeLock::isHeld() const
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void PowerManager_WakeLock::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void PowerManager_WakeLock::release(jint arg0) const
	{
		callMethod<void>(
			"release",
			"(I)V",
			arg0
		);
	}
	void PowerManager_WakeLock::setReferenceCounted(jboolean arg0) const
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	void PowerManager_WakeLock::setWorkSource(android::os::WorkSource arg0) const
	{
		callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		);
	}
	JString PowerManager_WakeLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os


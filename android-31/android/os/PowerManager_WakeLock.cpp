#include "./PowerManager.hpp"
#include "./WorkSource.hpp"
#include "./PowerManager_WakeLock.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	PowerManager_WakeLock::PowerManager_WakeLock(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PowerManager_WakeLock::acquire()
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	void PowerManager_WakeLock::acquire(jlong arg0)
	{
		callMethod<void>(
			"acquire",
			"(J)V",
			arg0
		);
	}
	jboolean PowerManager_WakeLock::isHeld()
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void PowerManager_WakeLock::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void PowerManager_WakeLock::release(jint arg0)
	{
		callMethod<void>(
			"release",
			"(I)V",
			arg0
		);
	}
	void PowerManager_WakeLock::setReferenceCounted(jboolean arg0)
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	void PowerManager_WakeLock::setWorkSource(android::os::WorkSource arg0)
	{
		callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		);
	}
	jstring PowerManager_WakeLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os


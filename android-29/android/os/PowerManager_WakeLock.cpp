#include "./PowerManager.hpp"
#include "./WorkSource.hpp"
#include "./PowerManager_WakeLock.hpp"

namespace android::os
{
	// Fields
	
	PowerManager_WakeLock::PowerManager_WakeLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PowerManager_WakeLock::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V"
		);
	}
	void PowerManager_WakeLock::acquire(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(J)V",
			arg0
		);
	}
	jboolean PowerManager_WakeLock::isHeld()
	{
		return __thiz.callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void PowerManager_WakeLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void PowerManager_WakeLock::release(jint arg0)
	{
		__thiz.callMethod<void>(
			"release",
			"(I)V",
			arg0
		);
	}
	void PowerManager_WakeLock::setReferenceCounted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	void PowerManager_WakeLock::setWorkSource(android::os::WorkSource arg0)
	{
		__thiz.callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.__jniObject().object()
		);
	}
	jstring PowerManager_WakeLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os


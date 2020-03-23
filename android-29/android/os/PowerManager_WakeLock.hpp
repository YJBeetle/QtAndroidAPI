#pragma once

#ifndef ANDROID_OS_POWERMANAGER_WAKELOCK
#define ANDROID_OS_POWERMANAGER_WAKELOCK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class PowerManager;
}
namespace __jni_impl::android::os
{
	class WorkSource;
}

namespace __jni_impl::android::os
{
	class PowerManager_WakeLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void release();
		void release(jint arg0);
		void acquire();
		void acquire(jlong arg0);
		void setReferenceCounted(jboolean arg0);
		jboolean isHeld();
		void setWorkSource(__jni_impl::android::os::WorkSource arg0);
	};
} // namespace __jni_impl::android::os

#include "PowerManager.hpp"
#include "WorkSource.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void PowerManager_WakeLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.PowerManager$WakeLock",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PowerManager_WakeLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void PowerManager_WakeLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	void PowerManager_WakeLock::release(jint arg0)
	{
		__thiz.callMethod<void>(
			"release",
			"(I)V",
			arg0);
	}
	void PowerManager_WakeLock::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V");
	}
	void PowerManager_WakeLock::acquire(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(J)V",
			arg0);
	}
	void PowerManager_WakeLock::setReferenceCounted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0);
	}
	jboolean PowerManager_WakeLock::isHeld()
	{
		return __thiz.callMethod<jboolean>(
			"isHeld",
			"()Z");
	}
	void PowerManager_WakeLock::setWorkSource(__jni_impl::android::os::WorkSource arg0)
	{
		__thiz.callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class PowerManager_WakeLock : public __jni_impl::android::os::PowerManager_WakeLock
	{
	public:
		PowerManager_WakeLock(QAndroidJniObject obj) { __thiz = obj; }
		PowerManager_WakeLock()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_POWERMANAGER_WAKELOCK


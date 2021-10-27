#include "./WifiManager.hpp"
#include "../../os/WorkSource.hpp"
#include "./WifiManager_WifiLock.hpp"

namespace android::net::wifi
{
	// Fields
	
	WifiManager_WifiLock::WifiManager_WifiLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void WifiManager_WifiLock::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V"
		);
	}
	jboolean WifiManager_WifiLock::isHeld()
	{
		return __thiz.callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void WifiManager_WifiLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void WifiManager_WifiLock::setReferenceCounted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	void WifiManager_WifiLock::setWorkSource(android::os::WorkSource arg0)
	{
		__thiz.callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.__jniObject().object()
		);
	}
	jstring WifiManager_WifiLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::wifi


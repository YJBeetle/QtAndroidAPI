#include "./WifiManager.hpp"
#include "./WifiManager_MulticastLock.hpp"

namespace android::net::wifi
{
	// Fields
	
	WifiManager_MulticastLock::WifiManager_MulticastLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void WifiManager_MulticastLock::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V"
		);
	}
	jboolean WifiManager_MulticastLock::isHeld()
	{
		return __thiz.callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void WifiManager_MulticastLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void WifiManager_MulticastLock::setReferenceCounted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	jstring WifiManager_MulticastLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::wifi


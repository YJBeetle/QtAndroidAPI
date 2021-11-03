#include "./WifiManager.hpp"
#include "./WifiManager_MulticastLock.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiManager_MulticastLock::WifiManager_MulticastLock(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void WifiManager_MulticastLock::acquire()
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	jboolean WifiManager_MulticastLock::isHeld()
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void WifiManager_MulticastLock::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void WifiManager_MulticastLock::setReferenceCounted(jboolean arg0)
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	jstring WifiManager_MulticastLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::wifi


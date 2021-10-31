#include "./WifiManager.hpp"
#include "../../os/WorkSource.hpp"
#include "./WifiManager_WifiLock.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiManager_WifiLock::WifiManager_WifiLock(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void WifiManager_WifiLock::acquire()
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	jboolean WifiManager_WifiLock::isHeld()
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void WifiManager_WifiLock::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void WifiManager_WifiLock::setReferenceCounted(jboolean arg0)
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	void WifiManager_WifiLock::setWorkSource(android::os::WorkSource arg0)
	{
		callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		);
	}
	jstring WifiManager_WifiLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net::wifi


#include "./WifiManager.hpp"
#include "../../os/WorkSource.hpp"
#include "../../../JString.hpp"
#include "./WifiManager_WifiLock.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QJniObject forward
	WifiManager_WifiLock::WifiManager_WifiLock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void WifiManager_WifiLock::acquire() const
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	jboolean WifiManager_WifiLock::isHeld() const
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void WifiManager_WifiLock::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void WifiManager_WifiLock::setReferenceCounted(jboolean arg0) const
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	void WifiManager_WifiLock::setWorkSource(android::os::WorkSource arg0) const
	{
		callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		);
	}
	JString WifiManager_WifiLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::wifi


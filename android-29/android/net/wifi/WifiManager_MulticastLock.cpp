#include "./WifiManager.hpp"
#include "../../../JString.hpp"
#include "./WifiManager_MulticastLock.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	
	// Methods
	void WifiManager_MulticastLock::acquire() const
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	jboolean WifiManager_MulticastLock::isHeld() const
	{
		return callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void WifiManager_MulticastLock::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void WifiManager_MulticastLock::setReferenceCounted(jboolean arg0) const
	{
		callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	JString WifiManager_MulticastLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::wifi


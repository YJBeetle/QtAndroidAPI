#include "../../../../JByteArray.hpp"
#include "./IdentityChangedListener.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QAndroidJniObject forward
	IdentityChangedListener::IdentityChangedListener(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IdentityChangedListener::IdentityChangedListener()
		: JObject(
			"android.net.wifi.aware.IdentityChangedListener",
			"()V"
		) {}
	
	// Methods
	void IdentityChangedListener::onIdentityChanged(JByteArray arg0) const
	{
		callMethod<void>(
			"onIdentityChanged",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::net::wifi::aware


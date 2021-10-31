#include "./IdentityChangedListener.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// QAndroidJniObject forward
	IdentityChangedListener::IdentityChangedListener(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IdentityChangedListener::IdentityChangedListener()
		: __JniBaseClass(
			"android.net.wifi.aware.IdentityChangedListener",
			"()V"
		) {}
	
	// Methods
	void IdentityChangedListener::onIdentityChanged(jbyteArray arg0)
	{
		callMethod<void>(
			"onIdentityChanged",
			"([B)V",
			arg0
		);
	}
} // namespace android::net::wifi::aware


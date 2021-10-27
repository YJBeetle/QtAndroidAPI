#include "./IdentityChangedListener.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	IdentityChangedListener::IdentityChangedListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IdentityChangedListener::IdentityChangedListener()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.IdentityChangedListener",
			"()V"
		);
	}
	
	// Methods
	void IdentityChangedListener::onIdentityChanged(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"onIdentityChanged",
			"([B)V",
			arg0
		);
	}
} // namespace android::net::wifi::aware


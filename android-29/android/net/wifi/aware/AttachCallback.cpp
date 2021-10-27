#include "./WifiAwareSession.hpp"
#include "./AttachCallback.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	AttachCallback::AttachCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AttachCallback::AttachCallback()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.AttachCallback",
			"()V"
		);
	}
	
	// Methods
	void AttachCallback::onAttachFailed()
	{
		__thiz.callMethod<void>(
			"onAttachFailed",
			"()V"
		);
	}
	void AttachCallback::onAttached(android::net::wifi::aware::WifiAwareSession arg0)
	{
		__thiz.callMethod<void>(
			"onAttached",
			"(Landroid/net/wifi/aware/WifiAwareSession;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::net::wifi::aware


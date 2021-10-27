#include "./WifiManager_WpsCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	WifiManager_WpsCallback::WifiManager_WpsCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiManager_WpsCallback::WifiManager_WpsCallback()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiManager$WpsCallback",
			"()V"
		);
	}
	
	// Methods
	void WifiManager_WpsCallback::onFailed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFailed",
			"(I)V",
			arg0
		);
	}
	void WifiManager_WpsCallback::onStarted(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onStarted",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiManager_WpsCallback::onStarted(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onStarted",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WifiManager_WpsCallback::onSucceeded()
	{
		__thiz.callMethod<void>(
			"onSucceeded",
			"()V"
		);
	}
} // namespace android::net::wifi


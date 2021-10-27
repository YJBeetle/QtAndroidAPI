#include "./SocketKeepalive_Callback.hpp"

namespace android::net
{
	// Fields
	
	SocketKeepalive_Callback::SocketKeepalive_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SocketKeepalive_Callback::SocketKeepalive_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.net.SocketKeepalive$Callback",
			"()V"
		);
	}
	
	// Methods
	void SocketKeepalive_Callback::onDataReceived()
	{
		__thiz.callMethod<void>(
			"onDataReceived",
			"()V"
		);
	}
	void SocketKeepalive_Callback::onError(jint arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void SocketKeepalive_Callback::onStarted()
	{
		__thiz.callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	void SocketKeepalive_Callback::onStopped()
	{
		__thiz.callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::net


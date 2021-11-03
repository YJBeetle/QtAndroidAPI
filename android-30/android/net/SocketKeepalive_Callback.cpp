#include "./SocketKeepalive_Callback.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	SocketKeepalive_Callback::SocketKeepalive_Callback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SocketKeepalive_Callback::SocketKeepalive_Callback()
		: JObject(
			"android.net.SocketKeepalive$Callback",
			"()V"
		) {}
	
	// Methods
	void SocketKeepalive_Callback::onDataReceived()
	{
		callMethod<void>(
			"onDataReceived",
			"()V"
		);
	}
	void SocketKeepalive_Callback::onError(jint arg0)
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void SocketKeepalive_Callback::onStarted()
	{
		callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	void SocketKeepalive_Callback::onStopped()
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::net


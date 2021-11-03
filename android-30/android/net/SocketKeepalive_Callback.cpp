#include "./SocketKeepalive_Callback.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	SocketKeepalive_Callback::SocketKeepalive_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SocketKeepalive_Callback::SocketKeepalive_Callback()
		: JObject(
			"android.net.SocketKeepalive$Callback",
			"()V"
		) {}
	
	// Methods
	void SocketKeepalive_Callback::onDataReceived() const
	{
		callMethod<void>(
			"onDataReceived",
			"()V"
		);
	}
	void SocketKeepalive_Callback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void SocketKeepalive_Callback::onStarted() const
	{
		callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	void SocketKeepalive_Callback::onStopped() const
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::net


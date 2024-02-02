#pragma once

#include "./SocketKeepalive_Callback.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline SocketKeepalive_Callback::SocketKeepalive_Callback()
		: JObject(
			"android.net.SocketKeepalive$Callback",
			"()V"
		) {}
	
	// Methods
	inline void SocketKeepalive_Callback::onDataReceived() const
	{
		callMethod<void>(
			"onDataReceived",
			"()V"
		);
	}
	inline void SocketKeepalive_Callback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	inline void SocketKeepalive_Callback::onStarted() const
	{
		callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	inline void SocketKeepalive_Callback::onStopped() const
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif

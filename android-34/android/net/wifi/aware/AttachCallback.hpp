#pragma once

#include "./WifiAwareSession.def.hpp"
#include "./AttachCallback.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	inline AttachCallback::AttachCallback()
		: JObject(
			"android.net.wifi.aware.AttachCallback",
			"()V"
		) {}
	
	// Methods
	inline void AttachCallback::onAttachFailed() const
	{
		callMethod<void>(
			"onAttachFailed",
			"()V"
		);
	}
	inline void AttachCallback::onAttached(android::net::wifi::aware::WifiAwareSession arg0) const
	{
		callMethod<void>(
			"onAttached",
			"(Landroid/net/wifi/aware/WifiAwareSession;)V",
			arg0.object()
		);
	}
	inline void AttachCallback::onAwareSessionTerminated() const
	{
		callMethod<void>(
			"onAwareSessionTerminated",
			"()V"
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif

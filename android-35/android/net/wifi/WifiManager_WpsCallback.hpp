#pragma once

#include "../../../JString.hpp"
#include "./WifiManager_WpsCallback.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline WifiManager_WpsCallback::WifiManager_WpsCallback()
		: JObject(
			"android.net.wifi.WifiManager$WpsCallback",
			"()V"
		) {}
	
	// Methods
	inline void WifiManager_WpsCallback::onFailed(jint arg0) const
	{
		callMethod<void>(
			"onFailed",
			"(I)V",
			arg0
		);
	}
	inline void WifiManager_WpsCallback::onStarted(JString arg0) const
	{
		callMethod<void>(
			"onStarted",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiManager_WpsCallback::onSucceeded() const
	{
		callMethod<void>(
			"onSucceeded",
			"()V"
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif

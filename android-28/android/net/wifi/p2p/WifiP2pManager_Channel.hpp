#pragma once

#include "../../../content/Context.def.hpp"
#include "./WifiP2pManager.def.hpp"
#include "../../../os/Binder.def.hpp"
#include "../../../os/Looper.def.hpp"
#include "./WifiP2pManager_Channel.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void WifiP2pManager_Channel::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p;
#endif

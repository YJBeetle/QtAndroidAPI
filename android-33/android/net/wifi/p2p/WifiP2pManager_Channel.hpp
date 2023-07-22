#pragma once

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

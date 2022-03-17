#pragma once

#include "../../../../JByteArray.hpp"
#include "./IdentityChangedListener.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	inline IdentityChangedListener::IdentityChangedListener()
		: JObject(
			"android.net.wifi.aware.IdentityChangedListener",
			"()V"
		) {}
	
	// Methods
	inline void IdentityChangedListener::onIdentityChanged(JByteArray arg0) const
	{
		callMethod<void>(
			"onIdentityChanged",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::net::wifi::aware

// Base class headers


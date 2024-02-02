#pragma once

#include "../../../../JByteArray.hpp"
#include "../../MacAddress.def.hpp"
#include "./IdentityChangedListener.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline jint IdentityChangedListener::CLUSTER_CHANGE_EVENT_JOINED()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.IdentityChangedListener",
			"CLUSTER_CHANGE_EVENT_JOINED"
		);
	}
	inline jint IdentityChangedListener::CLUSTER_CHANGE_EVENT_STARTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.IdentityChangedListener",
			"CLUSTER_CHANGE_EVENT_STARTED"
		);
	}
	
	// Constructors
	inline IdentityChangedListener::IdentityChangedListener()
		: JObject(
			"android.net.wifi.aware.IdentityChangedListener",
			"()V"
		) {}
	
	// Methods
	inline void IdentityChangedListener::onClusterIdChanged(jint arg0, android::net::MacAddress arg1) const
	{
		callMethod<void>(
			"onClusterIdChanged",
			"(ILandroid/net/MacAddress;)V",
			arg0,
			arg1.object()
		);
	}
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif

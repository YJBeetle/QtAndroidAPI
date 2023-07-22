#pragma once

#include "./IkeSessionParams.def.hpp"
#include "./TunnelModeChildSessionParams.def.hpp"
#include "../../../../JObject.hpp"
#include "./IkeTunnelConnectionParams.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline IkeTunnelConnectionParams::IkeTunnelConnectionParams(android::net::ipsec::ike::IkeSessionParams arg0, android::net::ipsec::ike::TunnelModeChildSessionParams arg1)
		: JObject(
			"android.net.ipsec.ike.IkeTunnelConnectionParams",
			"(Landroid/net/ipsec/ike/IkeSessionParams;Landroid/net/ipsec/ike/TunnelModeChildSessionParams;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean IkeTunnelConnectionParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::ipsec::ike::IkeSessionParams IkeTunnelConnectionParams::getIkeSessionParams() const
	{
		return callObjectMethod(
			"getIkeSessionParams",
			"()Landroid/net/ipsec/ike/IkeSessionParams;"
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams IkeTunnelConnectionParams::getTunnelModeChildSessionParams() const
	{
		return callObjectMethod(
			"getTunnelModeChildSessionParams",
			"()Landroid/net/ipsec/ike/TunnelModeChildSessionParams;"
		);
	}
	inline jint IkeTunnelConnectionParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif

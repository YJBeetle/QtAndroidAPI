#pragma once

#include "../../../../JIntArray.hpp"
#include "../../Network.def.hpp"
#include "./IkeIdentification.def.hpp"
#include "./IkeSessionParams_IkeAuthConfig.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./IkeSessionParams.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	inline jint IkeSessionParams::IKE_OPTION_ACCEPT_ANY_REMOTE_ID()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionParams",
			"IKE_OPTION_ACCEPT_ANY_REMOTE_ID"
		);
	}
	inline jint IkeSessionParams::IKE_OPTION_EAP_ONLY_AUTH()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionParams",
			"IKE_OPTION_EAP_ONLY_AUTH"
		);
	}
	inline jint IkeSessionParams::IKE_OPTION_FORCE_PORT_4500()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionParams",
			"IKE_OPTION_FORCE_PORT_4500"
		);
	}
	inline jint IkeSessionParams::IKE_OPTION_MOBIKE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionParams",
			"IKE_OPTION_MOBIKE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean IkeSessionParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint IkeSessionParams::getDpdDelaySeconds() const
	{
		return callMethod<jint>(
			"getDpdDelaySeconds",
			"()I"
		);
	}
	inline jint IkeSessionParams::getHardLifetimeSeconds() const
	{
		return callMethod<jint>(
			"getHardLifetimeSeconds",
			"()I"
		);
	}
	inline JObject IkeSessionParams::getIkeSaProposals() const
	{
		return callObjectMethod(
			"getIkeSaProposals",
			"()Ljava/util/List;"
		);
	}
	inline android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig IkeSessionParams::getLocalAuthConfig() const
	{
		return callObjectMethod(
			"getLocalAuthConfig",
			"()Landroid/net/ipsec/ike/IkeSessionParams$IkeAuthConfig;"
		);
	}
	inline android::net::ipsec::ike::IkeIdentification IkeSessionParams::getLocalIdentification() const
	{
		return callObjectMethod(
			"getLocalIdentification",
			"()Landroid/net/ipsec/ike/IkeIdentification;"
		);
	}
	inline jint IkeSessionParams::getNattKeepAliveDelaySeconds() const
	{
		return callMethod<jint>(
			"getNattKeepAliveDelaySeconds",
			"()I"
		);
	}
	inline android::net::Network IkeSessionParams::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig IkeSessionParams::getRemoteAuthConfig() const
	{
		return callObjectMethod(
			"getRemoteAuthConfig",
			"()Landroid/net/ipsec/ike/IkeSessionParams$IkeAuthConfig;"
		);
	}
	inline android::net::ipsec::ike::IkeIdentification IkeSessionParams::getRemoteIdentification() const
	{
		return callObjectMethod(
			"getRemoteIdentification",
			"()Landroid/net/ipsec/ike/IkeIdentification;"
		);
	}
	inline JIntArray IkeSessionParams::getRetransmissionTimeoutsMillis() const
	{
		return callObjectMethod(
			"getRetransmissionTimeoutsMillis",
			"()[I"
		);
	}
	inline JString IkeSessionParams::getServerHostname() const
	{
		return callObjectMethod(
			"getServerHostname",
			"()Ljava/lang/String;"
		);
	}
	inline jint IkeSessionParams::getSoftLifetimeSeconds() const
	{
		return callMethod<jint>(
			"getSoftLifetimeSeconds",
			"()I"
		);
	}
	inline jboolean IkeSessionParams::hasIkeOption(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasIkeOption",
			"(I)Z",
			arg0
		);
	}
	inline jint IkeSessionParams::hashCode() const
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

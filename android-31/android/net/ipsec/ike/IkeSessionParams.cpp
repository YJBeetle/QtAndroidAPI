#include "../../../../JIntArray.hpp"
#include "../../Network.hpp"
#include "./IkeIdentification.hpp"
#include "./IkeSessionParams_IkeAuthConfig.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./IkeSessionParams.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	jint IkeSessionParams::IKE_OPTION_ACCEPT_ANY_REMOTE_ID()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionParams",
			"IKE_OPTION_ACCEPT_ANY_REMOTE_ID"
		);
	}
	jint IkeSessionParams::IKE_OPTION_EAP_ONLY_AUTH()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionParams",
			"IKE_OPTION_EAP_ONLY_AUTH"
		);
	}
	jint IkeSessionParams::IKE_OPTION_FORCE_PORT_4500()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionParams",
			"IKE_OPTION_FORCE_PORT_4500"
		);
	}
	jint IkeSessionParams::IKE_OPTION_MOBIKE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionParams",
			"IKE_OPTION_MOBIKE"
		);
	}
	
	// QAndroidJniObject forward
	IkeSessionParams::IkeSessionParams(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeSessionParams::getDpdDelaySeconds() const
	{
		return callMethod<jint>(
			"getDpdDelaySeconds",
			"()I"
		);
	}
	jint IkeSessionParams::getHardLifetimeSeconds() const
	{
		return callMethod<jint>(
			"getHardLifetimeSeconds",
			"()I"
		);
	}
	JObject IkeSessionParams::getIkeSaProposals() const
	{
		return callObjectMethod(
			"getIkeSaProposals",
			"()Ljava/util/List;"
		);
	}
	android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig IkeSessionParams::getLocalAuthConfig() const
	{
		return callObjectMethod(
			"getLocalAuthConfig",
			"()Landroid/net/ipsec/ike/IkeSessionParams$IkeAuthConfig;"
		);
	}
	android::net::ipsec::ike::IkeIdentification IkeSessionParams::getLocalIdentification() const
	{
		return callObjectMethod(
			"getLocalIdentification",
			"()Landroid/net/ipsec/ike/IkeIdentification;"
		);
	}
	jint IkeSessionParams::getNattKeepAliveDelaySeconds() const
	{
		return callMethod<jint>(
			"getNattKeepAliveDelaySeconds",
			"()I"
		);
	}
	android::net::Network IkeSessionParams::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig IkeSessionParams::getRemoteAuthConfig() const
	{
		return callObjectMethod(
			"getRemoteAuthConfig",
			"()Landroid/net/ipsec/ike/IkeSessionParams$IkeAuthConfig;"
		);
	}
	android::net::ipsec::ike::IkeIdentification IkeSessionParams::getRemoteIdentification() const
	{
		return callObjectMethod(
			"getRemoteIdentification",
			"()Landroid/net/ipsec/ike/IkeIdentification;"
		);
	}
	JIntArray IkeSessionParams::getRetransmissionTimeoutsMillis() const
	{
		return callObjectMethod(
			"getRetransmissionTimeoutsMillis",
			"()[I"
		);
	}
	JString IkeSessionParams::getServerHostname() const
	{
		return callObjectMethod(
			"getServerHostname",
			"()Ljava/lang/String;"
		);
	}
	jint IkeSessionParams::getSoftLifetimeSeconds() const
	{
		return callMethod<jint>(
			"getSoftLifetimeSeconds",
			"()I"
		);
	}
	jboolean IkeSessionParams::hasIkeOption(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasIkeOption",
			"(I)Z",
			arg0
		);
	}
	jint IkeSessionParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


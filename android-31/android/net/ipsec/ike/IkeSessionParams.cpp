#include "../../Network.hpp"
#include "./IkeIdentification.hpp"
#include "./IkeSessionParams_IkeAuthConfig.hpp"
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
	
	// QJniObject forward
	IkeSessionParams::IkeSessionParams(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint IkeSessionParams::getDpdDelaySeconds()
	{
		return callMethod<jint>(
			"getDpdDelaySeconds",
			"()I"
		);
	}
	jint IkeSessionParams::getHardLifetimeSeconds()
	{
		return callMethod<jint>(
			"getHardLifetimeSeconds",
			"()I"
		);
	}
	__JniBaseClass IkeSessionParams::getIkeSaProposals()
	{
		return callObjectMethod(
			"getIkeSaProposals",
			"()Ljava/util/List;"
		);
	}
	android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig IkeSessionParams::getLocalAuthConfig()
	{
		return callObjectMethod(
			"getLocalAuthConfig",
			"()Landroid/net/ipsec/ike/IkeSessionParams$IkeAuthConfig;"
		);
	}
	android::net::ipsec::ike::IkeIdentification IkeSessionParams::getLocalIdentification()
	{
		return callObjectMethod(
			"getLocalIdentification",
			"()Landroid/net/ipsec/ike/IkeIdentification;"
		);
	}
	jint IkeSessionParams::getNattKeepAliveDelaySeconds()
	{
		return callMethod<jint>(
			"getNattKeepAliveDelaySeconds",
			"()I"
		);
	}
	android::net::Network IkeSessionParams::getNetwork()
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig IkeSessionParams::getRemoteAuthConfig()
	{
		return callObjectMethod(
			"getRemoteAuthConfig",
			"()Landroid/net/ipsec/ike/IkeSessionParams$IkeAuthConfig;"
		);
	}
	android::net::ipsec::ike::IkeIdentification IkeSessionParams::getRemoteIdentification()
	{
		return callObjectMethod(
			"getRemoteIdentification",
			"()Landroid/net/ipsec/ike/IkeIdentification;"
		);
	}
	jintArray IkeSessionParams::getRetransmissionTimeoutsMillis()
	{
		return callObjectMethod(
			"getRetransmissionTimeoutsMillis",
			"()[I"
		).object<jintArray>();
	}
	jstring IkeSessionParams::getServerHostname()
	{
		return callObjectMethod(
			"getServerHostname",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IkeSessionParams::getSoftLifetimeSeconds()
	{
		return callMethod<jint>(
			"getSoftLifetimeSeconds",
			"()I"
		);
	}
	jboolean IkeSessionParams::hasIkeOption(jint arg0)
	{
		return callMethod<jboolean>(
			"hasIkeOption",
			"(I)Z",
			arg0
		);
	}
	jint IkeSessionParams::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


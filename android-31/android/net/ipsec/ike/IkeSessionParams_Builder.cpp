#include "../../../../JByteArray.hpp"
#include "../../../../JIntArray.hpp"
#include "../../Network.hpp"
#include "../../eap/EapSessionConfig.hpp"
#include "./IkeIdentification.hpp"
#include "./IkeSaProposal.hpp"
#include "./IkeSessionParams.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/security/cert/X509Certificate.hpp"
#include "./IkeSessionParams_Builder.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	IkeSessionParams_Builder::IkeSessionParams_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IkeSessionParams_Builder::IkeSessionParams_Builder()
		: JObject(
			"android.net.ipsec.ike.IkeSessionParams$Builder",
			"()V"
		) {}
	IkeSessionParams_Builder::IkeSessionParams_Builder(android::net::ipsec::ike::IkeSessionParams arg0)
		: JObject(
			"android.net.ipsec.ike.IkeSessionParams$Builder",
			"(Landroid/net/ipsec/ike/IkeSessionParams;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::addIkeOption(jint arg0) const
	{
		return callObjectMethod(
			"addIkeOption",
			"(I)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::addIkeSaProposal(android::net::ipsec::ike::IkeSaProposal arg0) const
	{
		return callObjectMethod(
			"addIkeSaProposal",
			"(Landroid/net/ipsec/ike/IkeSaProposal;)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::IkeSessionParams IkeSessionParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/IkeSessionParams;"
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::removeIkeOption(jint arg0) const
	{
		return callObjectMethod(
			"removeIkeOption",
			"(I)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setAuthDigitalSignature(java::security::cert::X509Certificate arg0, java::security::cert::X509Certificate arg1, JObject arg2) const
	{
		return callObjectMethod(
			"setAuthDigitalSignature",
			"(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/security/PrivateKey;)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setAuthDigitalSignature(java::security::cert::X509Certificate arg0, java::security::cert::X509Certificate arg1, JObject arg2, JObject arg3) const
	{
		return callObjectMethod(
			"setAuthDigitalSignature",
			"(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;Ljava/util/List;Ljava/security/PrivateKey;)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setAuthEap(java::security::cert::X509Certificate arg0, android::net::eap::EapSessionConfig arg1) const
	{
		return callObjectMethod(
			"setAuthEap",
			"(Ljava/security/cert/X509Certificate;Landroid/net/eap/EapSessionConfig;)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setAuthPsk(JByteArray arg0) const
	{
		return callObjectMethod(
			"setAuthPsk",
			"([B)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setDpdDelaySeconds(jint arg0) const
	{
		return callObjectMethod(
			"setDpdDelaySeconds",
			"(I)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setLifetimeSeconds(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setLifetimeSeconds",
			"(II)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0,
			arg1
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setLocalIdentification(android::net::ipsec::ike::IkeIdentification arg0) const
	{
		return callObjectMethod(
			"setLocalIdentification",
			"(Landroid/net/ipsec/ike/IkeIdentification;)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setNattKeepAliveDelaySeconds(jint arg0) const
	{
		return callObjectMethod(
			"setNattKeepAliveDelaySeconds",
			"(I)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setNetwork(android::net::Network arg0) const
	{
		return callObjectMethod(
			"setNetwork",
			"(Landroid/net/Network;)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setRemoteIdentification(android::net::ipsec::ike::IkeIdentification arg0) const
	{
		return callObjectMethod(
			"setRemoteIdentification",
			"(Landroid/net/ipsec/ike/IkeIdentification;)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setRetransmissionTimeoutsMillis(JIntArray arg0) const
	{
		return callObjectMethod(
			"setRetransmissionTimeoutsMillis",
			"([I)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object<jintArray>()
		);
	}
	android::net::ipsec::ike::IkeSessionParams_Builder IkeSessionParams_Builder::setServerHostname(JString arg0) const
	{
		return callObjectMethod(
			"setServerHostname",
			"(Ljava/lang/String;)Landroid/net/ipsec/ike/IkeSessionParams$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::ipsec::ike


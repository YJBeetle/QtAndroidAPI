#include "../../JByteArray.hpp"
#include "./Ikev2VpnProfile.hpp"
#include "./ProxyInfo.hpp"
#include "../../JString.hpp"
#include "../../java/security/cert/X509Certificate.hpp"
#include "./Ikev2VpnProfile_Builder.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	Ikev2VpnProfile_Builder::Ikev2VpnProfile_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Ikev2VpnProfile_Builder::Ikev2VpnProfile_Builder(JString arg0, JString arg1)
		: JObject(
			"android.net.Ikev2VpnProfile$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::net::Ikev2VpnProfile Ikev2VpnProfile_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/Ikev2VpnProfile;"
		);
	}
	android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setAllowedAlgorithms(JObject arg0)
	{
		return callObjectMethod(
			"setAllowedAlgorithms",
			"(Ljava/util/List;)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object()
		);
	}
	android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setAuthDigitalSignature(java::security::cert::X509Certificate arg0, JObject arg1, java::security::cert::X509Certificate arg2)
	{
		return callObjectMethod(
			"setAuthDigitalSignature",
			"(Ljava/security/cert/X509Certificate;Ljava/security/PrivateKey;Ljava/security/cert/X509Certificate;)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setAuthPsk(JByteArray arg0)
	{
		return callObjectMethod(
			"setAuthPsk",
			"([B)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setAuthUsernamePassword(JString arg0, JString arg1, java::security::cert::X509Certificate arg2)
	{
		return callObjectMethod(
			"setAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/cert/X509Certificate;)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setBypassable(jboolean arg0)
	{
		return callObjectMethod(
			"setBypassable",
			"(Z)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0
		);
	}
	android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setMaxMtu(jint arg0)
	{
		return callObjectMethod(
			"setMaxMtu",
			"(I)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0
		);
	}
	android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setMetered(jboolean arg0)
	{
		return callObjectMethod(
			"setMetered",
			"(Z)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0
		);
	}
	android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setProxy(android::net::ProxyInfo arg0)
	{
		return callObjectMethod(
			"setProxy",
			"(Landroid/net/ProxyInfo;)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object()
		);
	}
} // namespace android::net


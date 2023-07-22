#pragma once

#include "../../JByteArray.hpp"
#include "./Ikev2VpnProfile.def.hpp"
#include "./ProxyInfo.def.hpp"
#include "./ipsec/ike/IkeTunnelConnectionParams.def.hpp"
#include "../../JString.hpp"
#include "../../java/security/cert/X509Certificate.def.hpp"
#include "./Ikev2VpnProfile_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline Ikev2VpnProfile_Builder::Ikev2VpnProfile_Builder(android::net::ipsec::ike::IkeTunnelConnectionParams arg0)
		: JObject(
			"android.net.Ikev2VpnProfile$Builder",
			"(Landroid/net/ipsec/ike/IkeTunnelConnectionParams;)V",
			arg0.object()
		) {}
	inline Ikev2VpnProfile_Builder::Ikev2VpnProfile_Builder(JString arg0, JString arg1)
		: JObject(
			"android.net.Ikev2VpnProfile$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::net::Ikev2VpnProfile Ikev2VpnProfile_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/Ikev2VpnProfile;"
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setAllowedAlgorithms(JObject arg0) const
	{
		return callObjectMethod(
			"setAllowedAlgorithms",
			"(Ljava/util/List;)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object()
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setAuthDigitalSignature(java::security::cert::X509Certificate arg0, JObject arg1, java::security::cert::X509Certificate arg2) const
	{
		return callObjectMethod(
			"setAuthDigitalSignature",
			"(Ljava/security/cert/X509Certificate;Ljava/security/PrivateKey;Ljava/security/cert/X509Certificate;)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setAuthPsk(JByteArray arg0) const
	{
		return callObjectMethod(
			"setAuthPsk",
			"([B)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setAuthUsernamePassword(JString arg0, JString arg1, java::security::cert::X509Certificate arg2) const
	{
		return callObjectMethod(
			"setAuthUsernamePassword",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/cert/X509Certificate;)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setBypassable(jboolean arg0) const
	{
		return callObjectMethod(
			"setBypassable",
			"(Z)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setLocalRoutesExcluded(jboolean arg0) const
	{
		return callObjectMethod(
			"setLocalRoutesExcluded",
			"(Z)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setMaxMtu(jint arg0) const
	{
		return callObjectMethod(
			"setMaxMtu",
			"(I)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setMetered(jboolean arg0) const
	{
		return callObjectMethod(
			"setMetered",
			"(Z)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setProxy(android::net::ProxyInfo arg0) const
	{
		return callObjectMethod(
			"setProxy",
			"(Landroid/net/ProxyInfo;)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0.object()
		);
	}
	inline android::net::Ikev2VpnProfile_Builder Ikev2VpnProfile_Builder::setRequiresInternetValidation(jboolean arg0) const
	{
		return callObjectMethod(
			"setRequiresInternetValidation",
			"(Z)Landroid/net/Ikev2VpnProfile$Builder;",
			arg0
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif

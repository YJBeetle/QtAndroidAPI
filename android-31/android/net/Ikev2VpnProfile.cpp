#include "../../JByteArray.hpp"
#include "./ProxyInfo.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/security/cert/X509Certificate.hpp"
#include "./Ikev2VpnProfile.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	Ikev2VpnProfile::Ikev2VpnProfile(QJniObject obj) : android::net::PlatformVpnProfile(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Ikev2VpnProfile::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Ikev2VpnProfile::getAllowedAlgorithms()
	{
		return callObjectMethod(
			"getAllowedAlgorithms",
			"()Ljava/util/List;"
		);
	}
	jint Ikev2VpnProfile::getMaxMtu()
	{
		return callMethod<jint>(
			"getMaxMtu",
			"()I"
		);
	}
	JString Ikev2VpnProfile::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	JByteArray Ikev2VpnProfile::getPresharedKey()
	{
		return callObjectMethod(
			"getPresharedKey",
			"()[B"
		);
	}
	android::net::ProxyInfo Ikev2VpnProfile::getProxyInfo()
	{
		return callObjectMethod(
			"getProxyInfo",
			"()Landroid/net/ProxyInfo;"
		);
	}
	JObject Ikev2VpnProfile::getRsaPrivateKey()
	{
		return callObjectMethod(
			"getRsaPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	JString Ikev2VpnProfile::getServerAddr()
	{
		return callObjectMethod(
			"getServerAddr",
			"()Ljava/lang/String;"
		);
	}
	java::security::cert::X509Certificate Ikev2VpnProfile::getServerRootCaCert()
	{
		return callObjectMethod(
			"getServerRootCaCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	java::security::cert::X509Certificate Ikev2VpnProfile::getUserCert()
	{
		return callObjectMethod(
			"getUserCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	JString Ikev2VpnProfile::getUserIdentity()
	{
		return callObjectMethod(
			"getUserIdentity",
			"()Ljava/lang/String;"
		);
	}
	JString Ikev2VpnProfile::getUsername()
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		);
	}
	jint Ikev2VpnProfile::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Ikev2VpnProfile::isBypassable()
	{
		return callMethod<jboolean>(
			"isBypassable",
			"()Z"
		);
	}
	jboolean Ikev2VpnProfile::isMetered()
	{
		return callMethod<jboolean>(
			"isMetered",
			"()Z"
		);
	}
} // namespace android::net


#include "./ProxyInfo.hpp"
#include "../../java/security/cert/X509Certificate.hpp"
#include "./Ikev2VpnProfile.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	Ikev2VpnProfile::Ikev2VpnProfile(QAndroidJniObject obj) : android::net::PlatformVpnProfile(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Ikev2VpnProfile::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring Ikev2VpnProfile::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray Ikev2VpnProfile::getPresharedKey()
	{
		return callObjectMethod(
			"getPresharedKey",
			"()[B"
		).object<jbyteArray>();
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
	jstring Ikev2VpnProfile::getServerAddr()
	{
		return callObjectMethod(
			"getServerAddr",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring Ikev2VpnProfile::getUserIdentity()
	{
		return callObjectMethod(
			"getUserIdentity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Ikev2VpnProfile::getUsername()
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		).object<jstring>();
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


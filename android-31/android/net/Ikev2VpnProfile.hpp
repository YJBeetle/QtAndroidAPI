#pragma once

#include "../../JByteArray.hpp"
#include "./ProxyInfo.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/security/cert/X509Certificate.def.hpp"
#include "./Ikev2VpnProfile.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Ikev2VpnProfile::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Ikev2VpnProfile::getAllowedAlgorithms() const
	{
		return callObjectMethod(
			"getAllowedAlgorithms",
			"()Ljava/util/List;"
		);
	}
	inline jint Ikev2VpnProfile::getMaxMtu() const
	{
		return callMethod<jint>(
			"getMaxMtu",
			"()I"
		);
	}
	inline JString Ikev2VpnProfile::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray Ikev2VpnProfile::getPresharedKey() const
	{
		return callObjectMethod(
			"getPresharedKey",
			"()[B"
		);
	}
	inline android::net::ProxyInfo Ikev2VpnProfile::getProxyInfo() const
	{
		return callObjectMethod(
			"getProxyInfo",
			"()Landroid/net/ProxyInfo;"
		);
	}
	inline JObject Ikev2VpnProfile::getRsaPrivateKey() const
	{
		return callObjectMethod(
			"getRsaPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	inline JString Ikev2VpnProfile::getServerAddr() const
	{
		return callObjectMethod(
			"getServerAddr",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::cert::X509Certificate Ikev2VpnProfile::getServerRootCaCert() const
	{
		return callObjectMethod(
			"getServerRootCaCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline java::security::cert::X509Certificate Ikev2VpnProfile::getUserCert() const
	{
		return callObjectMethod(
			"getUserCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JString Ikev2VpnProfile::getUserIdentity() const
	{
		return callObjectMethod(
			"getUserIdentity",
			"()Ljava/lang/String;"
		);
	}
	inline JString Ikev2VpnProfile::getUsername() const
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		);
	}
	inline jint Ikev2VpnProfile::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Ikev2VpnProfile::isBypassable() const
	{
		return callMethod<jboolean>(
			"isBypassable",
			"()Z"
		);
	}
	inline jboolean Ikev2VpnProfile::isMetered() const
	{
		return callMethod<jboolean>(
			"isMetered",
			"()Z"
		);
	}
} // namespace android::net

// Base class headers
#include "./PlatformVpnProfile.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif

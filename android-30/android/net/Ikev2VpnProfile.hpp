#pragma once

#include "./PlatformVpnProfile.hpp"

class JByteArray;
namespace android::net
{
	class ProxyInfo;
}
class JObject;
class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net
{
	class Ikev2VpnProfile : public android::net::PlatformVpnProfile
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Ikev2VpnProfile(const char *className, const char *sig, Ts...agv) : android::net::PlatformVpnProfile(className, sig, std::forward<Ts>(agv)...) {}
		Ikev2VpnProfile(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getAllowedAlgorithms() const;
		jint getMaxMtu() const;
		JString getPassword() const;
		JByteArray getPresharedKey() const;
		android::net::ProxyInfo getProxyInfo() const;
		JObject getRsaPrivateKey() const;
		JString getServerAddr() const;
		java::security::cert::X509Certificate getServerRootCaCert() const;
		java::security::cert::X509Certificate getUserCert() const;
		JString getUserIdentity() const;
		JString getUsername() const;
		jint hashCode() const;
		jboolean isBypassable() const;
		jboolean isMetered() const;
	};
} // namespace android::net


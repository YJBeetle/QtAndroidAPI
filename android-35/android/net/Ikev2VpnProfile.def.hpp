#pragma once

#include "./PlatformVpnProfile.def.hpp"

class JByteArray;
namespace android::net
{
	class ProxyInfo;
}
namespace android::net::ipsec::ike
{
	class IkeTunnelConnectionParams;
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
		Ikev2VpnProfile(QJniObject obj) : android::net::PlatformVpnProfile(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getAllowedAlgorithms() const;
		android::net::ipsec::ike::IkeTunnelConnectionParams getIkeTunnelConnectionParams() const;
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
		jboolean isAutomaticIpVersionSelectionEnabled() const;
		jboolean isAutomaticNattKeepaliveTimerEnabled() const;
		jboolean isBypassable() const;
		jboolean isMetered() const;
		JString toString() const;
	};
} // namespace android::net


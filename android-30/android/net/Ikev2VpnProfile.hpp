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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Ikev2VpnProfile(const char *className, const char *sig, Ts...agv) : android::net::PlatformVpnProfile(className, sig, std::forward<Ts>(agv)...) {}
		Ikev2VpnProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getAllowedAlgorithms();
		jint getMaxMtu();
		JString getPassword();
		JByteArray getPresharedKey();
		android::net::ProxyInfo getProxyInfo();
		JObject getRsaPrivateKey();
		JString getServerAddr();
		java::security::cert::X509Certificate getServerRootCaCert();
		java::security::cert::X509Certificate getUserCert();
		JString getUserIdentity();
		JString getUsername();
		jint hashCode();
		jboolean isBypassable();
		jboolean isMetered();
	};
} // namespace android::net


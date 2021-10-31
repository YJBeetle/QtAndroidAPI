#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PlatformVpnProfile.hpp"

namespace android::net
{
	class ProxyInfo;
}
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
		jboolean equals(jobject arg0);
		__JniBaseClass getAllowedAlgorithms();
		jint getMaxMtu();
		jstring getPassword();
		jbyteArray getPresharedKey();
		android::net::ProxyInfo getProxyInfo();
		__JniBaseClass getRsaPrivateKey();
		jstring getServerAddr();
		java::security::cert::X509Certificate getServerRootCaCert();
		java::security::cert::X509Certificate getUserCert();
		jstring getUserIdentity();
		jstring getUsername();
		jint hashCode();
		jboolean isBypassable();
		jboolean isMetered();
	};
} // namespace android::net


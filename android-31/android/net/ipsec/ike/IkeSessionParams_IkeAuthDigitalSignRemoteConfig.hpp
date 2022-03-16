#pragma once

#include "./IkeSessionParams_IkeAuthConfig.hpp"

class JObject;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthDigitalSignRemoteConfig : public android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthDigitalSignRemoteConfig(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthDigitalSignRemoteConfig(QAndroidJniObject obj) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::security::cert::X509Certificate getRemoteCaCert() const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike


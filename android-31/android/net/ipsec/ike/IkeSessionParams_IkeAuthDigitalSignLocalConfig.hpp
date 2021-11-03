#pragma once

#include "../../../../JObject.hpp"
#include "./IkeSessionParams_IkeAuthConfig.hpp"

namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthDigitalSignLocalConfig : public android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthDigitalSignLocalConfig(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthDigitalSignLocalConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		java::security::cert::X509Certificate getClientEndCertificate();
		JObject getIntermediateCertificates();
		JObject getPrivateKey();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike


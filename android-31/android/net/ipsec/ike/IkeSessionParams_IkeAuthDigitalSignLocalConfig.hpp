#pragma once

#include "../../../../__JniBaseClass.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthDigitalSignLocalConfig(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthDigitalSignLocalConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		java::security::cert::X509Certificate getClientEndCertificate();
		__JniBaseClass getIntermediateCertificates();
		__JniBaseClass getPrivateKey();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike


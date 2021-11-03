#pragma once

#include "../../JObject.hpp"

namespace java::security::cert
{
	class Certificate;
}

namespace java::security
{
	class KeyStore_TrustedCertificateEntry : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_TrustedCertificateEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_TrustedCertificateEntry(QJniObject obj);
		
		// Constructors
		KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0);
		KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0, JObject arg1);
		
		// Methods
		JObject getAttributes();
		java::security::cert::Certificate getTrustedCertificate();
		jstring toString();
	};
} // namespace java::security


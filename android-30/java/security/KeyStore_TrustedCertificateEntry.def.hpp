#pragma once

#include "../../JObject.hpp"

class JString;
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
		KeyStore_TrustedCertificateEntry(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0);
		KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0, JObject arg1);
		
		// Methods
		JObject getAttributes() const;
		java::security::cert::Certificate getTrustedCertificate() const;
		JString toString() const;
	};
} // namespace java::security


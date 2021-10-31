#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security::cert
{
	class Certificate;
}

namespace java::security
{
	class KeyStore_TrustedCertificateEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_TrustedCertificateEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_TrustedCertificateEntry(QJniObject obj);
		
		// Constructors
		KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0);
		KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0, __JniBaseClass arg1);
		
		// Methods
		__JniBaseClass getAttributes();
		java::security::cert::Certificate getTrustedCertificate();
		jstring toString();
	};
} // namespace java::security


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
		
		KeyStore_TrustedCertificateEntry(QAndroidJniObject obj);
		// Constructors
		KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0);
		KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0, __JniBaseClass arg1);
		KeyStore_TrustedCertificateEntry() = default;
		
		// Methods
		QAndroidJniObject getAttributes();
		QAndroidJniObject getTrustedCertificate();
		jstring toString();
	};
} // namespace java::security


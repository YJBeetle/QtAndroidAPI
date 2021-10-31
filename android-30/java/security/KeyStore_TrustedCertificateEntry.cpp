#include "./cert/Certificate.hpp"
#include "./KeyStore_TrustedCertificateEntry.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0)
		: __JniBaseClass(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		) {}
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	__JniBaseClass KeyStore_TrustedCertificateEntry::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	java::security::cert::Certificate KeyStore_TrustedCertificateEntry::getTrustedCertificate()
	{
		return callObjectMethod(
			"getTrustedCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	jstring KeyStore_TrustedCertificateEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security


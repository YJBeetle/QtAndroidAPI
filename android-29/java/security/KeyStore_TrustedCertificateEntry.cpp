#include "./cert/Certificate.hpp"
#include "./KeyStore_TrustedCertificateEntry.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0)
		: JObject(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		) {}
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0, JObject arg1)
		: JObject(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JObject KeyStore_TrustedCertificateEntry::getAttributes()
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


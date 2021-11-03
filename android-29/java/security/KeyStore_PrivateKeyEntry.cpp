#include "./cert/Certificate.hpp"
#include "./KeyStore_PrivateKeyEntry.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(JObject arg0, jarray arg1)
		: JObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;)V",
			arg0.object(),
			arg1
		) {}
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(JObject arg0, jarray arg1, JObject arg2)
		: JObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	JObject KeyStore_PrivateKeyEntry::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	java::security::cert::Certificate KeyStore_PrivateKeyEntry::getCertificate()
	{
		return callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	jarray KeyStore_PrivateKeyEntry::getCertificateChain()
	{
		return callObjectMethod(
			"getCertificateChain",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	JObject KeyStore_PrivateKeyEntry::getPrivateKey()
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	jstring KeyStore_PrivateKeyEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security


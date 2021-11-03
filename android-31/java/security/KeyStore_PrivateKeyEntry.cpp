#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./cert/Certificate.hpp"
#include "./KeyStore_PrivateKeyEntry.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(JObject arg0, JArray arg1)
		: JObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;)V",
			arg0.object(),
			arg1.object<jarray>()
		) {}
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(JObject arg0, JArray arg1, JObject arg2)
		: JObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object<jarray>(),
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
	JArray KeyStore_PrivateKeyEntry::getCertificateChain()
	{
		return callObjectMethod(
			"getCertificateChain",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JObject KeyStore_PrivateKeyEntry::getPrivateKey()
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	JString KeyStore_PrivateKeyEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security


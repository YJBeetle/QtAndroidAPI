#include "./KeyStore_SecretKeyEntry.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(JObject arg0)
		: JObject(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;)V",
			arg0.object()
		) {}
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(JObject arg0, JObject arg1)
		: JObject(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JObject KeyStore_SecretKeyEntry::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	JObject KeyStore_SecretKeyEntry::getSecretKey()
	{
		return callObjectMethod(
			"getSecretKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
	jstring KeyStore_SecretKeyEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security


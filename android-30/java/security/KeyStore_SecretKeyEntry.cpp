#include "../../JString.hpp"
#include "./KeyStore_SecretKeyEntry.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(QAndroidJniObject obj) : JObject(obj) {}
	
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
	JString KeyStore_SecretKeyEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security


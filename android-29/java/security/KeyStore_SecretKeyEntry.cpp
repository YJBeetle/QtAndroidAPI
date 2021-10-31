#include "./KeyStore_SecretKeyEntry.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;)V",
			arg0.object()
		) {}
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(__JniBaseClass arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject KeyStore_SecretKeyEntry::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject KeyStore_SecretKeyEntry::getSecretKey()
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


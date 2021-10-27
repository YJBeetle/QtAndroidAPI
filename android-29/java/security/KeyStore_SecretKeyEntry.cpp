#include "./KeyStore_SecretKeyEntry.hpp"

namespace java::security
{
	// Fields
	
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;)V",
			arg0.__jniObject().object()
		);
	}
	KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(__JniBaseClass &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$SecretKeyEntry",
			"(Ljavax/crypto/SecretKey;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStore_SecretKeyEntry::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject KeyStore_SecretKeyEntry::getSecretKey()
	{
		return __thiz.callObjectMethod(
			"getSecretKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
	jstring KeyStore_SecretKeyEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security


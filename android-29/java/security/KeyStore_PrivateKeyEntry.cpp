#include "./cert/Certificate.hpp"
#include "./KeyStore_PrivateKeyEntry.hpp"

namespace java::security
{
	// Fields
	
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(__JniBaseClass &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(__JniBaseClass &arg0, jarray &arg1, __JniBaseClass &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$PrivateKeyEntry",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStore_PrivateKeyEntry::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject KeyStore_PrivateKeyEntry::getCertificate()
	{
		return __thiz.callObjectMethod(
			"getCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	jarray KeyStore_PrivateKeyEntry::getCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getCertificateChain",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	QAndroidJniObject KeyStore_PrivateKeyEntry::getPrivateKey()
	{
		return __thiz.callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	jstring KeyStore_PrivateKeyEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security


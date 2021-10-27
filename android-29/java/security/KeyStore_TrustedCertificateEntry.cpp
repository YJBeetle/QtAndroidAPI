#include "./cert/Certificate.hpp"
#include "./KeyStore_TrustedCertificateEntry.hpp"

namespace java::security
{
	// Fields
	
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(java::security::cert::Certificate &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(java::security::cert::Certificate &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject KeyStore_TrustedCertificateEntry::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject KeyStore_TrustedCertificateEntry::getTrustedCertificate()
	{
		return __thiz.callObjectMethod(
			"getTrustedCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	jstring KeyStore_TrustedCertificateEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security


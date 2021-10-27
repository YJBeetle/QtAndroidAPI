#include "../../io/InputStream.hpp"
#include "./CRL.hpp"
#include "./CertPath.hpp"
#include "./Certificate.hpp"
#include "./CertificateFactorySpi.hpp"

namespace java::security::cert
{
	// Fields
	
	CertificateFactorySpi::CertificateFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateFactorySpi::CertificateFactorySpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateFactorySpi",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CertificateFactorySpi::engineGenerateCRL(java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCRL",
			"(Ljava/io/InputStream;)Ljava/security/cert/CRL;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCRLs(java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCRLs",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/util/List;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(java::io::InputStream arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(java::io::InputStream arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertificate(java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertificate",
			"(Ljava/io/InputStream;)Ljava/security/cert/Certificate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertificates(java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertificates",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGetCertPathEncodings()
	{
		return __thiz.callObjectMethod(
			"engineGetCertPathEncodings",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace java::security::cert


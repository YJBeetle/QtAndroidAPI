#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::security::cert
{
	class CRL;
}
namespace __jni_impl::java::security::cert
{
	class CertPath;
}
namespace __jni_impl::java::security::cert
{
	class Certificate;
}

namespace __jni_impl::java::security::cert
{
	class CertificateFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject engineGenerateCRL(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject engineGenerateCRLs(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject engineGenerateCertPath(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject engineGenerateCertPath(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject engineGenerateCertPath(__jni_impl::java::io::InputStream arg0, jstring arg1);
		QAndroidJniObject engineGenerateCertPath(__jni_impl::java::io::InputStream arg0, const QString &arg1);
		QAndroidJniObject engineGenerateCertificate(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject engineGenerateCertificates(__jni_impl::java::io::InputStream arg0);
		QAndroidJniObject engineGetCertPathEncodings();
	};
} // namespace __jni_impl::java::security::cert

#include "../../io/InputStream.hpp"
#include "./CRL.hpp"
#include "./CertPath.hpp"
#include "./Certificate.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertificateFactorySpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateFactorySpi",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CertificateFactorySpi::engineGenerateCRL(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCRL",
			"(Ljava/io/InputStream;)Ljava/security/cert/CRL;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCRLs(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCRLs",
			"(Ljava/io/InputStream;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/util/List;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(__jni_impl::java::io::InputStream arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertPath(__jni_impl::java::io::InputStream arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertPath",
			"(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertificate(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"engineGenerateCertificate",
			"(Ljava/io/InputStream;)Ljava/security/cert/Certificate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertificateFactorySpi::engineGenerateCertificates(__jni_impl::java::io::InputStream arg0)
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
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateFactorySpi : public __jni_impl::java::security::cert::CertificateFactorySpi
	{
	public:
		CertificateFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
		CertificateFactorySpi()
		{
			__constructor();
		}
	};
} // namespace java::security::cert


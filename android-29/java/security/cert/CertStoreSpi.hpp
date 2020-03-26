#pragma once

#ifndef JAVA_SECURITY_CERT_CERTSTORESPI
#define JAVA_SECURITY_CERT_CERTSTORESPI

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::cert
{
	class CertStoreSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject engineGetCertificates(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject engineGetCRLs(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertStoreSpi::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreSpi",
			"(Ljava/security/cert/CertStoreParameters;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject CertStoreSpi::engineGetCertificates(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertStoreSpi::engineGetCRLs(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"engineGetCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertStoreSpi : public __jni_impl::java::security::cert::CertStoreSpi
	{
	public:
		CertStoreSpi(QAndroidJniObject obj) { __thiz = obj; }
		CertStoreSpi(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTSTORESPI


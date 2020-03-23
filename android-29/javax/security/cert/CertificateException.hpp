#pragma once

#ifndef JAVAX_SECURITY_CERT_CERTIFICATEEXCEPTION
#define JAVAX_SECURITY_CERT_CERTIFICATEEXCEPTION

#include "../../../java/lang/Exception.hpp"


namespace __jni_impl::javax::security::cert
{
	class CertificateException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::security::cert


namespace __jni_impl::javax::security::cert
{
	// Fields
	
	// Constructors
	void CertificateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateException",
			"()V");
	}
	void CertificateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::security::cert

namespace javax::security::cert
{
	class CertificateException : public __jni_impl::javax::security::cert::CertificateException
	{
	public:
		CertificateException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateException()
		{
			__constructor();
		}
		CertificateException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::security::cert

#endif // JAVAX_SECURITY_CERT_CERTIFICATEEXCEPTION


#pragma once

#ifndef JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION
#define JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION

#include "CertificateException.hpp"


namespace __jni_impl::javax::security::cert
{
	class CertificateEncodingException : public __jni_impl::javax::security::cert::CertificateException
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
	void CertificateEncodingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateEncodingException",
			"()V");
	}
	void CertificateEncodingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::security::cert

namespace javax::security::cert
{
	class CertificateEncodingException : public __jni_impl::javax::security::cert::CertificateEncodingException
	{
	public:
		CertificateEncodingException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateEncodingException()
		{
			__constructor();
		}
		CertificateEncodingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::security::cert

#endif // JAVAX_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION


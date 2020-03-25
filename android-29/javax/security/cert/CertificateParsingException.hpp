#pragma once

#ifndef JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION
#define JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "CertificateException.hpp"


namespace __jni_impl::javax::security::cert
{
	class CertificateParsingException : public __jni_impl::javax::security::cert::CertificateException
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
	void CertificateParsingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateParsingException",
			"()V");
	}
	void CertificateParsingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::security::cert

namespace javax::security::cert
{
	class CertificateParsingException : public __jni_impl::javax::security::cert::CertificateParsingException
	{
	public:
		CertificateParsingException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateParsingException()
		{
			__constructor();
		}
		CertificateParsingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::security::cert

#endif // JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION


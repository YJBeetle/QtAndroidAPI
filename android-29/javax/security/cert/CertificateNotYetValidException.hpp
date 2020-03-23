#pragma once

#ifndef JAVAX_SECURITY_CERT_CERTIFICATENOTYETVALIDEXCEPTION
#define JAVAX_SECURITY_CERT_CERTIFICATENOTYETVALIDEXCEPTION

#include "CertificateException.hpp"


namespace __jni_impl::javax::security::cert
{
	class CertificateNotYetValidException : public __jni_impl::javax::security::cert::CertificateException
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
	void CertificateNotYetValidException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateNotYetValidException",
			"()V");
	}
	void CertificateNotYetValidException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::security::cert

namespace javax::security::cert
{
	class CertificateNotYetValidException : public __jni_impl::javax::security::cert::CertificateNotYetValidException
	{
	public:
		CertificateNotYetValidException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateNotYetValidException()
		{
			__constructor();
		}
		CertificateNotYetValidException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::security::cert

#endif // JAVAX_SECURITY_CERT_CERTIFICATENOTYETVALIDEXCEPTION


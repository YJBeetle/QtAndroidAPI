#pragma once

#ifndef JAVA_SECURITY_CERT_CERTIFICATENOTYETVALIDEXCEPTION
#define JAVA_SECURITY_CERT_CERTIFICATENOTYETVALIDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "CertificateException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertificateNotYetValidException : public __jni_impl::java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertificateNotYetValidException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateNotYetValidException",
			"()V");
	}
	void CertificateNotYetValidException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateNotYetValidException : public __jni_impl::java::security::cert::CertificateNotYetValidException
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
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTIFICATENOTYETVALIDEXCEPTION


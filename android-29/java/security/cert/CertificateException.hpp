#pragma once

#ifndef JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION
#define JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION

#include "../GeneralSecurityException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertificateException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertificateException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void CertificateException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void CertificateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void CertificateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateException : public __jni_impl::java::security::cert::CertificateException
	{
	public:
		CertificateException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CertificateException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CertificateException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertificateException()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION


#pragma once

#ifndef JAVA_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION
#define JAVA_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION

#include "CertificateException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertificateParsingException : public __jni_impl::java::security::cert::CertificateException
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
	void CertificateParsingException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void CertificateParsingException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void CertificateParsingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void CertificateParsingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateParsingException : public __jni_impl::java::security::cert::CertificateParsingException
	{
	public:
		CertificateParsingException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateParsingException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CertificateParsingException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CertificateParsingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertificateParsingException()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION


#pragma once

#ifndef JAVA_SECURITY_CERT_CERTPATHBUILDEREXCEPTION
#define JAVA_SECURITY_CERT_CERTPATHBUILDEREXCEPTION

#include "../GeneralSecurityException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertPathBuilderException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertPathBuilderException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void CertPathBuilderException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void CertPathBuilderException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void CertPathBuilderException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilderException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPathBuilderException : public __jni_impl::java::security::cert::CertPathBuilderException
	{
	public:
		CertPathBuilderException(QAndroidJniObject obj) { __thiz = obj; }
		CertPathBuilderException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CertPathBuilderException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CertPathBuilderException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertPathBuilderException()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTPATHBUILDEREXCEPTION


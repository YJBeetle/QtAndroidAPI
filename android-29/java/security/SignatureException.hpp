#pragma once

#ifndef JAVA_SECURITY_SIGNATUREEXCEPTION
#define JAVA_SECURITY_SIGNATUREEXCEPTION

#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class SignatureException : public __jni_impl::java::security::GeneralSecurityException
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
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void SignatureException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void SignatureException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void SignatureException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SignatureException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class SignatureException : public __jni_impl::java::security::SignatureException
	{
	public:
		SignatureException(QAndroidJniObject obj) { __thiz = obj; }
		SignatureException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SignatureException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SignatureException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SignatureException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SIGNATUREEXCEPTION


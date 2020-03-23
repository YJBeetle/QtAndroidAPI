#pragma once

#ifndef JAVA_SECURITY_GENERALSECURITYEXCEPTION
#define JAVA_SECURITY_GENERALSECURITYEXCEPTION

#include "../lang/Exception.hpp"


namespace __jni_impl::java::security
{
	class GeneralSecurityException : public __jni_impl::java::lang::Exception
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
	void GeneralSecurityException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void GeneralSecurityException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void GeneralSecurityException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void GeneralSecurityException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class GeneralSecurityException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		GeneralSecurityException(QAndroidJniObject obj) { __thiz = obj; }
		GeneralSecurityException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		GeneralSecurityException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GeneralSecurityException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		GeneralSecurityException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_GENERALSECURITYEXCEPTION


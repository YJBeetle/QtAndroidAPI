#pragma once

#ifndef JAVA_SECURITY_PROVIDEREXCEPTION
#define JAVA_SECURITY_PROVIDEREXCEPTION

#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::security
{
	class ProviderException : public __jni_impl::java::lang::RuntimeException
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
	void ProviderException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void ProviderException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void ProviderException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ProviderException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class ProviderException : public __jni_impl::java::security::ProviderException
	{
	public:
		ProviderException(QAndroidJniObject obj) { __thiz = obj; }
		ProviderException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		ProviderException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ProviderException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ProviderException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_PROVIDEREXCEPTION


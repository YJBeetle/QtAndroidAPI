#pragma once

#ifndef JAVA_SECURITY_INVALIDKEYEXCEPTION
#define JAVA_SECURITY_INVALIDKEYEXCEPTION

#include "KeyException.hpp"


namespace __jni_impl::java::security
{
	class InvalidKeyException : public __jni_impl::java::security::KeyException
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
	void InvalidKeyException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void InvalidKeyException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void InvalidKeyException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void InvalidKeyException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class InvalidKeyException : public __jni_impl::java::security::InvalidKeyException
	{
	public:
		InvalidKeyException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidKeyException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InvalidKeyException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InvalidKeyException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InvalidKeyException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_INVALIDKEYEXCEPTION


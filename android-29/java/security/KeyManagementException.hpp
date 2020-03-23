#pragma once

#ifndef JAVA_SECURITY_KEYMANAGEMENTEXCEPTION
#define JAVA_SECURITY_KEYMANAGEMENTEXCEPTION

#include "KeyException.hpp"


namespace __jni_impl::java::security
{
	class KeyManagementException : public __jni_impl::java::security::KeyException
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
	void KeyManagementException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyManagementException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void KeyManagementException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void KeyManagementException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyManagementException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void KeyManagementException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyManagementException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyManagementException : public __jni_impl::java::security::KeyManagementException
	{
	public:
		KeyManagementException(QAndroidJniObject obj) { __thiz = obj; }
		KeyManagementException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		KeyManagementException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		KeyManagementException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		KeyManagementException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYMANAGEMENTEXCEPTION


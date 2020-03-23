#pragma once

#ifndef JAVA_SECURITY_KEYSTOREEXCEPTION
#define JAVA_SECURITY_KEYSTOREEXCEPTION

#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class KeyStoreException : public __jni_impl::java::security::GeneralSecurityException
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
	void KeyStoreException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void KeyStoreException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void KeyStoreException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void KeyStoreException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStoreException : public __jni_impl::java::security::KeyStoreException
	{
	public:
		KeyStoreException(QAndroidJniObject obj) { __thiz = obj; }
		KeyStoreException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		KeyStoreException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		KeyStoreException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		KeyStoreException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYSTOREEXCEPTION


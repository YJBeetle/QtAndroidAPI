#pragma once

#ifndef JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION
#define JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION

#include "../GeneralSecurityException.hpp"


namespace __jni_impl::java::security::spec
{
	class InvalidKeySpecException : public __jni_impl::java::security::GeneralSecurityException
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
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void InvalidKeySpecException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void InvalidKeySpecException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void InvalidKeySpecException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void InvalidKeySpecException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class InvalidKeySpecException : public __jni_impl::java::security::spec::InvalidKeySpecException
	{
	public:
		InvalidKeySpecException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidKeySpecException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InvalidKeySpecException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InvalidKeySpecException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InvalidKeySpecException()
		{
			__constructor();
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION


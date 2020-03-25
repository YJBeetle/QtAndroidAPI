#pragma once

#ifndef JAVA_SECURITY_INVALIDALGORITHMPARAMETEREXCEPTION
#define JAVA_SECURITY_INVALIDALGORITHMPARAMETEREXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class InvalidAlgorithmParameterException : public __jni_impl::java::security::GeneralSecurityException
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
	void InvalidAlgorithmParameterException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void InvalidAlgorithmParameterException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void InvalidAlgorithmParameterException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void InvalidAlgorithmParameterException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class InvalidAlgorithmParameterException : public __jni_impl::java::security::InvalidAlgorithmParameterException
	{
	public:
		InvalidAlgorithmParameterException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidAlgorithmParameterException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InvalidAlgorithmParameterException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InvalidAlgorithmParameterException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InvalidAlgorithmParameterException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_INVALIDALGORITHMPARAMETEREXCEPTION


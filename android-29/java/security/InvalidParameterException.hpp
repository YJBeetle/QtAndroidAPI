#pragma once

#ifndef JAVA_SECURITY_INVALIDPARAMETEREXCEPTION
#define JAVA_SECURITY_INVALIDPARAMETEREXCEPTION

#include "../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::security
{
	class InvalidParameterException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void InvalidParameterException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidParameterException",
			"()V");
	}
	void InvalidParameterException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidParameterException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class InvalidParameterException : public __jni_impl::java::security::InvalidParameterException
	{
	public:
		InvalidParameterException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidParameterException()
		{
			__constructor();
		}
		InvalidParameterException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_INVALIDPARAMETEREXCEPTION


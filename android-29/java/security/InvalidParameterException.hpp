#pragma once

#ifndef JAVA_SECURITY_INVALIDPARAMETEREXCEPTION
#define JAVA_SECURITY_INVALIDPARAMETEREXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
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
		void __constructor(const QString &arg0);
		
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
			"()V"
		);
	}
	void InvalidParameterException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidParameterException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InvalidParameterException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidParameterException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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


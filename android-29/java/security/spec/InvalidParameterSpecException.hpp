#pragma once

#ifndef JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION
#define JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION

#include "../GeneralSecurityException.hpp"


namespace __jni_impl::java::security::spec
{
	class InvalidParameterSpecException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void InvalidParameterSpecException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidParameterSpecException",
			"()V");
	}
	void InvalidParameterSpecException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidParameterSpecException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class InvalidParameterSpecException : public __jni_impl::java::security::spec::InvalidParameterSpecException
	{
	public:
		InvalidParameterSpecException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidParameterSpecException()
		{
			__constructor();
		}
		InvalidParameterSpecException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION


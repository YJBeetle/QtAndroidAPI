#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class InvalidAlgorithmParameterException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void InvalidAlgorithmParameterException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"()V"
		);
	}
	void InvalidAlgorithmParameterException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InvalidAlgorithmParameterException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InvalidAlgorithmParameterException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void InvalidAlgorithmParameterException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void InvalidAlgorithmParameterException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class InvalidAlgorithmParameterException : public __jni_impl::java::security::InvalidAlgorithmParameterException
	{
	public:
		InvalidAlgorithmParameterException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidAlgorithmParameterException()
		{
			__constructor();
		}
		InvalidAlgorithmParameterException(jstring arg0)
		{
			__constructor(
				arg0);
		}
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
	};
} // namespace java::security


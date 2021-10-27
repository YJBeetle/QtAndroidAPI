#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class SignatureException : public __jni_impl::java::security::GeneralSecurityException
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
	void SignatureException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"()V"
		);
	}
	void SignatureException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SignatureException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SignatureException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void SignatureException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void SignatureException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.SignatureException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class SignatureException : public __jni_impl::java::security::SignatureException
	{
	public:
		SignatureException(QAndroidJniObject obj) { __thiz = obj; }
		SignatureException()
		{
			__constructor();
		}
		SignatureException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SignatureException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		SignatureException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security


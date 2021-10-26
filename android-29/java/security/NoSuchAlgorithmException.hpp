#pragma once

#ifndef JAVA_SECURITY_NOSUCHALGORITHMEXCEPTION
#define JAVA_SECURITY_NOSUCHALGORITHMEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class NoSuchAlgorithmException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void NoSuchAlgorithmException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void NoSuchAlgorithmException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void NoSuchAlgorithmException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void NoSuchAlgorithmException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NoSuchAlgorithmException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void NoSuchAlgorithmException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchAlgorithmException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class NoSuchAlgorithmException : public __jni_impl::java::security::NoSuchAlgorithmException
	{
	public:
		NoSuchAlgorithmException(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchAlgorithmException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		NoSuchAlgorithmException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		NoSuchAlgorithmException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		NoSuchAlgorithmException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_NOSUCHALGORITHMEXCEPTION


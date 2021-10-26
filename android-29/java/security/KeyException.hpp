#pragma once

#ifndef JAVA_SECURITY_KEYEXCEPTION
#define JAVA_SECURITY_KEYEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class KeyException : public __jni_impl::java::security::GeneralSecurityException
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
	void KeyException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void KeyException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void KeyException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void KeyException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void KeyException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyException : public __jni_impl::java::security::KeyException
	{
	public:
		KeyException(QAndroidJniObject obj) { __thiz = obj; }
		KeyException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		KeyException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		KeyException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		KeyException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYEXCEPTION


#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./KeyException.hpp"


namespace __jni_impl::java::security
{
	class InvalidKeyException : public __jni_impl::java::security::KeyException
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
	void InvalidKeyException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"()V"
		);
	}
	void InvalidKeyException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InvalidKeyException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InvalidKeyException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void InvalidKeyException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void InvalidKeyException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidKeyException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class InvalidKeyException : public __jni_impl::java::security::InvalidKeyException
	{
	public:
		InvalidKeyException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidKeyException()
		{
			__constructor();
		}
		InvalidKeyException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InvalidKeyException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InvalidKeyException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security


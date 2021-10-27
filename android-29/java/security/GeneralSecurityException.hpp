#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace __jni_impl::java::security
{
	class GeneralSecurityException : public __jni_impl::java::lang::Exception
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
	void GeneralSecurityException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"()V"
		);
	}
	void GeneralSecurityException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void GeneralSecurityException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void GeneralSecurityException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void GeneralSecurityException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void GeneralSecurityException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.GeneralSecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class GeneralSecurityException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		GeneralSecurityException(QAndroidJniObject obj) { __thiz = obj; }
		GeneralSecurityException()
		{
			__constructor();
		}
		GeneralSecurityException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		GeneralSecurityException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		GeneralSecurityException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security


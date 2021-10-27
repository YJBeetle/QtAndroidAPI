#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class DigestException : public __jni_impl::java::security::GeneralSecurityException
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
	void DigestException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"()V"
		);
	}
	void DigestException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DigestException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DigestException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void DigestException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void DigestException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class DigestException : public __jni_impl::java::security::DigestException
	{
	public:
		DigestException(QAndroidJniObject obj) { __thiz = obj; }
		DigestException()
		{
			__constructor();
		}
		DigestException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		DigestException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		DigestException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security


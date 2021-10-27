#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace __jni_impl::java::security::spec
{
	class InvalidKeySpecException : public __jni_impl::java::security::GeneralSecurityException
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
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void InvalidKeySpecException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"()V"
		);
	}
	void InvalidKeySpecException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InvalidKeySpecException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InvalidKeySpecException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void InvalidKeySpecException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void InvalidKeySpecException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidKeySpecException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class InvalidKeySpecException : public __jni_impl::java::security::spec::InvalidKeySpecException
	{
	public:
		InvalidKeySpecException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidKeySpecException()
		{
			__constructor();
		}
		InvalidKeySpecException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InvalidKeySpecException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		InvalidKeySpecException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::spec


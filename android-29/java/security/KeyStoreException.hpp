#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class KeyStoreException : public __jni_impl::java::security::GeneralSecurityException
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
	void KeyStoreException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"()V"
		);
	}
	void KeyStoreException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void KeyStoreException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyStoreException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void KeyStoreException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void KeyStoreException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyStoreException : public __jni_impl::java::security::KeyStoreException
	{
	public:
		KeyStoreException(QAndroidJniObject obj) { __thiz = obj; }
		KeyStoreException()
		{
			__constructor();
		}
		KeyStoreException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		KeyStoreException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		KeyStoreException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security


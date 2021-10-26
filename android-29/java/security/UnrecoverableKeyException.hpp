#pragma once

#ifndef JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION
#define JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "GeneralSecurityException.hpp"
#include "UnrecoverableEntryException.hpp"


namespace __jni_impl::java::security
{
	class UnrecoverableKeyException : public __jni_impl::java::security::UnrecoverableEntryException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void UnrecoverableKeyException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableKeyException",
			"()V"
		);
	}
	void UnrecoverableKeyException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableKeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UnrecoverableKeyException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableKeyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class UnrecoverableKeyException : public __jni_impl::java::security::UnrecoverableKeyException
	{
	public:
		UnrecoverableKeyException(QAndroidJniObject obj) { __thiz = obj; }
		UnrecoverableKeyException()
		{
			__constructor();
		}
		UnrecoverableKeyException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_UNRECOVERABLEKEYEXCEPTION


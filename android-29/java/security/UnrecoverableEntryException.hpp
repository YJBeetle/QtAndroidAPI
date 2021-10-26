#pragma once

#ifndef JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION
#define JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class UnrecoverableEntryException : public __jni_impl::java::security::GeneralSecurityException
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
	void UnrecoverableEntryException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableEntryException",
			"()V"
		);
	}
	void UnrecoverableEntryException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableEntryException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UnrecoverableEntryException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableEntryException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class UnrecoverableEntryException : public __jni_impl::java::security::UnrecoverableEntryException
	{
	public:
		UnrecoverableEntryException(QAndroidJniObject obj) { __thiz = obj; }
		UnrecoverableEntryException()
		{
			__constructor();
		}
		UnrecoverableEntryException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION


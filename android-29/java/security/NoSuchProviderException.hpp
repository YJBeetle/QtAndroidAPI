#pragma once

#ifndef JAVA_SECURITY_NOSUCHPROVIDEREXCEPTION
#define JAVA_SECURITY_NOSUCHPROVIDEREXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class NoSuchProviderException : public __jni_impl::java::security::GeneralSecurityException
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
	void NoSuchProviderException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchProviderException",
			"()V"
		);
	}
	void NoSuchProviderException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchProviderException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NoSuchProviderException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.NoSuchProviderException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class NoSuchProviderException : public __jni_impl::java::security::NoSuchProviderException
	{
	public:
		NoSuchProviderException(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchProviderException()
		{
			__constructor();
		}
		NoSuchProviderException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_NOSUCHPROVIDEREXCEPTION


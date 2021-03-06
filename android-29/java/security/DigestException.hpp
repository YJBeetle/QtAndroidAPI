#pragma once

#ifndef JAVA_SECURITY_DIGESTEXCEPTION
#define JAVA_SECURITY_DIGESTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "GeneralSecurityException.hpp"


namespace __jni_impl::java::security
{
	class DigestException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void DigestException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void DigestException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void DigestException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void DigestException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.DigestException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class DigestException : public __jni_impl::java::security::DigestException
	{
	public:
		DigestException(QAndroidJniObject obj) { __thiz = obj; }
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
		DigestException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		DigestException()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_DIGESTEXCEPTION


#pragma once

#ifndef JAVA_SECURITY_CERT_CRLEXCEPTION
#define JAVA_SECURITY_CERT_CRLEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace __jni_impl::java::security::cert
{
	class CRLException : public __jni_impl::java::security::GeneralSecurityException
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
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CRLException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"()V"
		);
	}
	void CRLException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CRLException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CRLException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void CRLException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void CRLException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CRLException : public __jni_impl::java::security::cert::CRLException
	{
	public:
		CRLException(QAndroidJniObject obj) { __thiz = obj; }
		CRLException()
		{
			__constructor();
		}
		CRLException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CRLException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CRLException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CRLEXCEPTION


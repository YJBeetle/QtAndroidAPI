#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertificateException : public __jni_impl::java::security::GeneralSecurityException
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
	void CertificateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"()V"
		);
	}
	void CertificateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CertificateException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CertificateException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void CertificateException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void CertificateException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateException : public __jni_impl::java::security::cert::CertificateException
	{
	public:
		CertificateException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateException()
		{
			__constructor();
		}
		CertificateException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertificateException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CertificateException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::cert


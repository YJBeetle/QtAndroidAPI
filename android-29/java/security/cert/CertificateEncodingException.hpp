#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertificateEncodingException : public __jni_impl::java::security::cert::CertificateException
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
	void CertificateEncodingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"()V"
		);
	}
	void CertificateEncodingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CertificateEncodingException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CertificateEncodingException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void CertificateEncodingException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void CertificateEncodingException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateEncodingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateEncodingException : public __jni_impl::java::security::cert::CertificateEncodingException
	{
	public:
		CertificateEncodingException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateEncodingException()
		{
			__constructor();
		}
		CertificateEncodingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertificateEncodingException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CertificateEncodingException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::cert


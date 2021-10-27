#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "CertificateException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertificateParsingException : public __jni_impl::java::security::cert::CertificateException
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
	void CertificateParsingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"()V"
		);
	}
	void CertificateParsingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CertificateParsingException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CertificateParsingException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void CertificateParsingException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void CertificateParsingException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateParsingException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateParsingException : public __jni_impl::java::security::cert::CertificateParsingException
	{
	public:
		CertificateParsingException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateParsingException()
		{
			__constructor();
		}
		CertificateParsingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertificateParsingException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CertificateParsingException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::cert


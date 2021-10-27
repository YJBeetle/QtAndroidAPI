#pragma once

#ifndef JAVA_SECURITY_CERT_CERTSTOREEXCEPTION
#define JAVA_SECURITY_CERT_CERTSTOREEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertStoreException : public __jni_impl::java::security::GeneralSecurityException
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
	void CertStoreException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"()V"
		);
	}
	void CertStoreException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CertStoreException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CertStoreException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void CertStoreException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void CertStoreException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertStoreException : public __jni_impl::java::security::cert::CertStoreException
	{
	public:
		CertStoreException(QAndroidJniObject obj) { __thiz = obj; }
		CertStoreException()
		{
			__constructor();
		}
		CertStoreException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertStoreException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		CertStoreException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTSTOREEXCEPTION


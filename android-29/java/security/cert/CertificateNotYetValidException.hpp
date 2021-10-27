#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "CertificateException.hpp"


namespace __jni_impl::java::security::cert
{
	class CertificateNotYetValidException : public __jni_impl::java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertificateNotYetValidException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateNotYetValidException",
			"()V"
		);
	}
	void CertificateNotYetValidException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CertificateNotYetValidException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateNotYetValidException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertificateNotYetValidException : public __jni_impl::java::security::cert::CertificateNotYetValidException
	{
	public:
		CertificateNotYetValidException(QAndroidJniObject obj) { __thiz = obj; }
		CertificateNotYetValidException()
		{
			__constructor();
		}
		CertificateNotYetValidException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::cert


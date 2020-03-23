#pragma once

#ifndef JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION
#define JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION

#include "../GeneralSecurityException.hpp"

namespace __jni_impl::java::security::cert
{
	class CertPath;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::security::cert
{
	class CertPathValidatorException : public __jni_impl::java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jthrowable arg1, __jni_impl::java::security::cert::CertPath arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		void __constructor(jstring arg0, jthrowable arg1, __jni_impl::java::security::cert::CertPath arg2, jint arg3);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(jthrowable arg0);
		
		// Methods
		jint getIndex();
		QAndroidJniObject getCertPath();
		QAndroidJniObject getReason();
	};
} // namespace __jni_impl::java::security::cert

#include "CertPath.hpp"
#include "../../io/ObjectInputStream.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertPathValidatorException::__constructor(jstring arg0, jthrowable arg1, __jni_impl::java::security::cert::CertPath arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;ILjava/security/cert/CertPathValidatorException$Reason;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void CertPathValidatorException::__constructor(jstring arg0, jthrowable arg1, __jni_impl::java::security::cert::CertPath arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void CertPathValidatorException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void CertPathValidatorException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"()V");
	}
	void CertPathValidatorException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void CertPathValidatorException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	
	// Methods
	jint CertPathValidatorException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	QAndroidJniObject CertPathValidatorException::getCertPath()
	{
		return __thiz.callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;");
	}
	QAndroidJniObject CertPathValidatorException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/security/cert/CertPathValidatorException$Reason;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPathValidatorException : public __jni_impl::java::security::cert::CertPathValidatorException
	{
	public:
		CertPathValidatorException(QAndroidJniObject obj) { __thiz = obj; }
		CertPathValidatorException(jstring arg0, jthrowable arg1, __jni_impl::java::security::cert::CertPath arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		CertPathValidatorException(jstring arg0, jthrowable arg1, __jni_impl::java::security::cert::CertPath arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		CertPathValidatorException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CertPathValidatorException()
		{
			__constructor();
		}
		CertPathValidatorException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CertPathValidatorException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION


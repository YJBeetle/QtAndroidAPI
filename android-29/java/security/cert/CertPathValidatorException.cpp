#include "../../io/ObjectInputStream.hpp"
#include "./CertPath.hpp"
#include "./CertPathValidatorException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertPathValidatorException::CertPathValidatorException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertPathValidatorException::CertPathValidatorException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"()V"
		);
	}
	CertPathValidatorException::CertPathValidatorException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CertPathValidatorException::CertPathValidatorException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	CertPathValidatorException::CertPathValidatorException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	CertPathValidatorException::CertPathValidatorException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	CertPathValidatorException::CertPathValidatorException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	CertPathValidatorException::CertPathValidatorException(jstring &arg0, jthrowable &arg1, java::security::cert::CertPath &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	CertPathValidatorException::CertPathValidatorException(const QString &arg0, jthrowable &arg1, java::security::cert::CertPath &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	CertPathValidatorException::CertPathValidatorException(jstring &arg0, jthrowable &arg1, java::security::cert::CertPath &arg2, jint &arg3, __JniBaseClass &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;ILjava/security/cert/CertPathValidatorException$Reason;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	CertPathValidatorException::CertPathValidatorException(const QString &arg0, jthrowable &arg1, java::security::cert::CertPath &arg2, jint &arg3, __JniBaseClass &arg4)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;ILjava/security/cert/CertPathValidatorException$Reason;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CertPathValidatorException::getCertPath()
	{
		return __thiz.callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	jint CertPathValidatorException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	QAndroidJniObject CertPathValidatorException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/security/cert/CertPathValidatorException$Reason;"
		);
	}
} // namespace java::security::cert


#include "../../io/ObjectInputStream.hpp"
#include "./CertPath.hpp"
#include "./CertPathValidatorException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertPathValidatorException::CertPathValidatorException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	CertPathValidatorException::CertPathValidatorException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"()V"
		) {}
	CertPathValidatorException::CertPathValidatorException(jstring arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CertPathValidatorException::CertPathValidatorException(jthrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	CertPathValidatorException::CertPathValidatorException(jstring arg0, jthrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	CertPathValidatorException::CertPathValidatorException(jstring arg0, jthrowable arg1, java::security::cert::CertPath arg2, jint arg3)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		) {}
	CertPathValidatorException::CertPathValidatorException(jstring arg0, jthrowable arg1, java::security::cert::CertPath arg2, jint arg3, __JniBaseClass arg4)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;ILjava/security/cert/CertPathValidatorException$Reason;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		) {}
	
	// Methods
	QAndroidJniObject CertPathValidatorException::getCertPath()
	{
		return callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	jint CertPathValidatorException::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	QAndroidJniObject CertPathValidatorException::getReason()
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/security/cert/CertPathValidatorException$Reason;"
		);
	}
} // namespace java::security::cert


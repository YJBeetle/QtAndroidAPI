#include "../../io/ObjectInputStream.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertPath.hpp"
#include "./CertPathValidatorException.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	CertPathValidatorException::CertPathValidatorException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"()V"
		) {}
	CertPathValidatorException::CertPathValidatorException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CertPathValidatorException::CertPathValidatorException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	CertPathValidatorException::CertPathValidatorException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	CertPathValidatorException::CertPathValidatorException(JString arg0, JThrowable arg1, java::security::cert::CertPath arg2, jint arg3)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>(),
			arg2.object(),
			arg3
		) {}
	CertPathValidatorException::CertPathValidatorException(JString arg0, JThrowable arg1, java::security::cert::CertPath arg2, jint arg3, JObject arg4)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;ILjava/security/cert/CertPathValidatorException$Reason;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>(),
			arg2.object(),
			arg3,
			arg4.object()
		) {}
	
	// Methods
	java::security::cert::CertPath CertPathValidatorException::getCertPath() const
	{
		return callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	jint CertPathValidatorException::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JObject CertPathValidatorException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/security/cert/CertPathValidatorException$Reason;"
		);
	}
} // namespace java::security::cert


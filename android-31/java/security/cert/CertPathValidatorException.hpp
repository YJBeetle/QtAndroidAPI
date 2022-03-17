#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CertPath.def.hpp"
#include "./CertPathValidatorException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertPathValidatorException::CertPathValidatorException()
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"()V"
		) {}
	inline CertPathValidatorException::CertPathValidatorException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CertPathValidatorException::CertPathValidatorException(JThrowable arg0)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline CertPathValidatorException::CertPathValidatorException(JString arg0, JThrowable arg1)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline CertPathValidatorException::CertPathValidatorException(JString arg0, JThrowable arg1, java::security::cert::CertPath arg2, jint arg3)
		: java::security::GeneralSecurityException(
			"java.security.cert.CertPathValidatorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>(),
			arg2.object(),
			arg3
		) {}
	inline CertPathValidatorException::CertPathValidatorException(JString arg0, JThrowable arg1, java::security::cert::CertPath arg2, jint arg3, JObject arg4)
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
	inline java::security::cert::CertPath CertPathValidatorException::getCertPath() const
	{
		return callObjectMethod(
			"getCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	inline jint CertPathValidatorException::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline JObject CertPathValidatorException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/security/cert/CertPathValidatorException$Reason;"
		);
	}
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif

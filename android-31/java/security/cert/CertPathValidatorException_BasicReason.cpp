#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./CertPathValidatorException_BasicReason.hpp"

namespace java::security::cert
{
	// Fields
	java::security::cert::CertPathValidatorException_BasicReason CertPathValidatorException_BasicReason::ALGORITHM_CONSTRAINED()
	{
		return getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"ALGORITHM_CONSTRAINED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	java::security::cert::CertPathValidatorException_BasicReason CertPathValidatorException_BasicReason::EXPIRED()
	{
		return getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"EXPIRED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	java::security::cert::CertPathValidatorException_BasicReason CertPathValidatorException_BasicReason::INVALID_SIGNATURE()
	{
		return getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"INVALID_SIGNATURE",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	java::security::cert::CertPathValidatorException_BasicReason CertPathValidatorException_BasicReason::NOT_YET_VALID()
	{
		return getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"NOT_YET_VALID",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	java::security::cert::CertPathValidatorException_BasicReason CertPathValidatorException_BasicReason::REVOKED()
	{
		return getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"REVOKED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	java::security::cert::CertPathValidatorException_BasicReason CertPathValidatorException_BasicReason::UNDETERMINED_REVOCATION_STATUS()
	{
		return getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"UNDETERMINED_REVOCATION_STATUS",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	java::security::cert::CertPathValidatorException_BasicReason CertPathValidatorException_BasicReason::UNSPECIFIED()
	{
		return getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"UNSPECIFIED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	
	// QJniObject forward
	CertPathValidatorException_BasicReason::CertPathValidatorException_BasicReason(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::security::cert::CertPathValidatorException_BasicReason CertPathValidatorException_BasicReason::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathValidatorException$BasicReason;",
			arg0.object<jstring>()
		);
	}
	JArray CertPathValidatorException_BasicReason::values()
	{
		return callStaticObjectMethod(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"values",
			"()[Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
} // namespace java::security::cert


#include "./CertPathValidatorException_BasicReason.hpp"

namespace java::security::cert
{
	// Fields
	QAndroidJniObject CertPathValidatorException_BasicReason::ALGORITHM_CONSTRAINED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"ALGORITHM_CONSTRAINED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::EXPIRED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"EXPIRED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::INVALID_SIGNATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"INVALID_SIGNATURE",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::NOT_YET_VALID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"NOT_YET_VALID",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::REVOKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"REVOKED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::UNDETERMINED_REVOCATION_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"UNDETERMINED_REVOCATION_STATUS",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"UNSPECIFIED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	
	CertPathValidatorException_BasicReason::CertPathValidatorException_BasicReason(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CertPathValidatorException_BasicReason::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathValidatorException$BasicReason;",
			arg0
		);
	}
	jarray CertPathValidatorException_BasicReason::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"values",
			"()[Ljava/security/cert/CertPathValidatorException$BasicReason;"
		).object<jarray>();
	}
} // namespace java::security::cert


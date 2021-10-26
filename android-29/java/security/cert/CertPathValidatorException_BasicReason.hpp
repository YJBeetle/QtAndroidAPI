#pragma once

#ifndef JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_BASICREASON
#define JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_BASICREASON

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::security::cert
{
	class CertPathValidatorException_BasicReason : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject UNSPECIFIED();
		static QAndroidJniObject EXPIRED();
		static QAndroidJniObject NOT_YET_VALID();
		static QAndroidJniObject REVOKED();
		static QAndroidJniObject UNDETERMINED_REVOCATION_STATUS();
		static QAndroidJniObject INVALID_SIGNATURE();
		static QAndroidJniObject ALGORITHM_CONSTRAINED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::java::security::cert


namespace __jni_impl::java::security::cert
{
	// Fields
	QAndroidJniObject CertPathValidatorException_BasicReason::UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"UNSPECIFIED",
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
	QAndroidJniObject CertPathValidatorException_BasicReason::INVALID_SIGNATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"INVALID_SIGNATURE",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::ALGORITHM_CONSTRAINED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"ALGORITHM_CONSTRAINED",
			"Ljava/security/cert/CertPathValidatorException$BasicReason;"
		);
	}
	
	// Constructors
	void CertPathValidatorException_BasicReason::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"(V)V");
	}
	
	// Methods
	jarray CertPathValidatorException_BasicReason::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"values",
			"()[Ljava/security/cert/CertPathValidatorException$BasicReason;"
		).object<jarray>();
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathValidatorException$BasicReason;",
			arg0
		);
	}
	QAndroidJniObject CertPathValidatorException_BasicReason::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathValidatorException$BasicReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathValidatorException$BasicReason;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPathValidatorException_BasicReason : public __jni_impl::java::security::cert::CertPathValidatorException_BasicReason
	{
	public:
		CertPathValidatorException_BasicReason(QAndroidJniObject obj) { __thiz = obj; }
		CertPathValidatorException_BasicReason()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_BASICREASON


#include "./CRLReason.hpp"

namespace java::security::cert
{
	// Fields
	QAndroidJniObject CRLReason::AA_COMPROMISE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"AA_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::AFFILIATION_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"AFFILIATION_CHANGED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::CA_COMPROMISE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"CA_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::CERTIFICATE_HOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"CERTIFICATE_HOLD",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::CESSATION_OF_OPERATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"CESSATION_OF_OPERATION",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::KEY_COMPROMISE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"KEY_COMPROMISE",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::PRIVILEGE_WITHDRAWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"PRIVILEGE_WITHDRAWN",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::REMOVE_FROM_CRL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"REMOVE_FROM_CRL",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::SUPERSEDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"SUPERSEDED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"UNSPECIFIED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	QAndroidJniObject CRLReason::UNUSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.CRLReason",
			"UNUSED",
			"Ljava/security/cert/CRLReason;"
		);
	}
	
	// QAndroidJniObject forward
	CRLReason::CRLReason(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CRLReason::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CRLReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/CRLReason;",
			arg0
		);
	}
	jarray CRLReason::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CRLReason",
			"values",
			"()[Ljava/security/cert/CRLReason;"
		).object<jarray>();
	}
} // namespace java::security::cert


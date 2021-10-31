#include "./PKIXRevocationChecker_Option.hpp"

namespace java::security::cert
{
	// Fields
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::NO_FALLBACK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"NO_FALLBACK",
			"Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::ONLY_END_ENTITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"ONLY_END_ENTITY",
			"Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::PREFER_CRLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"PREFER_CRLS",
			"Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::SOFT_FAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"SOFT_FAIL",
			"Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
	
	// QAndroidJniObject forward
	PKIXRevocationChecker_Option::PKIXRevocationChecker_Option(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXRevocationChecker$Option",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/PKIXRevocationChecker$Option;",
			arg0
		);
	}
	jarray PKIXRevocationChecker_Option::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXRevocationChecker$Option",
			"values",
			"()[Ljava/security/cert/PKIXRevocationChecker$Option;"
		).object<jarray>();
	}
} // namespace java::security::cert


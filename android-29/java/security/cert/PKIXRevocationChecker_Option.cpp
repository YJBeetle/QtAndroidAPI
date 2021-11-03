#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./PKIXRevocationChecker_Option.hpp"

namespace java::security::cert
{
	// Fields
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::NO_FALLBACK()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"NO_FALLBACK",
			"Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::ONLY_END_ENTITY()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"ONLY_END_ENTITY",
			"Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::PREFER_CRLS()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"PREFER_CRLS",
			"Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::SOFT_FAIL()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXRevocationChecker$Option",
			"SOFT_FAIL",
			"Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
	
	// QJniObject forward
	PKIXRevocationChecker_Option::PKIXRevocationChecker_Option(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::security::cert::PKIXRevocationChecker_Option PKIXRevocationChecker_Option::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.PKIXRevocationChecker$Option",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/PKIXRevocationChecker$Option;",
			arg0.object<jstring>()
		);
	}
	JArray PKIXRevocationChecker_Option::values()
	{
		return callStaticObjectMethod(
			"java.security.cert.PKIXRevocationChecker$Option",
			"values",
			"()[Ljava/security/cert/PKIXRevocationChecker$Option;"
		);
	}
} // namespace java::security::cert


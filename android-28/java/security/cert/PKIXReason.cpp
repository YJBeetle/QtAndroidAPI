#include "./PKIXReason.hpp"

namespace java::security::cert
{
	// Fields
	java::security::cert::PKIXReason PKIXReason::INVALID_KEY_USAGE()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_KEY_USAGE",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	java::security::cert::PKIXReason PKIXReason::INVALID_NAME()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_NAME",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	java::security::cert::PKIXReason PKIXReason::INVALID_POLICY()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_POLICY",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	java::security::cert::PKIXReason PKIXReason::NAME_CHAINING()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NAME_CHAINING",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	java::security::cert::PKIXReason PKIXReason::NOT_CA_CERT()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NOT_CA_CERT",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	java::security::cert::PKIXReason PKIXReason::NO_TRUST_ANCHOR()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NO_TRUST_ANCHOR",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	java::security::cert::PKIXReason PKIXReason::PATH_TOO_LONG()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXReason",
			"PATH_TOO_LONG",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	java::security::cert::PKIXReason PKIXReason::UNRECOGNIZED_CRIT_EXT()
	{
		return getStaticObjectField(
			"java.security.cert.PKIXReason",
			"UNRECOGNIZED_CRIT_EXT",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	
	// QJniObject forward
	PKIXReason::PKIXReason(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::security::cert::PKIXReason PKIXReason::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.cert.PKIXReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/PKIXReason;",
			arg0
		);
	}
	jarray PKIXReason::values()
	{
		return callStaticObjectMethod(
			"java.security.cert.PKIXReason",
			"values",
			"()[Ljava/security/cert/PKIXReason;"
		).object<jarray>();
	}
} // namespace java::security::cert


#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./LDAPCertStoreParameters.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	LDAPCertStoreParameters::LDAPCertStoreParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LDAPCertStoreParameters::LDAPCertStoreParameters()
		: JObject(
			"java.security.cert.LDAPCertStoreParameters",
			"()V"
		) {}
	LDAPCertStoreParameters::LDAPCertStoreParameters(JString arg0)
		: JObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	LDAPCertStoreParameters::LDAPCertStoreParameters(JString arg0, jint arg1)
		: JObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	JObject LDAPCertStoreParameters::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint LDAPCertStoreParameters::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString LDAPCertStoreParameters::getServerName() const
	{
		return callObjectMethod(
			"getServerName",
			"()Ljava/lang/String;"
		);
	}
	JString LDAPCertStoreParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert


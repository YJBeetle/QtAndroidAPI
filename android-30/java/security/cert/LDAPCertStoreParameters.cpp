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
	LDAPCertStoreParameters::LDAPCertStoreParameters(jstring arg0)
		: JObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	LDAPCertStoreParameters::LDAPCertStoreParameters(jstring arg0, jint arg1)
		: JObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jobject LDAPCertStoreParameters::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint LDAPCertStoreParameters::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring LDAPCertStoreParameters::getServerName()
	{
		return callObjectMethod(
			"getServerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LDAPCertStoreParameters::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security::cert


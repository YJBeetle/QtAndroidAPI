#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./LDAPCertStoreParameters.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline LDAPCertStoreParameters::LDAPCertStoreParameters()
		: JObject(
			"java.security.cert.LDAPCertStoreParameters",
			"()V"
		) {}
	inline LDAPCertStoreParameters::LDAPCertStoreParameters(JString arg0)
		: JObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline LDAPCertStoreParameters::LDAPCertStoreParameters(JString arg0, jint arg1)
		: JObject(
			"java.security.cert.LDAPCertStoreParameters",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline JObject LDAPCertStoreParameters::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint LDAPCertStoreParameters::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline JString LDAPCertStoreParameters::getServerName() const
	{
		return callObjectMethod(
			"getServerName",
			"()Ljava/lang/String;"
		);
	}
	inline JString LDAPCertStoreParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers


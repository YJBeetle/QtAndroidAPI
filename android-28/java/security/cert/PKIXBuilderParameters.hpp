#pragma once

#include "../../../JString.hpp"
#include "../KeyStore.def.hpp"
#include "./PKIXBuilderParameters.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline PKIXBuilderParameters::PKIXBuilderParameters(java::security::KeyStore arg0, JObject arg1)
		: java::security::cert::PKIXParameters(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PKIXBuilderParameters::PKIXBuilderParameters(JObject arg0, JObject arg1)
		: java::security::cert::PKIXParameters(
			"java.security.cert.PKIXBuilderParameters",
			"(Ljava/util/Set;Ljava/security/cert/CertSelector;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint PKIXBuilderParameters::getMaxPathLength() const
	{
		return callMethod<jint>(
			"getMaxPathLength",
			"()I"
		);
	}
	inline void PKIXBuilderParameters::setMaxPathLength(jint arg0) const
	{
		callMethod<void>(
			"setMaxPathLength",
			"(I)V",
			arg0
		);
	}
	inline JString PKIXBuilderParameters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers
#include "./PKIXParameters.hpp"


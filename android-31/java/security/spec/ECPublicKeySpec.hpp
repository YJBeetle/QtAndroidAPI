#pragma once

#include "./ECParameterSpec.def.hpp"
#include "./ECPoint.def.hpp"
#include "./ECPublicKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline ECPublicKeySpec::ECPublicKeySpec(java::security::spec::ECPoint arg0, java::security::spec::ECParameterSpec arg1)
		: JObject(
			"java.security.spec.ECPublicKeySpec",
			"(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::security::spec::ECParameterSpec ECPublicKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/ECParameterSpec;"
		);
	}
	inline java::security::spec::ECPoint ECPublicKeySpec::getW() const
	{
		return callObjectMethod(
			"getW",
			"()Ljava/security/spec/ECPoint;"
		);
	}
} // namespace java::security::spec

// Base class headers


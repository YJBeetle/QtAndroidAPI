#pragma once

#include "./EdECPoint.def.hpp"
#include "./NamedParameterSpec.def.hpp"
#include "./EdECPublicKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline EdECPublicKeySpec::EdECPublicKeySpec(java::security::spec::NamedParameterSpec arg0, java::security::spec::EdECPoint arg1)
		: JObject(
			"java.security.spec.EdECPublicKeySpec",
			"(Ljava/security/spec/NamedParameterSpec;Ljava/security/spec/EdECPoint;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::security::spec::NamedParameterSpec EdECPublicKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/NamedParameterSpec;"
		);
	}
	inline java::security::spec::EdECPoint EdECPublicKeySpec::getPoint() const
	{
		return callObjectMethod(
			"getPoint",
			"()Ljava/security/spec/EdECPoint;"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif

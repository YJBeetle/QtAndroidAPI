#pragma once

#include "../../../JByteArray.hpp"
#include "./NamedParameterSpec.def.hpp"
#include "./EdECPrivateKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline EdECPrivateKeySpec::EdECPrivateKeySpec(java::security::spec::NamedParameterSpec arg0, JByteArray arg1)
		: JObject(
			"java.security.spec.EdECPrivateKeySpec",
			"(Ljava/security/spec/NamedParameterSpec;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline JByteArray EdECPrivateKeySpec::getBytes() const
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		);
	}
	inline java::security::spec::NamedParameterSpec EdECPrivateKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/NamedParameterSpec;"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif

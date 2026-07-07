#pragma once

#include "../../../JByteArray.hpp"
#include "../../util/Optional.def.hpp"
#include "./EdDSAParameterSpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline EdDSAParameterSpec::EdDSAParameterSpec(jboolean arg0)
		: JObject(
			"java.security.spec.EdDSAParameterSpec",
			"(Z)V",
			arg0
		) {}
	inline EdDSAParameterSpec::EdDSAParameterSpec(jboolean arg0, JByteArray arg1)
		: JObject(
			"java.security.spec.EdDSAParameterSpec",
			"(Z[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline java::util::Optional EdDSAParameterSpec::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Ljava/util/Optional;"
		);
	}
	inline jboolean EdDSAParameterSpec::isPrehash() const
	{
		return callMethod<jboolean>(
			"isPrehash",
			"()Z"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif

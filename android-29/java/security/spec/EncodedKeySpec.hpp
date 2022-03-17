#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./EncodedKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline EncodedKeySpec::EncodedKeySpec(JByteArray arg0)
		: JObject(
			"java.security.spec.EncodedKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	inline JString EncodedKeySpec::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray EncodedKeySpec::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JString EncodedKeySpec::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

// Base class headers


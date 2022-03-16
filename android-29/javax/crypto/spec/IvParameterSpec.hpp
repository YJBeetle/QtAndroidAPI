#pragma once

#include "../../../JByteArray.hpp"
#include "./IvParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline IvParameterSpec::IvParameterSpec(JByteArray arg0)
		: JObject(
			"javax.crypto.spec.IvParameterSpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline IvParameterSpec::IvParameterSpec(JByteArray arg0, jint arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.IvParameterSpec",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline JByteArray IvParameterSpec::getIV() const
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

// Base class headers


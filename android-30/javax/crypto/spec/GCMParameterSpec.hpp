#pragma once

#include "../../../JByteArray.hpp"
#include "./GCMParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline GCMParameterSpec::GCMParameterSpec(jint arg0, JByteArray arg1)
		: JObject(
			"javax.crypto.spec.GCMParameterSpec",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	inline GCMParameterSpec::GCMParameterSpec(jint arg0, JByteArray arg1, jint arg2, jint arg3)
		: JObject(
			"javax.crypto.spec.GCMParameterSpec",
			"(I[BII)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JByteArray GCMParameterSpec::getIV() const
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		);
	}
	inline jint GCMParameterSpec::getTLen() const
	{
		return callMethod<jint>(
			"getTLen",
			"()I"
		);
	}
} // namespace javax::crypto::spec

// Base class headers


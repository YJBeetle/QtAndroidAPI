#pragma once

#include "../../../JByteArray.hpp"
#include "./PBEParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline PBEParameterSpec::PBEParameterSpec(JByteArray arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.PBEParameterSpec",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		) {}
	inline PBEParameterSpec::PBEParameterSpec(JByteArray arg0, jint arg1, JObject arg2)
		: JObject(
			"javax.crypto.spec.PBEParameterSpec",
			"([BILjava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline jint PBEParameterSpec::getIterationCount() const
	{
		return callMethod<jint>(
			"getIterationCount",
			"()I"
		);
	}
	inline JObject PBEParameterSpec::getParameterSpec() const
	{
		return callObjectMethod(
			"getParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline JByteArray PBEParameterSpec::getSalt() const
	{
		return callObjectMethod(
			"getSalt",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

// Base class headers


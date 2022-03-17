#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "./RC5ParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2, JByteArray arg3)
		: JObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III[B)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		) {}
	inline RC5ParameterSpec::RC5ParameterSpec(jint arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4)
		: JObject(
			"javax.crypto.spec.RC5ParameterSpec",
			"(III[BI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jbyteArray>(),
			arg4
		) {}
	
	// Methods
	inline jboolean RC5ParameterSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray RC5ParameterSpec::getIV() const
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		);
	}
	inline jint RC5ParameterSpec::getRounds() const
	{
		return callMethod<jint>(
			"getRounds",
			"()I"
		);
	}
	inline jint RC5ParameterSpec::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline jint RC5ParameterSpec::getWordSize() const
	{
		return callMethod<jint>(
			"getWordSize",
			"()I"
		);
	}
	inline jint RC5ParameterSpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

// Base class headers


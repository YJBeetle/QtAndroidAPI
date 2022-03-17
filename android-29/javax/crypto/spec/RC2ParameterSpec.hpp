#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "./RC2ParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline RC2ParameterSpec::RC2ParameterSpec(jint arg0)
		: JObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I)V",
			arg0
		) {}
	inline RC2ParameterSpec::RC2ParameterSpec(jint arg0, JByteArray arg1)
		: JObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	inline RC2ParameterSpec::RC2ParameterSpec(jint arg0, JByteArray arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.RC2ParameterSpec",
			"(I[BI)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2
		) {}
	
	// Methods
	inline jboolean RC2ParameterSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint RC2ParameterSpec::getEffectiveKeyBits() const
	{
		return callMethod<jint>(
			"getEffectiveKeyBits",
			"()I"
		);
	}
	inline JByteArray RC2ParameterSpec::getIV() const
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		);
	}
	inline jint RC2ParameterSpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto::spec;
#endif

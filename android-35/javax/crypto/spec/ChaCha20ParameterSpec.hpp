#pragma once

#include "../../../JByteArray.hpp"
#include "./ChaCha20ParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline ChaCha20ParameterSpec::ChaCha20ParameterSpec(JByteArray arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.ChaCha20ParameterSpec",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		) {}
	
	// Methods
	inline jint ChaCha20ParameterSpec::getCounter() const
	{
		return callMethod<jint>(
			"getCounter",
			"()I"
		);
	}
	inline JByteArray ChaCha20ParameterSpec::getNonce() const
	{
		return callObjectMethod(
			"getNonce",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto::spec;
#endif

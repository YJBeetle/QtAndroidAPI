#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "./DESKeySpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	inline jint DESKeySpec::DES_KEY_LEN()
	{
		return getStaticField<jint>(
			"javax.crypto.spec.DESKeySpec",
			"DES_KEY_LEN"
		);
	}
	
	// Constructors
	inline DESKeySpec::DESKeySpec(JByteArray arg0)
		: JObject(
			"javax.crypto.spec.DESKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline DESKeySpec::DESKeySpec(JByteArray arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.DESKeySpec",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		) {}
	
	// Methods
	inline jboolean DESKeySpec::isParityAdjusted(JByteArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"javax.crypto.spec.DESKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline jboolean DESKeySpec::isWeak(JByteArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"javax.crypto.spec.DESKeySpec",
			"isWeak",
			"([BI)Z",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JByteArray DESKeySpec::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

// Base class headers


#pragma once

#include "../../../JByteArray.hpp"
#include "./DESedeKeySpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	inline jint DESedeKeySpec::DES_EDE_KEY_LEN()
	{
		return getStaticField<jint>(
			"javax.crypto.spec.DESedeKeySpec",
			"DES_EDE_KEY_LEN"
		);
	}
	
	// Constructors
	inline DESedeKeySpec::DESedeKeySpec(JByteArray arg0)
		: JObject(
			"javax.crypto.spec.DESedeKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline DESedeKeySpec::DESedeKeySpec(JByteArray arg0, jint arg1)
		: JObject(
			"javax.crypto.spec.DESedeKeySpec",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		) {}
	
	// Methods
	inline jboolean DESedeKeySpec::isParityAdjusted(JByteArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"javax.crypto.spec.DESedeKeySpec",
			"isParityAdjusted",
			"([BI)Z",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JByteArray DESedeKeySpec::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

// Base class headers


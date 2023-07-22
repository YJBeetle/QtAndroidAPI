#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JCharArray.hpp"
#include "./PBEKeySpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline PBEKeySpec::PBEKeySpec(JCharArray arg0)
		: JObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	inline PBEKeySpec::PBEKeySpec(JCharArray arg0, JByteArray arg1, jint arg2)
		: JObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BI)V",
			arg0.object<jcharArray>(),
			arg1.object<jbyteArray>(),
			arg2
		) {}
	inline PBEKeySpec::PBEKeySpec(JCharArray arg0, JByteArray arg1, jint arg2, jint arg3)
		: JObject(
			"javax.crypto.spec.PBEKeySpec",
			"([C[BII)V",
			arg0.object<jcharArray>(),
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void PBEKeySpec::clearPassword() const
	{
		callMethod<void>(
			"clearPassword",
			"()V"
		);
	}
	inline jint PBEKeySpec::getIterationCount() const
	{
		return callMethod<jint>(
			"getIterationCount",
			"()I"
		);
	}
	inline jint PBEKeySpec::getKeyLength() const
	{
		return callMethod<jint>(
			"getKeyLength",
			"()I"
		);
	}
	inline JCharArray PBEKeySpec::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	inline JByteArray PBEKeySpec::getSalt() const
	{
		return callObjectMethod(
			"getSalt",
			"()[B"
		);
	}
} // namespace javax::crypto::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto::spec;
#endif

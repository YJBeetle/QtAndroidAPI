#pragma once

#include "./DSAGenParameterSpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline DSAGenParameterSpec::DSAGenParameterSpec(jint arg0, jint arg1)
		: JObject(
			"java.security.spec.DSAGenParameterSpec",
			"(II)V",
			arg0,
			arg1
		) {}
	inline DSAGenParameterSpec::DSAGenParameterSpec(jint arg0, jint arg1, jint arg2)
		: JObject(
			"java.security.spec.DSAGenParameterSpec",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint DSAGenParameterSpec::getPrimePLength() const
	{
		return callMethod<jint>(
			"getPrimePLength",
			"()I"
		);
	}
	inline jint DSAGenParameterSpec::getSeedLength() const
	{
		return callMethod<jint>(
			"getSeedLength",
			"()I"
		);
	}
	inline jint DSAGenParameterSpec::getSubprimeQLength() const
	{
		return callMethod<jint>(
			"getSubprimeQLength",
			"()I"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif

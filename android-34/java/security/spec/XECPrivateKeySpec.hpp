#pragma once

#include "../../../JByteArray.hpp"
#include "./XECPrivateKeySpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline XECPrivateKeySpec::XECPrivateKeySpec(JObject arg0, JByteArray arg1)
		: JObject(
			"java.security.spec.XECPrivateKeySpec",
			"(Ljava/security/spec/AlgorithmParameterSpec;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline JObject XECPrivateKeySpec::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline JByteArray XECPrivateKeySpec::getScalar() const
	{
		return callObjectMethod(
			"getScalar",
			"()[B"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif

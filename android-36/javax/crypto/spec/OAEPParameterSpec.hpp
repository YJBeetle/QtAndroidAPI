#pragma once

#include "../../../JString.hpp"
#include "./PSource.def.hpp"
#include "./OAEPParameterSpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	inline javax::crypto::spec::OAEPParameterSpec OAEPParameterSpec::DEFAULT()
	{
		return getStaticObjectField(
			"javax.crypto.spec.OAEPParameterSpec",
			"DEFAULT",
			"Ljavax/crypto/spec/OAEPParameterSpec;"
		);
	}
	
	// Constructors
	inline OAEPParameterSpec::OAEPParameterSpec(JString arg0, JString arg1, JObject arg2, javax::crypto::spec::PSource arg3)
		: JObject(
			"javax.crypto.spec.OAEPParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;Ljavax/crypto/spec/PSource;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline JString OAEPParameterSpec::getDigestAlgorithm() const
	{
		return callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JString OAEPParameterSpec::getMGFAlgorithm() const
	{
		return callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject OAEPParameterSpec::getMGFParameters() const
	{
		return callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline javax::crypto::spec::PSource OAEPParameterSpec::getPSource() const
	{
		return callObjectMethod(
			"getPSource",
			"()Ljavax/crypto/spec/PSource;"
		);
	}
} // namespace javax::crypto::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto::spec;
#endif

#pragma once

#include "../../../JString.hpp"
#include "./MGF1ParameterSpec.def.hpp"

namespace java::security::spec
{
	// Fields
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA1()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA1",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA224()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA224",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA256()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA256",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA384()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA384",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA3_224()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA3_224",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA3_256()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA3_256",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA3_384()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA3_384",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA3_512()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA3_512",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA512()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA512_224()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512_224",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	inline java::security::spec::MGF1ParameterSpec MGF1ParameterSpec::SHA512_256()
	{
		return getStaticObjectField(
			"java.security.spec.MGF1ParameterSpec",
			"SHA512_256",
			"Ljava/security/spec/MGF1ParameterSpec;"
		);
	}
	
	// Constructors
	inline MGF1ParameterSpec::MGF1ParameterSpec(JString arg0)
		: JObject(
			"java.security.spec.MGF1ParameterSpec",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString MGF1ParameterSpec::getDigestAlgorithm() const
	{
		return callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JString MGF1ParameterSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

// Base class headers


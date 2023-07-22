#pragma once

#include "../../../JString.hpp"
#include "./NamedParameterSpec.def.hpp"

namespace java::security::spec
{
	// Fields
	inline java::security::spec::NamedParameterSpec NamedParameterSpec::ED25519()
	{
		return getStaticObjectField(
			"java.security.spec.NamedParameterSpec",
			"ED25519",
			"Ljava/security/spec/NamedParameterSpec;"
		);
	}
	inline java::security::spec::NamedParameterSpec NamedParameterSpec::ED448()
	{
		return getStaticObjectField(
			"java.security.spec.NamedParameterSpec",
			"ED448",
			"Ljava/security/spec/NamedParameterSpec;"
		);
	}
	inline java::security::spec::NamedParameterSpec NamedParameterSpec::X25519()
	{
		return getStaticObjectField(
			"java.security.spec.NamedParameterSpec",
			"X25519",
			"Ljava/security/spec/NamedParameterSpec;"
		);
	}
	inline java::security::spec::NamedParameterSpec NamedParameterSpec::X448()
	{
		return getStaticObjectField(
			"java.security.spec.NamedParameterSpec",
			"X448",
			"Ljava/security/spec/NamedParameterSpec;"
		);
	}
	
	// Constructors
	inline NamedParameterSpec::NamedParameterSpec(JString arg0)
		: JObject(
			"java.security.spec.NamedParameterSpec",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString NamedParameterSpec::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif

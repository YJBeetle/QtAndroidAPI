#pragma once

#include "../../../JString.hpp"
#include "./ECGenParameterSpec.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline ECGenParameterSpec::ECGenParameterSpec(JString arg0)
		: java::security::spec::NamedParameterSpec(
			"java.security.spec.ECGenParameterSpec",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security::spec

// Base class headers
#include "./NamedParameterSpec.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif

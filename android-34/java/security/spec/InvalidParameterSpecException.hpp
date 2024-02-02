#pragma once

#include "../../../JString.hpp"
#include "./InvalidParameterSpecException.def.hpp"

namespace java::security::spec
{
	// Fields
	
	// Constructors
	inline InvalidParameterSpecException::InvalidParameterSpecException()
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidParameterSpecException",
			"()V"
		) {}
	inline InvalidParameterSpecException::InvalidParameterSpecException(JString arg0)
		: java::security::GeneralSecurityException(
			"java.security.spec.InvalidParameterSpecException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security::spec

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::spec;
#endif

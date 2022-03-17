#pragma once

#include "../../lang/Exception.def.hpp"
#include "./CoderMalfunctionError.def.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	inline CoderMalfunctionError::CoderMalfunctionError(java::lang::Exception arg0)
		: java::lang::Error(
			"java.nio.charset.CoderMalfunctionError",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace java::nio::charset

// Base class headers
#include "../../lang/Error.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::charset;
#endif

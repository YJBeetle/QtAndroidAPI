#pragma once

#include "../../JString.hpp"
#include "./MediaCasStateException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString MediaCasStateException::getDiagnosticInfo() const
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


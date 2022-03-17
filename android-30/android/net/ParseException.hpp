#pragma once

#include "../../JString.hpp"
#include "./ParseException.def.hpp"

namespace android::net
{
	// Fields
	inline JString ParseException::response()
	{
		return getObjectField(
			"response",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


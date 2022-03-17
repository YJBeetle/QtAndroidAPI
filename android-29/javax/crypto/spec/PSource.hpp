#pragma once

#include "../../../JString.hpp"
#include "./PSource.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString PSource::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::crypto::spec

// Base class headers


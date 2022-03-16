#pragma once

#include "../../../JString.hpp"
#include "./FieldClassification.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject FieldClassification::getMatches() const
	{
		return callObjectMethod(
			"getMatches",
			"()Ljava/util/List;"
		);
	}
	inline JString FieldClassification::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::autofill

// Base class headers


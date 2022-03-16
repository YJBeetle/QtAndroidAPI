#pragma once

#include "./PutDocumentsRequest.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject PutDocumentsRequest::getGenericDocuments() const
	{
		return callObjectMethod(
			"getGenericDocuments",
			"()Ljava/util/List;"
		);
	}
} // namespace android::app::appsearch

// Base class headers


#pragma once

#include "../../../JString.hpp"
#include "./GetByDocumentIdRequest.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JString GetByDocumentIdRequest::PROJECTION_SCHEMA_TYPE_WILDCARD()
	{
		return getStaticObjectField(
			"android.app.appsearch.GetByDocumentIdRequest",
			"PROJECTION_SCHEMA_TYPE_WILDCARD",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject GetByDocumentIdRequest::getIds() const
	{
		return callObjectMethod(
			"getIds",
			"()Ljava/util/Set;"
		);
	}
	inline JString GetByDocumentIdRequest::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	inline JObject GetByDocumentIdRequest::getProjections() const
	{
		return callObjectMethod(
			"getProjections",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::app::appsearch

// Base class headers


#pragma once

#include "./GetSchemaResponse.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject GetSchemaResponse::getRequiredPermissionsForSchemaTypeVisibility() const
	{
		return callObjectMethod(
			"getRequiredPermissionsForSchemaTypeVisibility",
			"()Ljava/util/Map;"
		);
	}
	inline JObject GetSchemaResponse::getSchemaTypesNotDisplayedBySystem() const
	{
		return callObjectMethod(
			"getSchemaTypesNotDisplayedBySystem",
			"()Ljava/util/Set;"
		);
	}
	inline JObject GetSchemaResponse::getSchemaTypesVisibleToPackages() const
	{
		return callObjectMethod(
			"getSchemaTypesVisibleToPackages",
			"()Ljava/util/Map;"
		);
	}
	inline JObject GetSchemaResponse::getSchemas() const
	{
		return callObjectMethod(
			"getSchemas",
			"()Ljava/util/Set;"
		);
	}
	inline jint GetSchemaResponse::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

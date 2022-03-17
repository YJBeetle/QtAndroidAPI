#pragma once

#include "../../../JString.hpp"
#include "./AppSearchSchema_DocumentPropertyConfig.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString AppSearchSchema_DocumentPropertyConfig::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean AppSearchSchema_DocumentPropertyConfig::shouldIndexNestedProperties() const
	{
		return callMethod<jboolean>(
			"shouldIndexNestedProperties",
			"()Z"
		);
	}
} // namespace android::app::appsearch

// Base class headers
#include "./AppSearchSchema_PropertyConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

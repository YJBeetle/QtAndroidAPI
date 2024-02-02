#pragma once

#include "./AppSearchSchema_LongPropertyConfig.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint AppSearchSchema_LongPropertyConfig::INDEXING_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$LongPropertyConfig",
			"INDEXING_TYPE_NONE"
		);
	}
	inline jint AppSearchSchema_LongPropertyConfig::INDEXING_TYPE_RANGE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$LongPropertyConfig",
			"INDEXING_TYPE_RANGE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AppSearchSchema_LongPropertyConfig::getIndexingType() const
	{
		return callMethod<jint>(
			"getIndexingType",
			"()I"
		);
	}
} // namespace android::app::appsearch

// Base class headers
#include "./AppSearchSchema_PropertyConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

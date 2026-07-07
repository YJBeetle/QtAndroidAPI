#pragma once

#include "./AppSearchSchema_EmbeddingPropertyConfig.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint AppSearchSchema_EmbeddingPropertyConfig::INDEXING_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$EmbeddingPropertyConfig",
			"INDEXING_TYPE_NONE"
		);
	}
	inline jint AppSearchSchema_EmbeddingPropertyConfig::INDEXING_TYPE_SIMILARITY()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$EmbeddingPropertyConfig",
			"INDEXING_TYPE_SIMILARITY"
		);
	}
	inline jint AppSearchSchema_EmbeddingPropertyConfig::QUANTIZATION_TYPE_8_BIT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$EmbeddingPropertyConfig",
			"QUANTIZATION_TYPE_8_BIT"
		);
	}
	inline jint AppSearchSchema_EmbeddingPropertyConfig::QUANTIZATION_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$EmbeddingPropertyConfig",
			"QUANTIZATION_TYPE_NONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AppSearchSchema_EmbeddingPropertyConfig::getIndexingType() const
	{
		return callMethod<jint>(
			"getIndexingType",
			"()I"
		);
	}
	inline jint AppSearchSchema_EmbeddingPropertyConfig::getQuantizationType() const
	{
		return callMethod<jint>(
			"getQuantizationType",
			"()I"
		);
	}
} // namespace android::app::appsearch

// Base class headers
#include "./AppSearchSchema_PropertyConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

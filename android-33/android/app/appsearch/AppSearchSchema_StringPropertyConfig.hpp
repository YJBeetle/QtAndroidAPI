#pragma once

#include "./AppSearchSchema_StringPropertyConfig.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint AppSearchSchema_StringPropertyConfig::INDEXING_TYPE_EXACT_TERMS()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"INDEXING_TYPE_EXACT_TERMS"
		);
	}
	inline jint AppSearchSchema_StringPropertyConfig::INDEXING_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"INDEXING_TYPE_NONE"
		);
	}
	inline jint AppSearchSchema_StringPropertyConfig::INDEXING_TYPE_PREFIXES()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"INDEXING_TYPE_PREFIXES"
		);
	}
	inline jint AppSearchSchema_StringPropertyConfig::TOKENIZER_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"TOKENIZER_TYPE_NONE"
		);
	}
	inline jint AppSearchSchema_StringPropertyConfig::TOKENIZER_TYPE_PLAIN()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"TOKENIZER_TYPE_PLAIN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AppSearchSchema_StringPropertyConfig::getIndexingType() const
	{
		return callMethod<jint>(
			"getIndexingType",
			"()I"
		);
	}
	inline jint AppSearchSchema_StringPropertyConfig::getTokenizerType() const
	{
		return callMethod<jint>(
			"getTokenizerType",
			"()I"
		);
	}
} // namespace android::app::appsearch

// Base class headers
#include "./AppSearchSchema_PropertyConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

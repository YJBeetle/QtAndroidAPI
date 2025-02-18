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
	inline jint AppSearchSchema_StringPropertyConfig::JOINABLE_VALUE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"JOINABLE_VALUE_TYPE_NONE"
		);
	}
	inline jint AppSearchSchema_StringPropertyConfig::JOINABLE_VALUE_TYPE_QUALIFIED_ID()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"JOINABLE_VALUE_TYPE_QUALIFIED_ID"
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
	inline jint AppSearchSchema_StringPropertyConfig::TOKENIZER_TYPE_RFC822()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"TOKENIZER_TYPE_RFC822"
		);
	}
	inline jint AppSearchSchema_StringPropertyConfig::TOKENIZER_TYPE_VERBATIM()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"TOKENIZER_TYPE_VERBATIM"
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
	inline jint AppSearchSchema_StringPropertyConfig::getJoinableValueType() const
	{
		return callMethod<jint>(
			"getJoinableValueType",
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

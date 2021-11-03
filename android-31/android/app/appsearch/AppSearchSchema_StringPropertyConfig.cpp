#include "./AppSearchSchema_StringPropertyConfig.hpp"

namespace android::app::appsearch
{
	// Fields
	jint AppSearchSchema_StringPropertyConfig::INDEXING_TYPE_EXACT_TERMS()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"INDEXING_TYPE_EXACT_TERMS"
		);
	}
	jint AppSearchSchema_StringPropertyConfig::INDEXING_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"INDEXING_TYPE_NONE"
		);
	}
	jint AppSearchSchema_StringPropertyConfig::INDEXING_TYPE_PREFIXES()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"INDEXING_TYPE_PREFIXES"
		);
	}
	jint AppSearchSchema_StringPropertyConfig::TOKENIZER_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"TOKENIZER_TYPE_NONE"
		);
	}
	jint AppSearchSchema_StringPropertyConfig::TOKENIZER_TYPE_PLAIN()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig",
			"TOKENIZER_TYPE_PLAIN"
		);
	}
	
	// QAndroidJniObject forward
	AppSearchSchema_StringPropertyConfig::AppSearchSchema_StringPropertyConfig(QAndroidJniObject obj) : android::app::appsearch::AppSearchSchema_PropertyConfig(obj) {}
	
	// Constructors
	
	// Methods
	jint AppSearchSchema_StringPropertyConfig::getIndexingType() const
	{
		return callMethod<jint>(
			"getIndexingType",
			"()I"
		);
	}
	jint AppSearchSchema_StringPropertyConfig::getTokenizerType() const
	{
		return callMethod<jint>(
			"getTokenizerType",
			"()I"
		);
	}
} // namespace android::app::appsearch


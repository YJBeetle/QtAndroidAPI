#pragma once

#include "../../../JObject.hpp"
#include "./AppSearchSchema_PropertyConfig.hpp"


namespace android::app::appsearch
{
	class AppSearchSchema_StringPropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		static jint INDEXING_TYPE_EXACT_TERMS();
		static jint INDEXING_TYPE_NONE();
		static jint INDEXING_TYPE_PREFIXES();
		static jint TOKENIZER_TYPE_NONE();
		static jint TOKENIZER_TYPE_PLAIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_StringPropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_StringPropertyConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getIndexingType();
		jint getTokenizerType();
	};
} // namespace android::app::appsearch


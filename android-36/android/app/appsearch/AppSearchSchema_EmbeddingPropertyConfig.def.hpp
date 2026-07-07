#pragma once

#include "./AppSearchSchema_PropertyConfig.def.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_EmbeddingPropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		static jint INDEXING_TYPE_NONE();
		static jint INDEXING_TYPE_SIMILARITY();
		static jint QUANTIZATION_TYPE_8_BIT();
		static jint QUANTIZATION_TYPE_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_EmbeddingPropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_EmbeddingPropertyConfig(QJniObject obj) : android::app::appsearch::AppSearchSchema_PropertyConfig(obj) {}
		
		// Constructors
		
		// Methods
		jint getIndexingType() const;
		jint getQuantizationType() const;
	};
} // namespace android::app::appsearch


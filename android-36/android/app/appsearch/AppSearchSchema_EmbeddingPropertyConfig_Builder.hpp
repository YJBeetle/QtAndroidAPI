#pragma once

#include "./AppSearchSchema_EmbeddingPropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_EmbeddingPropertyConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_EmbeddingPropertyConfig_Builder::AppSearchSchema_EmbeddingPropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$EmbeddingPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_EmbeddingPropertyConfig AppSearchSchema_EmbeddingPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$EmbeddingPropertyConfig;"
		);
	}
	inline android::app::appsearch::AppSearchSchema_EmbeddingPropertyConfig_Builder AppSearchSchema_EmbeddingPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$EmbeddingPropertyConfig$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::AppSearchSchema_EmbeddingPropertyConfig_Builder AppSearchSchema_EmbeddingPropertyConfig_Builder::setIndexingType(jint arg0) const
	{
		return callObjectMethod(
			"setIndexingType",
			"(I)Landroid/app/appsearch/AppSearchSchema$EmbeddingPropertyConfig$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::AppSearchSchema_EmbeddingPropertyConfig_Builder AppSearchSchema_EmbeddingPropertyConfig_Builder::setQuantizationType(jint arg0) const
	{
		return callObjectMethod(
			"setQuantizationType",
			"(I)Landroid/app/appsearch/AppSearchSchema$EmbeddingPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

#pragma once

#include "./AppSearchSchema_StringPropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_StringPropertyConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_StringPropertyConfig_Builder::AppSearchSchema_StringPropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_StringPropertyConfig AppSearchSchema_StringPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig;"
		);
	}
	inline android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setIndexingType(jint arg0) const
	{
		return callObjectMethod(
			"setIndexingType",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setTokenizerType(jint arg0) const
	{
		return callObjectMethod(
			"setTokenizerType",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

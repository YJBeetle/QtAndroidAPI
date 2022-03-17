#pragma once

#include "./AppSearchSchema_LongPropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_LongPropertyConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_LongPropertyConfig_Builder::AppSearchSchema_LongPropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$LongPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_LongPropertyConfig AppSearchSchema_LongPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$LongPropertyConfig;"
		);
	}
	inline android::app::appsearch::AppSearchSchema_LongPropertyConfig_Builder AppSearchSchema_LongPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$LongPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

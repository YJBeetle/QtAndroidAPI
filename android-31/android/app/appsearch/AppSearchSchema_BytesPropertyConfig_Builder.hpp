#pragma once

#include "./AppSearchSchema_BytesPropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_BytesPropertyConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_BytesPropertyConfig_Builder::AppSearchSchema_BytesPropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$BytesPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_BytesPropertyConfig AppSearchSchema_BytesPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$BytesPropertyConfig;"
		);
	}
	inline android::app::appsearch::AppSearchSchema_BytesPropertyConfig_Builder AppSearchSchema_BytesPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$BytesPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers


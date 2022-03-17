#pragma once

#include "./AppSearchSchema_BooleanPropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_BooleanPropertyConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_BooleanPropertyConfig_Builder::AppSearchSchema_BooleanPropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$BooleanPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_BooleanPropertyConfig AppSearchSchema_BooleanPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$BooleanPropertyConfig;"
		);
	}
	inline android::app::appsearch::AppSearchSchema_BooleanPropertyConfig_Builder AppSearchSchema_BooleanPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$BooleanPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers


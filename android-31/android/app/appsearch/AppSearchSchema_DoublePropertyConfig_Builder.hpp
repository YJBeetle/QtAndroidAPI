#pragma once

#include "./AppSearchSchema_DoublePropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_DoublePropertyConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_DoublePropertyConfig_Builder::AppSearchSchema_DoublePropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$DoublePropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_DoublePropertyConfig AppSearchSchema_DoublePropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$DoublePropertyConfig;"
		);
	}
	inline android::app::appsearch::AppSearchSchema_DoublePropertyConfig_Builder AppSearchSchema_DoublePropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$DoublePropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers


#pragma once

#include "./AppSearchSchema.def.hpp"
#include "./AppSearchSchema_PropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_Builder::AppSearchSchema_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_Builder AppSearchSchema_Builder::addProperty(android::app::appsearch::AppSearchSchema_PropertyConfig arg0) const
	{
		return callObjectMethod(
			"addProperty",
			"(Landroid/app/appsearch/AppSearchSchema$PropertyConfig;)Landroid/app/appsearch/AppSearchSchema$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::AppSearchSchema AppSearchSchema_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

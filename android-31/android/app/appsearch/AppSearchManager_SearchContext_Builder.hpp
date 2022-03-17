#pragma once

#include "./AppSearchManager_SearchContext.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchManager_SearchContext_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchManager_SearchContext_Builder::AppSearchManager_SearchContext_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchManager$SearchContext$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchManager_SearchContext AppSearchManager_SearchContext_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchManager$SearchContext;"
		);
	}
} // namespace android::app::appsearch

// Base class headers


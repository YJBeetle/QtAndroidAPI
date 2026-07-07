#pragma once

#include "./SearchSuggestionResult.def.hpp"
#include "../../../JString.hpp"
#include "./SearchSuggestionResult_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SearchSuggestionResult_Builder::SearchSuggestionResult_Builder()
		: JObject(
			"android.app.appsearch.SearchSuggestionResult$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::SearchSuggestionResult SearchSuggestionResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchSuggestionResult;"
		);
	}
	inline android::app::appsearch::SearchSuggestionResult_Builder SearchSuggestionResult_Builder::setSuggestedResult(JString arg0) const
	{
		return callObjectMethod(
			"setSuggestedResult",
			"(Ljava/lang/String;)Landroid/app/appsearch/SearchSuggestionResult$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

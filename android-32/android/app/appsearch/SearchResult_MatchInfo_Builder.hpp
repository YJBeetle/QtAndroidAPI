#pragma once

#include "./SearchResult_MatchInfo.def.hpp"
#include "./SearchResult_MatchRange.def.hpp"
#include "../../../JString.hpp"
#include "./SearchResult_MatchInfo_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SearchResult_MatchInfo_Builder::SearchResult_MatchInfo_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.SearchResult$MatchInfo$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::SearchResult_MatchInfo SearchResult_MatchInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchResult$MatchInfo;"
		);
	}
	inline android::app::appsearch::SearchResult_MatchInfo_Builder SearchResult_MatchInfo_Builder::setExactMatchRange(android::app::appsearch::SearchResult_MatchRange arg0) const
	{
		return callObjectMethod(
			"setExactMatchRange",
			"(Landroid/app/appsearch/SearchResult$MatchRange;)Landroid/app/appsearch/SearchResult$MatchInfo$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchResult_MatchInfo_Builder SearchResult_MatchInfo_Builder::setSnippetRange(android::app::appsearch::SearchResult_MatchRange arg0) const
	{
		return callObjectMethod(
			"setSnippetRange",
			"(Landroid/app/appsearch/SearchResult$MatchRange;)Landroid/app/appsearch/SearchResult$MatchInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

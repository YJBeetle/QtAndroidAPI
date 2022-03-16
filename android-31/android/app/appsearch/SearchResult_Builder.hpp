#pragma once

#include "./GenericDocument.def.hpp"
#include "./SearchResult.def.hpp"
#include "./SearchResult_MatchInfo.def.hpp"
#include "../../../JString.hpp"
#include "./SearchResult_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SearchResult_Builder::SearchResult_Builder(JString arg0, JString arg1)
		: JObject(
			"android.app.appsearch.SearchResult$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::SearchResult_Builder SearchResult_Builder::addMatchInfo(android::app::appsearch::SearchResult_MatchInfo arg0) const
	{
		return callObjectMethod(
			"addMatchInfo",
			"(Landroid/app/appsearch/SearchResult$MatchInfo;)Landroid/app/appsearch/SearchResult$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchResult SearchResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchResult;"
		);
	}
	inline android::app::appsearch::SearchResult_Builder SearchResult_Builder::setGenericDocument(android::app::appsearch::GenericDocument arg0) const
	{
		return callObjectMethod(
			"setGenericDocument",
			"(Landroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/SearchResult$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchResult_Builder SearchResult_Builder::setRankingSignal(jdouble arg0) const
	{
		return callObjectMethod(
			"setRankingSignal",
			"(D)Landroid/app/appsearch/SearchResult$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers


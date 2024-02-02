#pragma once

#include "./PropertyPath.def.hpp"
#include "./SearchResult_MatchRange.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./SearchResult_MatchInfo.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString SearchResult_MatchInfo::getExactMatch() const
	{
		return callObjectMethod(
			"getExactMatch",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::app::appsearch::SearchResult_MatchRange SearchResult_MatchInfo::getExactMatchRange() const
	{
		return callObjectMethod(
			"getExactMatchRange",
			"()Landroid/app/appsearch/SearchResult$MatchRange;"
		);
	}
	inline JString SearchResult_MatchInfo::getFullText() const
	{
		return callObjectMethod(
			"getFullText",
			"()Ljava/lang/String;"
		);
	}
	inline JString SearchResult_MatchInfo::getPropertyPath() const
	{
		return callObjectMethod(
			"getPropertyPath",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::appsearch::PropertyPath SearchResult_MatchInfo::getPropertyPathObject() const
	{
		return callObjectMethod(
			"getPropertyPathObject",
			"()Landroid/app/appsearch/PropertyPath;"
		);
	}
	inline JString SearchResult_MatchInfo::getSnippet() const
	{
		return callObjectMethod(
			"getSnippet",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::app::appsearch::SearchResult_MatchRange SearchResult_MatchInfo::getSnippetRange() const
	{
		return callObjectMethod(
			"getSnippetRange",
			"()Landroid/app/appsearch/SearchResult$MatchRange;"
		);
	}
	inline JString SearchResult_MatchInfo::getSubmatch() const
	{
		return callObjectMethod(
			"getSubmatch",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::app::appsearch::SearchResult_MatchRange SearchResult_MatchInfo::getSubmatchRange() const
	{
		return callObjectMethod(
			"getSubmatchRange",
			"()Landroid/app/appsearch/SearchResult$MatchRange;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

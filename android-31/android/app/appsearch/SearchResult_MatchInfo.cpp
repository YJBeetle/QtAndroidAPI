#include "./SearchResult_MatchRange.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./SearchResult_MatchInfo.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SearchResult_MatchInfo::SearchResult_MatchInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString SearchResult_MatchInfo::getExactMatch() const
	{
		return callObjectMethod(
			"getExactMatch",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::appsearch::SearchResult_MatchRange SearchResult_MatchInfo::getExactMatchRange() const
	{
		return callObjectMethod(
			"getExactMatchRange",
			"()Landroid/app/appsearch/SearchResult$MatchRange;"
		);
	}
	JString SearchResult_MatchInfo::getFullText() const
	{
		return callObjectMethod(
			"getFullText",
			"()Ljava/lang/String;"
		);
	}
	JString SearchResult_MatchInfo::getPropertyPath() const
	{
		return callObjectMethod(
			"getPropertyPath",
			"()Ljava/lang/String;"
		);
	}
	JString SearchResult_MatchInfo::getSnippet() const
	{
		return callObjectMethod(
			"getSnippet",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::appsearch::SearchResult_MatchRange SearchResult_MatchInfo::getSnippetRange() const
	{
		return callObjectMethod(
			"getSnippetRange",
			"()Landroid/app/appsearch/SearchResult$MatchRange;"
		);
	}
} // namespace android::app::appsearch


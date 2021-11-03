#include "./SearchResult_MatchRange.hpp"
#include "./SearchResult_MatchInfo.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	SearchResult_MatchInfo::SearchResult_MatchInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring SearchResult_MatchInfo::getExactMatch()
	{
		return callObjectMethod(
			"getExactMatch",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::app::appsearch::SearchResult_MatchRange SearchResult_MatchInfo::getExactMatchRange()
	{
		return callObjectMethod(
			"getExactMatchRange",
			"()Landroid/app/appsearch/SearchResult$MatchRange;"
		);
	}
	jstring SearchResult_MatchInfo::getFullText()
	{
		return callObjectMethod(
			"getFullText",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchResult_MatchInfo::getPropertyPath()
	{
		return callObjectMethod(
			"getPropertyPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchResult_MatchInfo::getSnippet()
	{
		return callObjectMethod(
			"getSnippet",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::app::appsearch::SearchResult_MatchRange SearchResult_MatchInfo::getSnippetRange()
	{
		return callObjectMethod(
			"getSnippetRange",
			"()Landroid/app/appsearch/SearchResult$MatchRange;"
		);
	}
} // namespace android::app::appsearch


#include "./SearchResult_MatchInfo.hpp"
#include "./SearchResult_MatchRange.hpp"
#include "./SearchResult_MatchInfo_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SearchResult_MatchInfo_Builder::SearchResult_MatchInfo_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SearchResult_MatchInfo_Builder::SearchResult_MatchInfo_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.appsearch.SearchResult$MatchInfo$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::SearchResult_MatchInfo SearchResult_MatchInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchResult$MatchInfo;"
		);
	}
	android::app::appsearch::SearchResult_MatchInfo_Builder SearchResult_MatchInfo_Builder::setExactMatchRange(android::app::appsearch::SearchResult_MatchRange arg0)
	{
		return callObjectMethod(
			"setExactMatchRange",
			"(Landroid/app/appsearch/SearchResult$MatchRange;)Landroid/app/appsearch/SearchResult$MatchInfo$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SearchResult_MatchInfo_Builder SearchResult_MatchInfo_Builder::setSnippetRange(android::app::appsearch::SearchResult_MatchRange arg0)
	{
		return callObjectMethod(
			"setSnippetRange",
			"(Landroid/app/appsearch/SearchResult$MatchRange;)Landroid/app/appsearch/SearchResult$MatchInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::app::appsearch


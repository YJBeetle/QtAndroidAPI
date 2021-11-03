#include "./GenericDocument.hpp"
#include "./SearchResult.hpp"
#include "./SearchResult_MatchInfo.hpp"
#include "./SearchResult_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SearchResult_Builder::SearchResult_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SearchResult_Builder::SearchResult_Builder(jstring arg0, jstring arg1)
		: JObject(
			"android.app.appsearch.SearchResult$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::app::appsearch::SearchResult_Builder SearchResult_Builder::addMatchInfo(android::app::appsearch::SearchResult_MatchInfo arg0)
	{
		return callObjectMethod(
			"addMatchInfo",
			"(Landroid/app/appsearch/SearchResult$MatchInfo;)Landroid/app/appsearch/SearchResult$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SearchResult SearchResult_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchResult;"
		);
	}
	android::app::appsearch::SearchResult_Builder SearchResult_Builder::setGenericDocument(android::app::appsearch::GenericDocument arg0)
	{
		return callObjectMethod(
			"setGenericDocument",
			"(Landroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/SearchResult$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SearchResult_Builder SearchResult_Builder::setRankingSignal(jdouble arg0)
	{
		return callObjectMethod(
			"setRankingSignal",
			"(D)Landroid/app/appsearch/SearchResult$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch


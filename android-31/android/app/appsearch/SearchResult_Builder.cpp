#include "./GenericDocument.hpp"
#include "./SearchResult.hpp"
#include "./SearchResult_MatchInfo.hpp"
#include "../../../JString.hpp"
#include "./SearchResult_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	SearchResult_Builder::SearchResult_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SearchResult_Builder::SearchResult_Builder(JString arg0, JString arg1)
		: JObject(
			"android.app.appsearch.SearchResult$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::SearchResult_Builder SearchResult_Builder::addMatchInfo(android::app::appsearch::SearchResult_MatchInfo arg0) const
	{
		return callObjectMethod(
			"addMatchInfo",
			"(Landroid/app/appsearch/SearchResult$MatchInfo;)Landroid/app/appsearch/SearchResult$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SearchResult SearchResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchResult;"
		);
	}
	android::app::appsearch::SearchResult_Builder SearchResult_Builder::setGenericDocument(android::app::appsearch::GenericDocument arg0) const
	{
		return callObjectMethod(
			"setGenericDocument",
			"(Landroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/SearchResult$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SearchResult_Builder SearchResult_Builder::setRankingSignal(jdouble arg0) const
	{
		return callObjectMethod(
			"setRankingSignal",
			"(D)Landroid/app/appsearch/SearchResult$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch


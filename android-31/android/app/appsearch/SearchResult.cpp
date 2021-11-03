#include "./GenericDocument.hpp"
#include "./SearchResult.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SearchResult::SearchResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring SearchResult::getDatabaseName()
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::app::appsearch::GenericDocument SearchResult::getGenericDocument()
	{
		return callObjectMethod(
			"getGenericDocument",
			"()Landroid/app/appsearch/GenericDocument;"
		);
	}
	JObject SearchResult::getMatchInfos()
	{
		return callObjectMethod(
			"getMatchInfos",
			"()Ljava/util/List;"
		);
	}
	jstring SearchResult::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble SearchResult::getRankingSignal()
	{
		return callMethod<jdouble>(
			"getRankingSignal",
			"()D"
		);
	}
} // namespace android::app::appsearch


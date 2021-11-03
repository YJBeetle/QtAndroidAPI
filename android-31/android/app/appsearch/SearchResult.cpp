#include "./GenericDocument.hpp"
#include "../../../JString.hpp"
#include "./SearchResult.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	SearchResult::SearchResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString SearchResult::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	android::app::appsearch::GenericDocument SearchResult::getGenericDocument() const
	{
		return callObjectMethod(
			"getGenericDocument",
			"()Landroid/app/appsearch/GenericDocument;"
		);
	}
	JObject SearchResult::getMatchInfos() const
	{
		return callObjectMethod(
			"getMatchInfos",
			"()Ljava/util/List;"
		);
	}
	JString SearchResult::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jdouble SearchResult::getRankingSignal() const
	{
		return callMethod<jdouble>(
			"getRankingSignal",
			"()D"
		);
	}
} // namespace android::app::appsearch


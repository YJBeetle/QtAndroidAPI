#include "../../../JString.hpp"
#include "./AppSearchBatchResult.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchBatchResult::AppSearchBatchResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject AppSearchBatchResult::getAll()
	{
		return callObjectMethod(
			"getAll",
			"()Ljava/util/Map;"
		);
	}
	JObject AppSearchBatchResult::getFailures()
	{
		return callObjectMethod(
			"getFailures",
			"()Ljava/util/Map;"
		);
	}
	JObject AppSearchBatchResult::getSuccesses()
	{
		return callObjectMethod(
			"getSuccesses",
			"()Ljava/util/Map;"
		);
	}
	jboolean AppSearchBatchResult::isSuccess()
	{
		return callMethod<jboolean>(
			"isSuccess",
			"()Z"
		);
	}
	JString AppSearchBatchResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch


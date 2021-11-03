#include "../../../JString.hpp"
#include "./AppSearchBatchResult.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchBatchResult::AppSearchBatchResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject AppSearchBatchResult::getAll() const
	{
		return callObjectMethod(
			"getAll",
			"()Ljava/util/Map;"
		);
	}
	JObject AppSearchBatchResult::getFailures() const
	{
		return callObjectMethod(
			"getFailures",
			"()Ljava/util/Map;"
		);
	}
	JObject AppSearchBatchResult::getSuccesses() const
	{
		return callObjectMethod(
			"getSuccesses",
			"()Ljava/util/Map;"
		);
	}
	jboolean AppSearchBatchResult::isSuccess() const
	{
		return callMethod<jboolean>(
			"isSuccess",
			"()Z"
		);
	}
	JString AppSearchBatchResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch


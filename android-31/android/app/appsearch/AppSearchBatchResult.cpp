#include "./AppSearchBatchResult.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchBatchResult::AppSearchBatchResult(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass AppSearchBatchResult::getAll()
	{
		return callObjectMethod(
			"getAll",
			"()Ljava/util/Map;"
		);
	}
	__JniBaseClass AppSearchBatchResult::getFailures()
	{
		return callObjectMethod(
			"getFailures",
			"()Ljava/util/Map;"
		);
	}
	__JniBaseClass AppSearchBatchResult::getSuccesses()
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
	jstring AppSearchBatchResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::appsearch


#include "./AppSearchBatchResult.hpp"
#include "./AppSearchResult.hpp"
#include "./AppSearchBatchResult_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchBatchResult_Builder::AppSearchBatchResult_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchBatchResult_Builder::AppSearchBatchResult_Builder()
		: JObject(
			"android.app.appsearch.AppSearchBatchResult$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::AppSearchBatchResult AppSearchBatchResult_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchBatchResult;"
		);
	}
	android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setFailure(jobject arg0, jint arg1, jstring arg2)
	{
		return callObjectMethod(
			"setFailure",
			"(Ljava/lang/Object;ILjava/lang/String;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setResult(jobject arg0, android::app::appsearch::AppSearchResult arg1)
	{
		return callObjectMethod(
			"setResult",
			"(Ljava/lang/Object;Landroid/app/appsearch/AppSearchResult;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setSuccess(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"setSuccess",
			"(Ljava/lang/Object;Ljava/lang/Object;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::app::appsearch


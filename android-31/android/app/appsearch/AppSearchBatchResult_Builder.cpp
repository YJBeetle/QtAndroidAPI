#include "./AppSearchBatchResult.hpp"
#include "./AppSearchResult.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchBatchResult_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchBatchResult_Builder::AppSearchBatchResult_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchBatchResult_Builder::AppSearchBatchResult_Builder()
		: JObject(
			"android.app.appsearch.AppSearchBatchResult$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::AppSearchBatchResult AppSearchBatchResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchBatchResult;"
		);
	}
	android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setFailure(JObject arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"setFailure",
			"(Ljava/lang/Object;ILjava/lang/String;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0.object<jobject>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setResult(JObject arg0, android::app::appsearch::AppSearchResult arg1) const
	{
		return callObjectMethod(
			"setResult",
			"(Ljava/lang/Object;Landroid/app/appsearch/AppSearchResult;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setSuccess(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setSuccess",
			"(Ljava/lang/Object;Ljava/lang/Object;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::app::appsearch


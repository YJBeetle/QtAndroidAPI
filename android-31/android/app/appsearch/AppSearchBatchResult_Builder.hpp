#pragma once

#include "./AppSearchBatchResult.def.hpp"
#include "./AppSearchResult.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchBatchResult_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchBatchResult_Builder::AppSearchBatchResult_Builder()
		: JObject(
			"android.app.appsearch.AppSearchBatchResult$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchBatchResult AppSearchBatchResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchBatchResult;"
		);
	}
	inline android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setFailure(JObject arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"setFailure",
			"(Ljava/lang/Object;ILjava/lang/String;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0.object<jobject>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setResult(JObject arg0, android::app::appsearch::AppSearchResult arg1) const
	{
		return callObjectMethod(
			"setResult",
			"(Ljava/lang/Object;Landroid/app/appsearch/AppSearchResult;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::AppSearchBatchResult_Builder AppSearchBatchResult_Builder::setSuccess(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setSuccess",
			"(Ljava/lang/Object;Ljava/lang/Object;)Landroid/app/appsearch/AppSearchBatchResult$Builder;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

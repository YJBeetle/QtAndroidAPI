#pragma once

#include "./GetByDocumentIdRequest.def.hpp"
#include "./SearchResults.def.hpp"
#include "./SearchSpec.def.hpp"
#include "../../../JString.hpp"
#include "./EnterpriseGlobalSearchSession.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void EnterpriseGlobalSearchSession::getByDocumentId(JString arg0, JString arg1, android::app::appsearch::GetByDocumentIdRequest arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"getByDocumentId",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/app/appsearch/GetByDocumentIdRequest;Ljava/util/concurrent/Executor;Landroid/app/appsearch/BatchResultCallback;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void EnterpriseGlobalSearchSession::getSchema(JString arg0, JString arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"getSchema",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::app::appsearch::SearchResults EnterpriseGlobalSearchSession::search(JString arg0, android::app::appsearch::SearchSpec arg1) const
	{
		return callObjectMethod(
			"search",
			"(Ljava/lang/String;Landroid/app/appsearch/SearchSpec;)Landroid/app/appsearch/SearchResults;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

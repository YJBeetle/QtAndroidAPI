#pragma once

#include "./AppSearchManager_SearchContext.def.hpp"
#include "./AppSearchManager.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void AppSearchManager::createGlobalSearchSession(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"createGlobalSearchSession",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AppSearchManager::createSearchSession(android::app::appsearch::AppSearchManager_SearchContext arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"createSearchSession",
			"(Landroid/app/appsearch/AppSearchManager$SearchContext;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif

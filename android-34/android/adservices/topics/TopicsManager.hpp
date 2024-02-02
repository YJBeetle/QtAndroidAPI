#pragma once

#include "./GetTopicsRequest.def.hpp"
#include "../../content/Context.def.hpp"
#include "./TopicsManager.def.hpp"

namespace android::adservices::topics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::adservices::topics::TopicsManager TopicsManager::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.topics.TopicsManager",
			"get",
			"(Landroid/content/Context;)Landroid/adservices/topics/TopicsManager;",
			arg0.object()
		);
	}
	inline void TopicsManager::getTopics(android::adservices::topics::GetTopicsRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getTopics",
			"(Landroid/adservices/topics/GetTopicsRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::adservices::topics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::topics;
#endif

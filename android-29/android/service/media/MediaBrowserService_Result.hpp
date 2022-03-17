#pragma once

#include "./MediaBrowserService.def.hpp"
#include "../../../JObject.hpp"
#include "./MediaBrowserService_Result.def.hpp"

namespace android::service::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaBrowserService_Result::detach() const
	{
		callMethod<void>(
			"detach",
			"()V"
		);
	}
	inline void MediaBrowserService_Result::sendResult(JObject arg0) const
	{
		callMethod<void>(
			"sendResult",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::service::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::media;
#endif

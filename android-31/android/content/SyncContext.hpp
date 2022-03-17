#pragma once

#include "./SyncResult.def.hpp"
#include "./SyncContext.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SyncContext::getSyncContextBinder() const
	{
		return callObjectMethod(
			"getSyncContextBinder",
			"()Landroid/os/IBinder;"
		);
	}
	inline void SyncContext::onFinished(android::content::SyncResult arg0) const
	{
		callMethod<void>(
			"onFinished",
			"(Landroid/content/SyncResult;)V",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif

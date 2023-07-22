#pragma once

#include "../../../../JString.hpp"
#include "./TvInteractiveAppManager_TvInteractiveAppCallback.def.hpp"

namespace android::media::tv::interactive
{
	// Fields
	
	// Constructors
	inline TvInteractiveAppManager_TvInteractiveAppCallback::TvInteractiveAppManager_TvInteractiveAppCallback()
		: JObject(
			"android.media.tv.interactive.TvInteractiveAppManager$TvInteractiveAppCallback",
			"()V"
		) {}
	
	// Methods
	inline void TvInteractiveAppManager_TvInteractiveAppCallback::onInteractiveAppServiceAdded(JString arg0) const
	{
		callMethod<void>(
			"onInteractiveAppServiceAdded",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppManager_TvInteractiveAppCallback::onInteractiveAppServiceRemoved(JString arg0) const
	{
		callMethod<void>(
			"onInteractiveAppServiceRemoved",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppManager_TvInteractiveAppCallback::onInteractiveAppServiceUpdated(JString arg0) const
	{
		callMethod<void>(
			"onInteractiveAppServiceUpdated",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppManager_TvInteractiveAppCallback::onTvInteractiveAppServiceStateChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onTvInteractiveAppServiceStateChanged",
			"(Ljava/lang/String;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media::tv::interactive

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif

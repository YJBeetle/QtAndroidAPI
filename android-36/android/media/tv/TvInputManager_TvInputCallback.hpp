#pragma once

#include "./TvInputInfo.def.hpp"
#include "../../../JString.hpp"
#include "./TvInputManager_TvInputCallback.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvInputManager_TvInputCallback::TvInputManager_TvInputCallback()
		: JObject(
			"android.media.tv.TvInputManager$TvInputCallback",
			"()V"
		) {}
	
	// Methods
	inline void TvInputManager_TvInputCallback::onInputAdded(JString arg0) const
	{
		callMethod<void>(
			"onInputAdded",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInputManager_TvInputCallback::onInputRemoved(JString arg0) const
	{
		callMethod<void>(
			"onInputRemoved",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInputManager_TvInputCallback::onInputStateChanged(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onInputStateChanged",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvInputManager_TvInputCallback::onInputUpdated(JString arg0) const
	{
		callMethod<void>(
			"onInputUpdated",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInputManager_TvInputCallback::onTvInputInfoUpdated(android::media::tv::TvInputInfo arg0) const
	{
		callMethod<void>(
			"onTvInputInfoUpdated",
			"(Landroid/media/tv/TvInputInfo;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif

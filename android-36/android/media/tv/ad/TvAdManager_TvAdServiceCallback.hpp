#pragma once

#include "../../../../JString.hpp"
#include "./TvAdManager_TvAdServiceCallback.def.hpp"

namespace android::media::tv::ad
{
	// Fields
	
	// Constructors
	inline TvAdManager_TvAdServiceCallback::TvAdManager_TvAdServiceCallback()
		: JObject(
			"android.media.tv.ad.TvAdManager$TvAdServiceCallback",
			"()V"
		) {}
	
	// Methods
	inline void TvAdManager_TvAdServiceCallback::onAdServiceAdded(JString arg0) const
	{
		callMethod<void>(
			"onAdServiceAdded",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvAdManager_TvAdServiceCallback::onAdServiceRemoved(JString arg0) const
	{
		callMethod<void>(
			"onAdServiceRemoved",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvAdManager_TvAdServiceCallback::onAdServiceUpdated(JString arg0) const
	{
		callMethod<void>(
			"onAdServiceUpdated",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::media::tv::ad

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::ad;
#endif

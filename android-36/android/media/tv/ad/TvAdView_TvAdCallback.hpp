#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../../JString.hpp"
#include "./TvAdView_TvAdCallback.def.hpp"

namespace android::media::tv::ad
{
	// Fields
	
	// Constructors
	inline TvAdView_TvAdCallback::TvAdView_TvAdCallback()
		: JObject(
			"android.media.tv.ad.TvAdView$TvAdCallback",
			"()V"
		) {}
	
	// Methods
	inline void TvAdView_TvAdCallback::onRequestCurrentChannelUri(JString arg0) const
	{
		callMethod<void>(
			"onRequestCurrentChannelUri",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvAdView_TvAdCallback::onRequestCurrentTvInputId(JString arg0) const
	{
		callMethod<void>(
			"onRequestCurrentTvInputId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvAdView_TvAdCallback::onRequestCurrentVideoBounds(JString arg0) const
	{
		callMethod<void>(
			"onRequestCurrentVideoBounds",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvAdView_TvAdCallback::onRequestSigning(JString arg0, JString arg1, JString arg2, JString arg3, JByteArray arg4) const
	{
		callMethod<void>(
			"onRequestSigning",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jbyteArray>()
		);
	}
	inline void TvAdView_TvAdCallback::onRequestTrackInfoList(JString arg0) const
	{
		callMethod<void>(
			"onRequestTrackInfoList",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvAdView_TvAdCallback::onStateChanged(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onStateChanged",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
} // namespace android::media::tv::ad

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::ad;
#endif

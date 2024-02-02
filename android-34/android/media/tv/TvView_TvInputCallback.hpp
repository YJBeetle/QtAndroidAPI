#pragma once

#include "../../../JFloatArray.hpp"
#include "./AitInfo.def.hpp"
#include "./TvContentRating.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./TvView_TvInputCallback.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvView_TvInputCallback::TvView_TvInputCallback()
		: JObject(
			"android.media.tv.TvView$TvInputCallback",
			"()V"
		) {}
	
	// Methods
	inline void TvView_TvInputCallback::onAitInfoUpdated(JString arg0, android::media::tv::AitInfo arg1) const
	{
		callMethod<void>(
			"onAitInfoUpdated",
			"(Ljava/lang/String;Landroid/media/tv/AitInfo;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView_TvInputCallback::onAudioPresentationSelected(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onAudioPresentationSelected",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void TvView_TvInputCallback::onAudioPresentationsChanged(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"onAudioPresentationsChanged",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView_TvInputCallback::onAvailableSpeeds(JString arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"onAvailableSpeeds",
			"(Ljava/lang/String;[F)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	inline void TvView_TvInputCallback::onChannelRetuned(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"onChannelRetuned",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView_TvInputCallback::onConnectionFailed(JString arg0) const
	{
		callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvView_TvInputCallback::onContentAllowed(JString arg0) const
	{
		callMethod<void>(
			"onContentAllowed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvView_TvInputCallback::onContentBlocked(JString arg0, android::media::tv::TvContentRating arg1) const
	{
		callMethod<void>(
			"onContentBlocked",
			"(Ljava/lang/String;Landroid/media/tv/TvContentRating;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView_TvInputCallback::onCueingMessageAvailability(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onCueingMessageAvailability",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvView_TvInputCallback::onDisconnected(JString arg0) const
	{
		callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvView_TvInputCallback::onSignalStrengthUpdated(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onSignalStrengthUpdated",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvView_TvInputCallback::onTimeShiftMode(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onTimeShiftMode",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvView_TvInputCallback::onTimeShiftStatusChanged(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onTimeShiftStatusChanged",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvView_TvInputCallback::onTrackSelected(JString arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"onTrackSelected",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline void TvView_TvInputCallback::onTracksChanged(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"onTracksChanged",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView_TvInputCallback::onTuned(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"onTuned",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView_TvInputCallback::onTvMessage(JString arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onTvMessage",
			"(Ljava/lang/String;ILandroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline void TvView_TvInputCallback::onVideoAvailable(JString arg0) const
	{
		callMethod<void>(
			"onVideoAvailable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvView_TvInputCallback::onVideoSizeChanged(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onVideoSizeChanged",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void TvView_TvInputCallback::onVideoUnavailable(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onVideoUnavailable",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif

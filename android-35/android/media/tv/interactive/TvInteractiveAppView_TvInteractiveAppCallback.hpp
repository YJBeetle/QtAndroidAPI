#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../graphics/Rect.def.hpp"
#include "../TvRecordingInfo.def.hpp"
#include "../../../net/Uri.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../../JString.hpp"
#include "./TvInteractiveAppView_TvInteractiveAppCallback.def.hpp"

namespace android::media::tv::interactive
{
	// Fields
	
	// Constructors
	inline TvInteractiveAppView_TvInteractiveAppCallback::TvInteractiveAppView_TvInteractiveAppCallback()
		: JObject(
			"android.media.tv.interactive.TvInteractiveAppView$TvInteractiveAppCallback",
			"()V"
		) {}
	
	// Methods
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onBiInteractiveAppCreated(JString arg0, android::net::Uri arg1, JString arg2) const
	{
		callMethod<void>(
			"onBiInteractiveAppCreated",
			"(Ljava/lang/String;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onPlaybackCommandRequest(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onPlaybackCommandRequest",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestAvailableSpeeds(JString arg0) const
	{
		callMethod<void>(
			"onRequestAvailableSpeeds",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestCurrentChannelLcn(JString arg0) const
	{
		callMethod<void>(
			"onRequestCurrentChannelLcn",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestCurrentChannelUri(JString arg0) const
	{
		callMethod<void>(
			"onRequestCurrentChannelUri",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestCurrentTvInputId(JString arg0) const
	{
		callMethod<void>(
			"onRequestCurrentTvInputId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestCurrentVideoBounds(JString arg0) const
	{
		callMethod<void>(
			"onRequestCurrentVideoBounds",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestScheduleRecording(JString arg0, JString arg1, JString arg2, android::net::Uri arg3, android::net::Uri arg4, android::os::Bundle arg5) const
	{
		callMethod<void>(
			"onRequestScheduleRecording",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestScheduleRecording(JString arg0, JString arg1, JString arg2, android::net::Uri arg3, jlong arg4, jlong arg5, jint arg6, android::os::Bundle arg7) const
	{
		callMethod<void>(
			"onRequestScheduleRecording",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;JJILandroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestSigning(JString arg0, JString arg1, JString arg2, JString arg3, JByteArray arg4) const
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
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestStartRecording(JString arg0, JString arg1, android::net::Uri arg2) const
	{
		callMethod<void>(
			"onRequestStartRecording",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestStopRecording(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"onRequestStopRecording",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestStreamVolume(JString arg0) const
	{
		callMethod<void>(
			"onRequestStreamVolume",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestTimeShiftMode(JString arg0) const
	{
		callMethod<void>(
			"onRequestTimeShiftMode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestTrackInfoList(JString arg0) const
	{
		callMethod<void>(
			"onRequestTrackInfoList",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestTvRecordingInfo(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"onRequestTvRecordingInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestTvRecordingInfoList(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onRequestTvRecordingInfoList",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onSetTvRecordingInfo(JString arg0, JString arg1, android::media::tv::TvRecordingInfo arg2) const
	{
		callMethod<void>(
			"onSetTvRecordingInfo",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/media/tv/TvRecordingInfo;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onSetVideoBounds(JString arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"onSetVideoBounds",
			"(Ljava/lang/String;Landroid/graphics/Rect;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onStateChanged(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onStateChanged",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onTeletextAppStateChanged(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onTeletextAppStateChanged",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onTimeShiftCommandRequest(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onTimeShiftCommandRequest",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::media::tv::interactive

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif

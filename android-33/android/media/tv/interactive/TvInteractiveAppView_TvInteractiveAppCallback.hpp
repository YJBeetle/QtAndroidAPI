#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../graphics/Rect.def.hpp"
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
	inline void TvInteractiveAppView_TvInteractiveAppCallback::onRequestStreamVolume(JString arg0) const
	{
		callMethod<void>(
			"onRequestStreamVolume",
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
} // namespace android::media::tv::interactive

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif

#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../content/Context.def.hpp"
#include "../../../graphics/Rect.def.hpp"
#include "../AdRequest.def.hpp"
#include "../AdResponse.def.hpp"
#include "../BroadcastInfoRequest.def.hpp"
#include "../BroadcastInfoResponse.def.hpp"
#include "../TvContentRating.def.hpp"
#include "../../../net/Uri.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../view/KeyEvent.def.hpp"
#include "../../../view/MotionEvent.def.hpp"
#include "../../../view/Surface.def.hpp"
#include "../../../view/View.def.hpp"
#include "../../../../JString.hpp"
#include "./TvInteractiveAppService_Session.def.hpp"

namespace android::media::tv::interactive
{
	// Fields
	
	// Constructors
	inline TvInteractiveAppService_Session::TvInteractiveAppService_Session(android::content::Context arg0)
		: JObject(
			"android.media.tv.interactive.TvInteractiveAppService$Session",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean TvInteractiveAppService_Session::isMediaViewEnabled() const
	{
		return callMethod<jboolean>(
			"isMediaViewEnabled",
			"()Z"
		);
	}
	inline void TvInteractiveAppService_Session::layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"layoutSurface",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void TvInteractiveAppService_Session::notifyBiInteractiveAppCreated(android::net::Uri arg0, JString arg1) const
	{
		callMethod<void>(
			"notifyBiInteractiveAppCreated",
			"(Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void TvInteractiveAppService_Session::notifySessionStateChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"notifySessionStateChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void TvInteractiveAppService_Session::notifyTeletextAppStateChanged(jint arg0) const
	{
		callMethod<void>(
			"notifyTeletextAppStateChanged",
			"(I)V",
			arg0
		);
	}
	inline void TvInteractiveAppService_Session::onAdResponse(android::media::tv::AdResponse arg0) const
	{
		callMethod<void>(
			"onAdResponse",
			"(Landroid/media/tv/AdResponse;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onBroadcastInfoResponse(android::media::tv::BroadcastInfoResponse arg0) const
	{
		callMethod<void>(
			"onBroadcastInfoResponse",
			"(Landroid/media/tv/BroadcastInfoResponse;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onContentAllowed() const
	{
		callMethod<void>(
			"onContentAllowed",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::onContentBlocked(android::media::tv::TvContentRating arg0) const
	{
		callMethod<void>(
			"onContentBlocked",
			"(Landroid/media/tv/TvContentRating;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onCreateBiInteractiveAppRequest(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onCreateBiInteractiveAppRequest",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::View TvInteractiveAppService_Session::onCreateMediaView() const
	{
		return callObjectMethod(
			"onCreateMediaView",
			"()Landroid/view/View;"
		);
	}
	inline void TvInteractiveAppService_Session::onCurrentChannelLcn(jint arg0) const
	{
		callMethod<void>(
			"onCurrentChannelLcn",
			"(I)V",
			arg0
		);
	}
	inline void TvInteractiveAppService_Session::onCurrentChannelUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onCurrentChannelUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onCurrentTvInputId(JString arg0) const
	{
		callMethod<void>(
			"onCurrentTvInputId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppService_Session::onDestroyBiInteractiveAppRequest(JString arg0) const
	{
		callMethod<void>(
			"onDestroyBiInteractiveAppRequest",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppService_Session::onError(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean TvInteractiveAppService_Session::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TvInteractiveAppService_Session::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TvInteractiveAppService_Session::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TvInteractiveAppService_Session::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean TvInteractiveAppService_Session::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void TvInteractiveAppService_Session::onMediaViewSizeChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onMediaViewSizeChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void TvInteractiveAppService_Session::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::onResetInteractiveApp() const
	{
		callMethod<void>(
			"onResetInteractiveApp",
			"()V"
		);
	}
	inline jboolean TvInteractiveAppService_Session::onSetSurface(android::view::Surface arg0) const
	{
		return callMethod<jboolean>(
			"onSetSurface",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onSetTeletextAppEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"onSetTeletextAppEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TvInteractiveAppService_Session::onSignalStrength(jint arg0) const
	{
		callMethod<void>(
			"onSignalStrength",
			"(I)V",
			arg0
		);
	}
	inline void TvInteractiveAppService_Session::onSigningResult(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"onSigningResult",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void TvInteractiveAppService_Session::onStartInteractiveApp() const
	{
		callMethod<void>(
			"onStartInteractiveApp",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::onStopInteractiveApp() const
	{
		callMethod<void>(
			"onStopInteractiveApp",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::onStreamVolume(jfloat arg0) const
	{
		callMethod<void>(
			"onStreamVolume",
			"(F)V",
			arg0
		);
	}
	inline void TvInteractiveAppService_Session::onSurfaceChanged(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onSurfaceChanged",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean TvInteractiveAppService_Session::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onTrackInfoList(JObject arg0) const
	{
		callMethod<void>(
			"onTrackInfoList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onTrackSelected(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onTrackSelected",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline jboolean TvInteractiveAppService_Session::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onTracksChanged(JObject arg0) const
	{
		callMethod<void>(
			"onTracksChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onTuned(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onTuned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::onVideoAvailable() const
	{
		callMethod<void>(
			"onVideoAvailable",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::onVideoUnavailable(jint arg0) const
	{
		callMethod<void>(
			"onVideoUnavailable",
			"(I)V",
			arg0
		);
	}
	inline void TvInteractiveAppService_Session::removeBroadcastInfo(jint arg0) const
	{
		callMethod<void>(
			"removeBroadcastInfo",
			"(I)V",
			arg0
		);
	}
	inline void TvInteractiveAppService_Session::requestAd(android::media::tv::AdRequest arg0) const
	{
		callMethod<void>(
			"requestAd",
			"(Landroid/media/tv/AdRequest;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::requestBroadcastInfo(android::media::tv::BroadcastInfoRequest arg0) const
	{
		callMethod<void>(
			"requestBroadcastInfo",
			"(Landroid/media/tv/BroadcastInfoRequest;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService_Session::requestCurrentChannelLcn() const
	{
		callMethod<void>(
			"requestCurrentChannelLcn",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::requestCurrentChannelUri() const
	{
		callMethod<void>(
			"requestCurrentChannelUri",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::requestCurrentTvInputId() const
	{
		callMethod<void>(
			"requestCurrentTvInputId",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::requestSigning(JString arg0, JString arg1, JString arg2, JByteArray arg3) const
	{
		callMethod<void>(
			"requestSigning",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jbyteArray>()
		);
	}
	inline void TvInteractiveAppService_Session::requestStreamVolume() const
	{
		callMethod<void>(
			"requestStreamVolume",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::requestTrackInfoList() const
	{
		callMethod<void>(
			"requestTrackInfoList",
			"()V"
		);
	}
	inline void TvInteractiveAppService_Session::sendPlaybackCommandRequest(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendPlaybackCommandRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppService_Session::setMediaViewEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setMediaViewEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TvInteractiveAppService_Session::setVideoBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setVideoBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv::interactive

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif

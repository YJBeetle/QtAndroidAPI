#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../content/Context.def.hpp"
#include "../../../graphics/Rect.def.hpp"
#include "../../../net/Uri.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../view/KeyEvent.def.hpp"
#include "../../../view/MotionEvent.def.hpp"
#include "../../../view/Surface.def.hpp"
#include "../../../view/View.def.hpp"
#include "../../../../JString.hpp"
#include "./TvAdService_Session.def.hpp"

namespace android::media::tv::ad
{
	// Fields
	
	// Constructors
	inline TvAdService_Session::TvAdService_Session(android::content::Context arg0)
		: JObject(
			"android.media.tv.ad.TvAdService$Session",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean TvAdService_Session::isMediaViewEnabled() const
	{
		return callMethod<jboolean>(
			"isMediaViewEnabled",
			"()Z"
		);
	}
	inline void TvAdService_Session::layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void TvAdService_Session::notifySessionStateChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"notifySessionStateChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline android::view::View TvAdService_Session::onCreateMediaView() const
	{
		return callObjectMethod(
			"onCreateMediaView",
			"()Landroid/view/View;"
		);
	}
	inline void TvAdService_Session::onCurrentChannelUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onCurrentChannelUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvAdService_Session::onCurrentTvInputId(JString arg0) const
	{
		callMethod<void>(
			"onCurrentTvInputId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvAdService_Session::onCurrentVideoBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"onCurrentVideoBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void TvAdService_Session::onError(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean TvAdService_Session::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TvAdService_Session::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TvAdService_Session::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TvAdService_Session::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean TvAdService_Session::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void TvAdService_Session::onMediaViewSizeChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onMediaViewSizeChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void TvAdService_Session::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	inline void TvAdService_Session::onResetAdService() const
	{
		callMethod<void>(
			"onResetAdService",
			"()V"
		);
	}
	inline jboolean TvAdService_Session::onSetSurface(android::view::Surface arg0) const
	{
		return callMethod<jboolean>(
			"onSetSurface",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
	inline void TvAdService_Session::onSigningResult(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"onSigningResult",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void TvAdService_Session::onStartAdService() const
	{
		callMethod<void>(
			"onStartAdService",
			"()V"
		);
	}
	inline void TvAdService_Session::onStopAdService() const
	{
		callMethod<void>(
			"onStopAdService",
			"()V"
		);
	}
	inline void TvAdService_Session::onSurfaceChanged(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onSurfaceChanged",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean TvAdService_Session::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void TvAdService_Session::onTrackInfoList(JObject arg0) const
	{
		callMethod<void>(
			"onTrackInfoList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline jboolean TvAdService_Session::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void TvAdService_Session::onTvInputSessionData(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onTvInputSessionData",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvAdService_Session::onTvMessage(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onTvMessage",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	inline void TvAdService_Session::requestCurrentChannelUri() const
	{
		callMethod<void>(
			"requestCurrentChannelUri",
			"()V"
		);
	}
	inline void TvAdService_Session::requestCurrentTvInputId() const
	{
		callMethod<void>(
			"requestCurrentTvInputId",
			"()V"
		);
	}
	inline void TvAdService_Session::requestCurrentVideoBounds() const
	{
		callMethod<void>(
			"requestCurrentVideoBounds",
			"()V"
		);
	}
	inline void TvAdService_Session::requestSigning(JString arg0, JString arg1, JString arg2, JByteArray arg3) const
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
	inline void TvAdService_Session::requestTrackInfoList() const
	{
		callMethod<void>(
			"requestTrackInfoList",
			"()V"
		);
	}
	inline void TvAdService_Session::sendTvAdSessionData(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendTvAdSessionData",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvAdService_Session::setMediaViewEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setMediaViewEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::media::tv::ad

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::ad;
#endif

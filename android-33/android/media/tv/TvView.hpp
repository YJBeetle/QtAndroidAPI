#pragma once

#include "../../content/Context.def.hpp"
#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Region.def.hpp"
#include "../PlaybackParams.def.hpp"
#include "./TvView_TimeShiftPositionCallback.def.hpp"
#include "./TvView_TvInputCallback.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../view/InputEvent.def.hpp"
#include "../../view/KeyEvent.def.hpp"
#include "../../view/MotionEvent.def.hpp"
#include "../../view/View.def.hpp"
#include "../../../JString.hpp"
#include "./TvView.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvView::TvView(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.media.tv.TvView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TvView::TvView(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.media.tv.TvView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TvView::TvView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.media.tv.TvView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline jboolean TvView::dispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TvView::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TvView::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TvView::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TvView::dispatchUnhandledInputEvent(android::view::InputEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.object()
		);
	}
	inline void TvView::dispatchWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline void TvView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jboolean TvView::gatherTransparentRegion(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	inline JString TvView::getSelectedTrack(jint arg0) const
	{
		return callObjectMethod(
			"getSelectedTrack",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JObject TvView::getTracks(jint arg0) const
	{
		return callObjectMethod(
			"getTracks",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline jboolean TvView::onUnhandledInputEvent(android::view::InputEvent arg0) const
	{
		return callMethod<jboolean>(
			"onUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.object()
		);
	}
	inline void TvView::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void TvView::selectTrack(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"selectTrack",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void TvView::sendAppPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView::setCallback(android::media::tv::TvView_TvInputCallback arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/tv/TvView$TvInputCallback;)V",
			arg0.object()
		);
	}
	inline void TvView::setCaptionEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setCaptionEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TvView::setInteractiveAppNotificationEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setInteractiveAppNotificationEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TvView::setOnUnhandledInputEventListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnUnhandledInputEventListener",
			"(Landroid/media/tv/TvView$OnUnhandledInputEventListener;)V",
			arg0.object()
		);
	}
	inline void TvView::setStreamVolume(jfloat arg0) const
	{
		callMethod<void>(
			"setStreamVolume",
			"(F)V",
			arg0
		);
	}
	inline void TvView::setTimeShiftPositionCallback(android::media::tv::TvView_TimeShiftPositionCallback arg0) const
	{
		callMethod<void>(
			"setTimeShiftPositionCallback",
			"(Landroid/media/tv/TvView$TimeShiftPositionCallback;)V",
			arg0.object()
		);
	}
	inline void TvView::setZOrderMediaOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	inline void TvView::setZOrderOnTop(jboolean arg0) const
	{
		callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
	inline void TvView::timeShiftPause() const
	{
		callMethod<void>(
			"timeShiftPause",
			"()V"
		);
	}
	inline void TvView::timeShiftPlay(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"timeShiftPlay",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView::timeShiftResume() const
	{
		callMethod<void>(
			"timeShiftResume",
			"()V"
		);
	}
	inline void TvView::timeShiftSeekTo(jlong arg0) const
	{
		callMethod<void>(
			"timeShiftSeekTo",
			"(J)V",
			arg0
		);
	}
	inline void TvView::timeShiftSetPlaybackParams(android::media::PlaybackParams arg0) const
	{
		callMethod<void>(
			"timeShiftSetPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	inline void TvView::tune(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvView::tune(JString arg0, android::net::Uri arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::media::tv

// Base class headers
#include "../../view/View.hpp"
#include "../../view/ViewGroup.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif

#include "../../content/Context.hpp"
#include "../../graphics/Canvas.hpp"
#include "../../graphics/Region.hpp"
#include "../PlaybackParams.hpp"
#include "./TvView_TimeShiftPositionCallback.hpp"
#include "./TvView_TvInputCallback.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../view/InputEvent.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/View.hpp"
#include "./TvView.hpp"

namespace android::media::tv
{
	// Fields
	
	// QJniObject forward
	TvView::TvView(QJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	TvView::TvView(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.media.tv.TvView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TvView::TvView(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::ViewGroup(
			"android.media.tv.TvView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TvView::TvView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::view::ViewGroup(
			"android.media.tv.TvView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jboolean TvView::dispatchGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TvView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean TvView::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TvView::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TvView::dispatchUnhandledInputEvent(android::view::InputEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.object()
		);
	}
	void TvView::dispatchWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void TvView::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean TvView::gatherTransparentRegion(android::graphics::Region arg0)
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	jstring TvView::getSelectedTrack(jint arg0)
	{
		return callObjectMethod(
			"getSelectedTrack",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass TvView::getTracks(jint arg0)
	{
		return callObjectMethod(
			"getTracks",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jboolean TvView::onUnhandledInputEvent(android::view::InputEvent arg0)
	{
		return callMethod<jboolean>(
			"onUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.object()
		);
	}
	void TvView::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void TvView::selectTrack(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"selectTrack",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void TvView::sendAppPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void TvView::setCallback(android::media::tv::TvView_TvInputCallback arg0)
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/tv/TvView$TvInputCallback;)V",
			arg0.object()
		);
	}
	void TvView::setCaptionEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setCaptionEnabled",
			"(Z)V",
			arg0
		);
	}
	void TvView::setOnUnhandledInputEventListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnUnhandledInputEventListener",
			"(Landroid/media/tv/TvView$OnUnhandledInputEventListener;)V",
			arg0.object()
		);
	}
	void TvView::setStreamVolume(jfloat arg0)
	{
		callMethod<void>(
			"setStreamVolume",
			"(F)V",
			arg0
		);
	}
	void TvView::setTimeShiftPositionCallback(android::media::tv::TvView_TimeShiftPositionCallback arg0)
	{
		callMethod<void>(
			"setTimeShiftPositionCallback",
			"(Landroid/media/tv/TvView$TimeShiftPositionCallback;)V",
			arg0.object()
		);
	}
	void TvView::setZOrderMediaOverlay(jboolean arg0)
	{
		callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	void TvView::setZOrderOnTop(jboolean arg0)
	{
		callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
	void TvView::timeShiftPause()
	{
		callMethod<void>(
			"timeShiftPause",
			"()V"
		);
	}
	void TvView::timeShiftPlay(jstring arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"timeShiftPlay",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void TvView::timeShiftResume()
	{
		callMethod<void>(
			"timeShiftResume",
			"()V"
		);
	}
	void TvView::timeShiftSeekTo(jlong arg0)
	{
		callMethod<void>(
			"timeShiftSeekTo",
			"(J)V",
			arg0
		);
	}
	void TvView::timeShiftSetPlaybackParams(android::media::PlaybackParams arg0)
	{
		callMethod<void>(
			"timeShiftSetPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	void TvView::tune(jstring arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void TvView::tune(jstring arg0, android::net::Uri arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::media::tv


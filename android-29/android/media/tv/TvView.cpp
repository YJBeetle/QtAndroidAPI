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
	
	TvView::TvView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvView::TvView(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TvView::TvView(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TvView::TvView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	jboolean TvView::dispatchGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::dispatchUnhandledInputEvent(android::view::InputEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TvView::dispatchWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void TvView::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TvView::gatherTransparentRegion(android::graphics::Region arg0)
	{
		return __thiz.callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring TvView::getSelectedTrack(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSelectedTrack",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject TvView::getTracks(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTracks",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jboolean TvView::onUnhandledInputEvent(android::view::InputEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TvView::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void TvView::selectTrack(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"selectTrack",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void TvView::sendAppPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView::setCallback(android::media::tv::TvView_TvInputCallback arg0)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/media/tv/TvView$TvInputCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::setCaptionEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCaptionEnabled",
			"(Z)V",
			arg0
		);
	}
	void TvView::setOnUnhandledInputEventListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnUnhandledInputEventListener",
			"(Landroid/media/tv/TvView$OnUnhandledInputEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::setStreamVolume(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setStreamVolume",
			"(F)V",
			arg0
		);
	}
	void TvView::setTimeShiftPositionCallback(android::media::tv::TvView_TimeShiftPositionCallback arg0)
	{
		__thiz.callMethod<void>(
			"setTimeShiftPositionCallback",
			"(Landroid/media/tv/TvView$TimeShiftPositionCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::setZOrderMediaOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	void TvView::setZOrderOnTop(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
	void TvView::timeShiftPause()
	{
		__thiz.callMethod<void>(
			"timeShiftPause",
			"()V"
		);
	}
	void TvView::timeShiftPlay(jstring arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"timeShiftPlay",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView::timeShiftResume()
	{
		__thiz.callMethod<void>(
			"timeShiftResume",
			"()V"
		);
	}
	void TvView::timeShiftSeekTo(jlong arg0)
	{
		__thiz.callMethod<void>(
			"timeShiftSeekTo",
			"(J)V",
			arg0
		);
	}
	void TvView::timeShiftSetPlaybackParams(android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"timeShiftSetPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object()
		);
	}
	void TvView::tune(jstring arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvView::tune(jstring arg0, android::net::Uri arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::media::tv


#include "../../content/Context.hpp"
#include "../PlaybackParams.hpp"
#include "./TvContentRating.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/Surface.hpp"
#include "../../view/View.hpp"
#include "../../../JString.hpp"
#include "./TvInputService_Session.hpp"

namespace android::media::tv
{
	// Fields
	
	// QJniObject forward
	TvInputService_Session::TvInputService_Session(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvInputService_Session::TvInputService_Session(android::content::Context arg0)
		: JObject(
			"android.media.tv.TvInputService$Session",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void TvInputService_Session::layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void TvInputService_Session::notifyChannelRetuned(android::net::Uri arg0) const
	{
		callMethod<void>(
			"notifyChannelRetuned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_Session::notifyContentAllowed() const
	{
		callMethod<void>(
			"notifyContentAllowed",
			"()V"
		);
	}
	void TvInputService_Session::notifyContentBlocked(android::media::tv::TvContentRating arg0) const
	{
		callMethod<void>(
			"notifyContentBlocked",
			"(Landroid/media/tv/TvContentRating;)V",
			arg0.object()
		);
	}
	void TvInputService_Session::notifyTimeShiftStatusChanged(jint arg0) const
	{
		callMethod<void>(
			"notifyTimeShiftStatusChanged",
			"(I)V",
			arg0
		);
	}
	void TvInputService_Session::notifyTrackSelected(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"notifyTrackSelected",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void TvInputService_Session::notifyTracksChanged(JObject arg0) const
	{
		callMethod<void>(
			"notifyTracksChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void TvInputService_Session::notifyVideoAvailable() const
	{
		callMethod<void>(
			"notifyVideoAvailable",
			"()V"
		);
	}
	void TvInputService_Session::notifyVideoUnavailable(jint arg0) const
	{
		callMethod<void>(
			"notifyVideoUnavailable",
			"(I)V",
			arg0
		);
	}
	void TvInputService_Session::onAppPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::view::View TvInputService_Session::onCreateOverlayView() const
	{
		return callObjectMethod(
			"onCreateOverlayView",
			"()Landroid/view/View;"
		);
	}
	jboolean TvInputService_Session::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TvInputService_Session::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TvInputService_Session::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TvInputService_Session::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean TvInputService_Session::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void TvInputService_Session::onOverlayViewSizeChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onOverlayViewSizeChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void TvInputService_Session::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	jboolean TvInputService_Session::onSelectTrack(jint arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"onSelectTrack",
			"(ILjava/lang/String;)Z",
			arg0,
			arg1.object<jstring>()
		);
	}
	void TvInputService_Session::onSetCaptionEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"onSetCaptionEnabled",
			"(Z)V",
			arg0
		);
	}
	void TvInputService_Session::onSetStreamVolume(jfloat arg0) const
	{
		callMethod<void>(
			"onSetStreamVolume",
			"(F)V",
			arg0
		);
	}
	jboolean TvInputService_Session::onSetSurface(android::view::Surface arg0) const
	{
		return callMethod<jboolean>(
			"onSetSurface",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
	void TvInputService_Session::onSurfaceChanged(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onSurfaceChanged",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jlong TvInputService_Session::onTimeShiftGetCurrentPosition() const
	{
		return callMethod<jlong>(
			"onTimeShiftGetCurrentPosition",
			"()J"
		);
	}
	jlong TvInputService_Session::onTimeShiftGetStartPosition() const
	{
		return callMethod<jlong>(
			"onTimeShiftGetStartPosition",
			"()J"
		);
	}
	void TvInputService_Session::onTimeShiftPause() const
	{
		callMethod<void>(
			"onTimeShiftPause",
			"()V"
		);
	}
	void TvInputService_Session::onTimeShiftPlay(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onTimeShiftPlay",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_Session::onTimeShiftResume() const
	{
		callMethod<void>(
			"onTimeShiftResume",
			"()V"
		);
	}
	void TvInputService_Session::onTimeShiftSeekTo(jlong arg0) const
	{
		callMethod<void>(
			"onTimeShiftSeekTo",
			"(J)V",
			arg0
		);
	}
	void TvInputService_Session::onTimeShiftSetPlaybackParams(android::media::PlaybackParams arg0) const
	{
		callMethod<void>(
			"onTimeShiftSetPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	jboolean TvInputService_Session::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TvInputService_Session::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TvInputService_Session::onTune(android::net::Uri arg0) const
	{
		return callMethod<jboolean>(
			"onTune",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	jboolean TvInputService_Session::onTune(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"onTune",
			"(Landroid/net/Uri;Landroid/os/Bundle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void TvInputService_Session::onUnblockContent(android::media::tv::TvContentRating arg0) const
	{
		callMethod<void>(
			"onUnblockContent",
			"(Landroid/media/tv/TvContentRating;)V",
			arg0.object()
		);
	}
	void TvInputService_Session::setOverlayViewEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setOverlayViewEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::media::tv


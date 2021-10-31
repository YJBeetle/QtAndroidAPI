#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class PlaybackParams;
}
namespace android::media::tv
{
	class TvContentRating;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class Surface;
}
namespace android::view
{
	class View;
}

namespace android::media::tv
{
	class TvInputService_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputService_Session(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvInputService_Session(QJniObject obj);
		
		// Constructors
		TvInputService_Session(android::content::Context arg0);
		
		// Methods
		void layoutSurface(jint arg0, jint arg1, jint arg2, jint arg3);
		void notifyChannelRetuned(android::net::Uri arg0);
		void notifyContentAllowed();
		void notifyContentBlocked(android::media::tv::TvContentRating arg0);
		void notifyTimeShiftStatusChanged(jint arg0);
		void notifyTrackSelected(jint arg0, jstring arg1);
		void notifyTracksChanged(__JniBaseClass arg0);
		void notifyVideoAvailable();
		void notifyVideoUnavailable(jint arg0);
		void onAppPrivateCommand(jstring arg0, android::os::Bundle arg1);
		android::view::View onCreateOverlayView();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void onOverlayViewSizeChanged(jint arg0, jint arg1);
		void onRelease();
		jboolean onSelectTrack(jint arg0, jstring arg1);
		void onSetCaptionEnabled(jboolean arg0);
		void onSetStreamVolume(jfloat arg0);
		jboolean onSetSurface(android::view::Surface arg0);
		void onSurfaceChanged(jint arg0, jint arg1, jint arg2);
		jlong onTimeShiftGetCurrentPosition();
		jlong onTimeShiftGetStartPosition();
		void onTimeShiftPause();
		void onTimeShiftPlay(android::net::Uri arg0);
		void onTimeShiftResume();
		void onTimeShiftSeekTo(jlong arg0);
		void onTimeShiftSetPlaybackParams(android::media::PlaybackParams arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		jboolean onTune(android::net::Uri arg0);
		jboolean onTune(android::net::Uri arg0, android::os::Bundle arg1);
		void onUnblockContent(android::media::tv::TvContentRating arg0);
		void setOverlayViewEnabled(jboolean arg0);
	};
} // namespace android::media::tv


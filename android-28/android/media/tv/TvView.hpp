#pragma once

#include "../../view/ViewGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Region;
}
namespace android::media
{
	class PlaybackParams;
}
namespace android::media::tv
{
	class TvView_TimeShiftPositionCallback;
}
namespace android::media::tv
{
	class TvView_TvInputCallback;
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
	class InputEvent;
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
	class View;
}
class JString;

namespace android::media::tv
{
	class TvView : public android::view::ViewGroup
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvView(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		TvView(QAndroidJniObject obj);
		
		// Constructors
		TvView(android::content::Context arg0);
		TvView(android::content::Context arg0, JObject arg1);
		TvView(android::content::Context arg0, JObject arg1, jint arg2);
		
		// Methods
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchUnhandledInputEvent(android::view::InputEvent arg0) const;
		void dispatchWindowFocusChanged(jboolean arg0) const;
		void draw(android::graphics::Canvas arg0) const;
		jboolean gatherTransparentRegion(android::graphics::Region arg0) const;
		JString getSelectedTrack(jint arg0) const;
		JObject getTracks(jint arg0) const;
		jboolean onUnhandledInputEvent(android::view::InputEvent arg0) const;
		void reset() const;
		void selectTrack(jint arg0, JString arg1) const;
		void sendAppPrivateCommand(JString arg0, android::os::Bundle arg1) const;
		void setCallback(android::media::tv::TvView_TvInputCallback arg0) const;
		void setCaptionEnabled(jboolean arg0) const;
		void setOnUnhandledInputEventListener(JObject arg0) const;
		void setStreamVolume(jfloat arg0) const;
		void setTimeShiftPositionCallback(android::media::tv::TvView_TimeShiftPositionCallback arg0) const;
		void setZOrderMediaOverlay(jboolean arg0) const;
		void setZOrderOnTop(jboolean arg0) const;
		void timeShiftPause() const;
		void timeShiftPlay(JString arg0, android::net::Uri arg1) const;
		void timeShiftResume() const;
		void timeShiftSeekTo(jlong arg0) const;
		void timeShiftSetPlaybackParams(android::media::PlaybackParams arg0) const;
		void tune(JString arg0, android::net::Uri arg1) const;
		void tune(JString arg0, android::net::Uri arg1, android::os::Bundle arg2) const;
	};
} // namespace android::media::tv


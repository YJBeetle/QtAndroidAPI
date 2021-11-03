#pragma once

#include "../view/SurfaceView.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class MediaFormat;
}
namespace android::net
{
	class Uri;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::widget
{
	class MediaController;
}
namespace java::io
{
	class InputStream;
}
class JString;
class JString;

namespace android::widget
{
	class VideoView : public android::view::SurfaceView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VideoView(const char *className, const char *sig, Ts...agv) : android::view::SurfaceView(className, sig, std::forward<Ts>(agv)...) {}
		VideoView(QJniObject obj);
		
		// Constructors
		VideoView(android::content::Context arg0);
		VideoView(android::content::Context arg0, JObject arg1);
		VideoView(android::content::Context arg0, JObject arg1, jint arg2);
		VideoView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addSubtitleSource(java::io::InputStream arg0, android::media::MediaFormat arg1);
		jboolean canPause();
		jboolean canSeekBackward();
		jboolean canSeekForward();
		void draw(android::graphics::Canvas arg0);
		JString getAccessibilityClassName();
		jint getAudioSessionId();
		jint getBufferPercentage();
		jint getCurrentPosition();
		jint getDuration();
		jboolean isPlaying();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void pause();
		jint resolveAdjustedSize(jint arg0, jint arg1);
		void resume();
		void seekTo(jint arg0);
		void setAudioAttributes(android::media::AudioAttributes arg0);
		void setAudioFocusRequest(jint arg0);
		void setMediaController(android::widget::MediaController arg0);
		void setOnCompletionListener(JObject arg0);
		void setOnErrorListener(JObject arg0);
		void setOnInfoListener(JObject arg0);
		void setOnPreparedListener(JObject arg0);
		void setVideoPath(JString arg0);
		void setVideoURI(android::net::Uri arg0);
		void setVideoURI(android::net::Uri arg0, JObject arg1);
		void start();
		void stopPlayback();
		void suspend();
	};
} // namespace android::widget


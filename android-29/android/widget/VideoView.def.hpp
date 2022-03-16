#pragma once

#include "../view/SurfaceView.def.hpp"

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
		VideoView(QJniObject obj) : android::view::SurfaceView(obj) {}
		
		// Constructors
		VideoView(android::content::Context arg0);
		VideoView(android::content::Context arg0, JObject arg1);
		VideoView(android::content::Context arg0, JObject arg1, jint arg2);
		VideoView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addSubtitleSource(java::io::InputStream arg0, android::media::MediaFormat arg1) const;
		jboolean canPause() const;
		jboolean canSeekBackward() const;
		jboolean canSeekForward() const;
		void draw(android::graphics::Canvas arg0) const;
		JString getAccessibilityClassName() const;
		jint getAudioSessionId() const;
		jint getBufferPercentage() const;
		jint getCurrentPosition() const;
		jint getDuration() const;
		jboolean isPlaying() const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void pause() const;
		jint resolveAdjustedSize(jint arg0, jint arg1) const;
		void resume() const;
		void seekTo(jint arg0) const;
		void setAudioAttributes(android::media::AudioAttributes arg0) const;
		void setAudioFocusRequest(jint arg0) const;
		void setMediaController(android::widget::MediaController arg0) const;
		void setOnCompletionListener(JObject arg0) const;
		void setOnErrorListener(JObject arg0) const;
		void setOnInfoListener(JObject arg0) const;
		void setOnPreparedListener(JObject arg0) const;
		void setVideoPath(JString arg0) const;
		void setVideoURI(android::net::Uri arg0) const;
		void setVideoURI(android::net::Uri arg0, JObject arg1) const;
		void start() const;
		void stopPlayback() const;
		void suspend() const;
	};
} // namespace android::widget


#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../media/AudioAttributes.hpp"
#include "../media/MediaFormat.hpp"
#include "../net/Uri.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "./MediaController.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./VideoView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	VideoView::VideoView(QAndroidJniObject obj) : android::view::SurfaceView(obj) {}
	
	// Constructors
	VideoView::VideoView(android::content::Context arg0)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	VideoView::VideoView(android::content::Context arg0, JObject arg1)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	VideoView::VideoView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	VideoView::VideoView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void VideoView::addSubtitleSource(java::io::InputStream arg0, android::media::MediaFormat arg1) const
	{
		callMethod<void>(
			"addSubtitleSource",
			"(Ljava/io/InputStream;Landroid/media/MediaFormat;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean VideoView::canPause() const
	{
		return callMethod<jboolean>(
			"canPause",
			"()Z"
		);
	}
	jboolean VideoView::canSeekBackward() const
	{
		return callMethod<jboolean>(
			"canSeekBackward",
			"()Z"
		);
	}
	jboolean VideoView::canSeekForward() const
	{
		return callMethod<jboolean>(
			"canSeekForward",
			"()Z"
		);
	}
	void VideoView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	JString VideoView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint VideoView::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint VideoView::getBufferPercentage() const
	{
		return callMethod<jint>(
			"getBufferPercentage",
			"()I"
		);
	}
	jint VideoView::getCurrentPosition() const
	{
		return callMethod<jint>(
			"getCurrentPosition",
			"()I"
		);
	}
	jint VideoView::getDuration() const
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	jboolean VideoView::isPlaying() const
	{
		return callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	jboolean VideoView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean VideoView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean VideoView::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void VideoView::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	jint VideoView::resolveAdjustedSize(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"resolveAdjustedSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	void VideoView::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void VideoView::seekTo(jint arg0) const
	{
		callMethod<void>(
			"seekTo",
			"(I)V",
			arg0
		);
	}
	void VideoView::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	void VideoView::setAudioFocusRequest(jint arg0) const
	{
		callMethod<void>(
			"setAudioFocusRequest",
			"(I)V",
			arg0
		);
	}
	void VideoView::setMediaController(android::widget::MediaController arg0) const
	{
		callMethod<void>(
			"setMediaController",
			"(Landroid/widget/MediaController;)V",
			arg0.object()
		);
	}
	void VideoView::setOnCompletionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.object()
		);
	}
	void VideoView::setOnErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.object()
		);
	}
	void VideoView::setOnInfoListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.object()
		);
	}
	void VideoView::setOnPreparedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnPreparedListener",
			"(Landroid/media/MediaPlayer$OnPreparedListener;)V",
			arg0.object()
		);
	}
	void VideoView::setVideoPath(JString arg0) const
	{
		callMethod<void>(
			"setVideoPath",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void VideoView::setVideoURI(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void VideoView::setVideoURI(android::net::Uri arg0, JObject arg1) const
	{
		callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VideoView::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void VideoView::stopPlayback() const
	{
		callMethod<void>(
			"stopPlayback",
			"()V"
		);
	}
	void VideoView::suspend() const
	{
		callMethod<void>(
			"suspend",
			"()V"
		);
	}
} // namespace android::widget


#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../media/AudioAttributes.hpp"
#include "../media/MediaFormat.hpp"
#include "../net/Uri.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "./MediaController.hpp"
#include "../../java/io/InputStream.hpp"
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
	VideoView::VideoView(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	VideoView::VideoView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	VideoView::VideoView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void VideoView::addSubtitleSource(java::io::InputStream arg0, android::media::MediaFormat arg1)
	{
		callMethod<void>(
			"addSubtitleSource",
			"(Ljava/io/InputStream;Landroid/media/MediaFormat;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean VideoView::canPause()
	{
		return callMethod<jboolean>(
			"canPause",
			"()Z"
		);
	}
	jboolean VideoView::canSeekBackward()
	{
		return callMethod<jboolean>(
			"canSeekBackward",
			"()Z"
		);
	}
	jboolean VideoView::canSeekForward()
	{
		return callMethod<jboolean>(
			"canSeekForward",
			"()Z"
		);
	}
	void VideoView::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jstring VideoView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint VideoView::getAudioSessionId()
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint VideoView::getBufferPercentage()
	{
		return callMethod<jint>(
			"getBufferPercentage",
			"()I"
		);
	}
	jint VideoView::getCurrentPosition()
	{
		return callMethod<jint>(
			"getCurrentPosition",
			"()I"
		);
	}
	jint VideoView::getDuration()
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	jboolean VideoView::isPlaying()
	{
		return callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	jboolean VideoView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean VideoView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean VideoView::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void VideoView::pause()
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	jint VideoView::resolveAdjustedSize(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"resolveAdjustedSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	void VideoView::resume()
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void VideoView::seekTo(jint arg0)
	{
		callMethod<void>(
			"seekTo",
			"(I)V",
			arg0
		);
	}
	void VideoView::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	void VideoView::setAudioFocusRequest(jint arg0)
	{
		callMethod<void>(
			"setAudioFocusRequest",
			"(I)V",
			arg0
		);
	}
	void VideoView::setMediaController(android::widget::MediaController arg0)
	{
		callMethod<void>(
			"setMediaController",
			"(Landroid/widget/MediaController;)V",
			arg0.object()
		);
	}
	void VideoView::setOnCompletionListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.object()
		);
	}
	void VideoView::setOnErrorListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.object()
		);
	}
	void VideoView::setOnInfoListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.object()
		);
	}
	void VideoView::setOnPreparedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnPreparedListener",
			"(Landroid/media/MediaPlayer$OnPreparedListener;)V",
			arg0.object()
		);
	}
	void VideoView::setVideoPath(jstring arg0)
	{
		callMethod<void>(
			"setVideoPath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void VideoView::setVideoURI(android::net::Uri arg0)
	{
		callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void VideoView::setVideoURI(android::net::Uri arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void VideoView::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void VideoView::stopPlayback()
	{
		callMethod<void>(
			"stopPlayback",
			"()V"
		);
	}
	void VideoView::suspend()
	{
		callMethod<void>(
			"suspend",
			"()V"
		);
	}
} // namespace android::widget

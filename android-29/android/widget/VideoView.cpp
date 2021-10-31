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
	
	VideoView::VideoView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VideoView::VideoView(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.VideoView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	VideoView::VideoView(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	VideoView::VideoView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	VideoView::VideoView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void VideoView::addSubtitleSource(java::io::InputStream arg0, android::media::MediaFormat arg1)
	{
		__thiz.callMethod<void>(
			"addSubtitleSource",
			"(Ljava/io/InputStream;Landroid/media/MediaFormat;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean VideoView::canPause()
	{
		return __thiz.callMethod<jboolean>(
			"canPause",
			"()Z"
		);
	}
	jboolean VideoView::canSeekBackward()
	{
		return __thiz.callMethod<jboolean>(
			"canSeekBackward",
			"()Z"
		);
	}
	jboolean VideoView::canSeekForward()
	{
		return __thiz.callMethod<jboolean>(
			"canSeekForward",
			"()Z"
		);
	}
	void VideoView::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jstring VideoView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint VideoView::getAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint VideoView::getBufferPercentage()
	{
		return __thiz.callMethod<jint>(
			"getBufferPercentage",
			"()I"
		);
	}
	jint VideoView::getCurrentPosition()
	{
		return __thiz.callMethod<jint>(
			"getCurrentPosition",
			"()I"
		);
	}
	jint VideoView::getDuration()
	{
		return __thiz.callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	jboolean VideoView::isPlaying()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	jboolean VideoView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean VideoView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean VideoView::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void VideoView::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	jint VideoView::resolveAdjustedSize(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"resolveAdjustedSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	void VideoView::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	void VideoView::seekTo(jint arg0)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(I)V",
			arg0
		);
	}
	void VideoView::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setAudioFocusRequest(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioFocusRequest",
			"(I)V",
			arg0
		);
	}
	void VideoView::setMediaController(android::widget::MediaController arg0)
	{
		__thiz.callMethod<void>(
			"setMediaController",
			"(Landroid/widget/MediaController;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setOnCompletionListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setOnErrorListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setOnInfoListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setOnPreparedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPreparedListener",
			"(Landroid/media/MediaPlayer$OnPreparedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setVideoPath(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setVideoPath",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void VideoView::setVideoURI(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setVideoURI(android::net::Uri arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void VideoView::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void VideoView::stopPlayback()
	{
		__thiz.callMethod<void>(
			"stopPlayback",
			"()V"
		);
	}
	void VideoView::suspend()
	{
		__thiz.callMethod<void>(
			"suspend",
			"()V"
		);
	}
} // namespace android::widget


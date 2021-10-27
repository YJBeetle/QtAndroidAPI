#pragma once

#ifndef ANDROID_WIDGET_VIDEOVIEW
#define ANDROID_WIDGET_VIDEOVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/SurfaceView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::media
{
	class MediaFormat;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::widget
{
	class MediaController;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::android::widget
{
	class VideoView : public __jni_impl::android::view::SurfaceView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addSubtitleSource(__jni_impl::java::io::InputStream arg0, __jni_impl::android::media::MediaFormat arg1);
		jboolean canPause();
		jboolean canSeekBackward();
		jboolean canSeekForward();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jstring getAccessibilityClassName();
		jint getAudioSessionId();
		jint getBufferPercentage();
		jint getCurrentPosition();
		jint getDuration();
		jboolean isPlaying();
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		void pause();
		jint resolveAdjustedSize(jint arg0, jint arg1);
		void resume();
		void seekTo(jint arg0);
		void setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
		void setAudioFocusRequest(jint arg0);
		void setMediaController(__jni_impl::android::widget::MediaController arg0);
		void setOnCompletionListener(__jni_impl::__JniBaseClass arg0);
		void setOnErrorListener(__jni_impl::__JniBaseClass arg0);
		void setOnInfoListener(__jni_impl::__JniBaseClass arg0);
		void setOnPreparedListener(__jni_impl::__JniBaseClass arg0);
		void setVideoPath(jstring arg0);
		void setVideoPath(const QString &arg0);
		void setVideoURI(__jni_impl::android::net::Uri arg0);
		void setVideoURI(__jni_impl::android::net::Uri arg0, __jni_impl::__JniBaseClass arg1);
		void start();
		void stopPlayback();
		void suspend();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../media/AudioAttributes.hpp"
#include "../media/MediaFormat.hpp"
#include "../net/Uri.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "MediaController.hpp"
#include "../../java/io/InputStream.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void VideoView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.VideoView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void VideoView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void VideoView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
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
	void VideoView::addSubtitleSource(__jni_impl::java::io::InputStream arg0, __jni_impl::android::media::MediaFormat arg1)
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
	void VideoView::draw(__jni_impl::android::graphics::Canvas arg0)
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
	jboolean VideoView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean VideoView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean VideoView::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
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
	void VideoView::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
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
	void VideoView::setMediaController(__jni_impl::android::widget::MediaController arg0)
	{
		__thiz.callMethod<void>(
			"setMediaController",
			"(Landroid/widget/MediaController;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setOnCompletionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setOnErrorListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setOnInfoListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setOnPreparedListener(__jni_impl::__JniBaseClass arg0)
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
	void VideoView::setVideoPath(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setVideoPath",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void VideoView::setVideoURI(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void VideoView::setVideoURI(__jni_impl::android::net::Uri arg0, __jni_impl::__JniBaseClass arg1)
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
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class VideoView : public __jni_impl::android::widget::VideoView
	{
	public:
		VideoView(QAndroidJniObject obj) { __thiz = obj; }
		VideoView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		VideoView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		VideoView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		VideoView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_VIDEOVIEW


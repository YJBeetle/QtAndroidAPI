#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../media/AudioAttributes.def.hpp"
#include "../media/MediaFormat.def.hpp"
#include "../net/Uri.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "./MediaController.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./VideoView.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline VideoView::VideoView(android::content::Context arg0)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline VideoView::VideoView(android::content::Context arg0, JObject arg1)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline VideoView::VideoView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline VideoView::VideoView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::SurfaceView(
			"android.widget.VideoView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void VideoView::addSubtitleSource(java::io::InputStream arg0, android::media::MediaFormat arg1) const
	{
		callMethod<void>(
			"addSubtitleSource",
			"(Ljava/io/InputStream;Landroid/media/MediaFormat;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean VideoView::canPause() const
	{
		return callMethod<jboolean>(
			"canPause",
			"()Z"
		);
	}
	inline jboolean VideoView::canSeekBackward() const
	{
		return callMethod<jboolean>(
			"canSeekBackward",
			"()Z"
		);
	}
	inline jboolean VideoView::canSeekForward() const
	{
		return callMethod<jboolean>(
			"canSeekForward",
			"()Z"
		);
	}
	inline void VideoView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline JString VideoView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint VideoView::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	inline jint VideoView::getBufferPercentage() const
	{
		return callMethod<jint>(
			"getBufferPercentage",
			"()I"
		);
	}
	inline jint VideoView::getCurrentPosition() const
	{
		return callMethod<jint>(
			"getCurrentPosition",
			"()I"
		);
	}
	inline jint VideoView::getDuration() const
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	inline jboolean VideoView::isPlaying() const
	{
		return callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	inline jboolean VideoView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean VideoView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean VideoView::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void VideoView::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	inline jint VideoView::resolveAdjustedSize(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"resolveAdjustedSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline void VideoView::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	inline void VideoView::seekTo(jint arg0) const
	{
		callMethod<void>(
			"seekTo",
			"(I)V",
			arg0
		);
	}
	inline void VideoView::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	inline void VideoView::setAudioFocusRequest(jint arg0) const
	{
		callMethod<void>(
			"setAudioFocusRequest",
			"(I)V",
			arg0
		);
	}
	inline void VideoView::setMediaController(android::widget::MediaController arg0) const
	{
		callMethod<void>(
			"setMediaController",
			"(Landroid/widget/MediaController;)V",
			arg0.object()
		);
	}
	inline void VideoView::setOnCompletionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.object()
		);
	}
	inline void VideoView::setOnErrorListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.object()
		);
	}
	inline void VideoView::setOnInfoListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.object()
		);
	}
	inline void VideoView::setOnPreparedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnPreparedListener",
			"(Landroid/media/MediaPlayer$OnPreparedListener;)V",
			arg0.object()
		);
	}
	inline void VideoView::setVideoPath(JString arg0) const
	{
		callMethod<void>(
			"setVideoPath",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void VideoView::setVideoURI(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void VideoView::setVideoURI(android::net::Uri arg0, JObject arg1) const
	{
		callMethod<void>(
			"setVideoURI",
			"(Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void VideoView::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void VideoView::stopPlayback() const
	{
		callMethod<void>(
			"stopPlayback",
			"()V"
		);
	}
	inline void VideoView::suspend() const
	{
		callMethod<void>(
			"suspend",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/SurfaceView.hpp"


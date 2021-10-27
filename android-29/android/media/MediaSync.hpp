#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioTrack;
}
namespace __jni_impl::android::media
{
	class MediaSync_Callback;
}
namespace __jni_impl::android::media
{
	class MediaTimestamp;
}
namespace __jni_impl::android::media
{
	class PlaybackParams;
}
namespace __jni_impl::android::media
{
	class SyncParams;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::media
{
	class MediaSync : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEDIASYNC_ERROR_AUDIOTRACK_FAIL();
		static jint MEDIASYNC_ERROR_SURFACE_FAIL();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject createInputSurface();
		void flush();
		QAndroidJniObject getPlaybackParams();
		QAndroidJniObject getSyncParams();
		QAndroidJniObject getTimestamp();
		void queueAudio(__jni_impl::java::nio::ByteBuffer arg0, jint arg1, jlong arg2);
		void release();
		void setAudioTrack(__jni_impl::android::media::AudioTrack arg0);
		void setCallback(__jni_impl::android::media::MediaSync_Callback arg0, __jni_impl::android::os::Handler arg1);
		void setOnErrorListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void setPlaybackParams(__jni_impl::android::media::PlaybackParams arg0);
		void setSurface(__jni_impl::android::view::Surface arg0);
		void setSyncParams(__jni_impl::android::media::SyncParams arg0);
	};
} // namespace __jni_impl::android::media

#include "AudioTrack.hpp"
#include "MediaSync_Callback.hpp"
#include "MediaTimestamp.hpp"
#include "PlaybackParams.hpp"
#include "SyncParams.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"
#include "../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaSync::MEDIASYNC_ERROR_AUDIOTRACK_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaSync",
			"MEDIASYNC_ERROR_AUDIOTRACK_FAIL"
		);
	}
	jint MediaSync::MEDIASYNC_ERROR_SURFACE_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaSync",
			"MEDIASYNC_ERROR_SURFACE_FAIL"
		);
	}
	
	// Constructors
	void MediaSync::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSync",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaSync::createInputSurface()
	{
		return __thiz.callObjectMethod(
			"createInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	void MediaSync::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject MediaSync::getPlaybackParams()
	{
		return __thiz.callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	QAndroidJniObject MediaSync::getSyncParams()
	{
		return __thiz.callObjectMethod(
			"getSyncParams",
			"()Landroid/media/SyncParams;"
		);
	}
	QAndroidJniObject MediaSync::getTimestamp()
	{
		return __thiz.callObjectMethod(
			"getTimestamp",
			"()Landroid/media/MediaTimestamp;"
		);
	}
	void MediaSync::queueAudio(__jni_impl::java::nio::ByteBuffer arg0, jint arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"queueAudio",
			"(Ljava/nio/ByteBuffer;IJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void MediaSync::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaSync::setAudioTrack(__jni_impl::android::media::AudioTrack arg0)
	{
		__thiz.callMethod<void>(
			"setAudioTrack",
			"(Landroid/media/AudioTrack;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSync::setCallback(__jni_impl::android::media::MediaSync_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaSync$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSync::setOnErrorListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaSync$OnErrorListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSync::setPlaybackParams(__jni_impl::android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSync::setSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSync::setSyncParams(__jni_impl::android::media::SyncParams arg0)
	{
		__thiz.callMethod<void>(
			"setSyncParams",
			"(Landroid/media/SyncParams;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSync : public __jni_impl::android::media::MediaSync
	{
	public:
		MediaSync(QAndroidJniObject obj) { __thiz = obj; }
		MediaSync()
		{
			__constructor();
		}
	};
} // namespace android::media


#pragma once

#ifndef ANDROID_MEDIA_MEDIAMUXER
#define ANDROID_MEDIA_MEDIAMUXER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::media
{
	class MediaFormat;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::android::media
{
	class MediaCodec_BufferInfo;
}

namespace __jni_impl::android::media
{
	class MediaMuxer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		void __constructor(__jni_impl::java::io::FileDescriptor arg0, jint arg1);
		
		// Methods
		void start();
		void stop();
		void release();
		void setOrientationHint(jint arg0);
		void setLocation(jfloat arg0, jfloat arg1);
		jint addTrack(__jni_impl::android::media::MediaFormat arg0);
		void writeSampleData(jint arg0, __jni_impl::java::nio::ByteBuffer arg1, __jni_impl::android::media::MediaCodec_BufferInfo arg2);
	};
} // namespace __jni_impl::android::media

#include "../../java/io/FileDescriptor.hpp"
#include "MediaFormat.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "MediaCodec_BufferInfo.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaMuxer::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMuxer",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void MediaMuxer::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMuxer",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void MediaMuxer::__constructor(__jni_impl::java::io::FileDescriptor arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMuxer",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void MediaMuxer::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void MediaMuxer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaMuxer::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaMuxer::setOrientationHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientationHint",
			"(I)V",
			arg0
		);
	}
	void MediaMuxer::setLocation(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jint MediaMuxer::addTrack(__jni_impl::android::media::MediaFormat arg0)
	{
		return __thiz.callMethod<jint>(
			"addTrack",
			"(Landroid/media/MediaFormat;)I",
			arg0.__jniObject().object()
		);
	}
	void MediaMuxer::writeSampleData(jint arg0, __jni_impl::java::nio::ByteBuffer arg1, __jni_impl::android::media::MediaCodec_BufferInfo arg2)
	{
		__thiz.callMethod<void>(
			"writeSampleData",
			"(ILjava/nio/ByteBuffer;Landroid/media/MediaCodec$BufferInfo;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaMuxer : public __jni_impl::android::media::MediaMuxer
	{
	public:
		MediaMuxer(QAndroidJniObject obj) { __thiz = obj; }
		MediaMuxer(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MediaMuxer(__jni_impl::java::io::FileDescriptor arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAMUXER


#include "./MediaCodec_BufferInfo.hpp"
#include "./MediaFormat.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaMuxer.hpp"

namespace android::media
{
	// Fields
	
	MediaMuxer::MediaMuxer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaMuxer::MediaMuxer(java::io::FileDescriptor arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMuxer",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	MediaMuxer::MediaMuxer(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMuxer",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint MediaMuxer::addTrack(android::media::MediaFormat arg0)
	{
		return __thiz.callMethod<jint>(
			"addTrack",
			"(Landroid/media/MediaFormat;)I",
			arg0.__jniObject().object()
		);
	}
	void MediaMuxer::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
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
	void MediaMuxer::setOrientationHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientationHint",
			"(I)V",
			arg0
		);
	}
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
	void MediaMuxer::writeSampleData(jint arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_BufferInfo arg2)
	{
		__thiz.callMethod<void>(
			"writeSampleData",
			"(ILjava/nio/ByteBuffer;Landroid/media/MediaCodec$BufferInfo;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::media


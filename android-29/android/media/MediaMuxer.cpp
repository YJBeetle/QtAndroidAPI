#include "./MediaCodec_BufferInfo.hpp"
#include "./MediaFormat.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaMuxer.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaMuxer::MediaMuxer(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaMuxer::MediaMuxer(java::io::FileDescriptor arg0, jint arg1)
		: __JniBaseClass(
			"android.media.MediaMuxer",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.object(),
			arg1
		) {}
	MediaMuxer::MediaMuxer(jstring arg0, jint arg1)
		: __JniBaseClass(
			"android.media.MediaMuxer",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint MediaMuxer::addTrack(android::media::MediaFormat arg0)
	{
		return callMethod<jint>(
			"addTrack",
			"(Landroid/media/MediaFormat;)I",
			arg0.object()
		);
	}
	void MediaMuxer::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaMuxer::setLocation(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void MediaMuxer::setOrientationHint(jint arg0)
	{
		callMethod<void>(
			"setOrientationHint",
			"(I)V",
			arg0
		);
	}
	void MediaMuxer::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void MediaMuxer::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaMuxer::writeSampleData(jint arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_BufferInfo arg2)
	{
		callMethod<void>(
			"writeSampleData",
			"(ILjava/nio/ByteBuffer;Landroid/media/MediaCodec$BufferInfo;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::media


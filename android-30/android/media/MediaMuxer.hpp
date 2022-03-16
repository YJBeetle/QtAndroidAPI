#pragma once

#include "./MediaCodec_BufferInfo.def.hpp"
#include "./MediaFormat.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MediaMuxer.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaMuxer::MediaMuxer(java::io::FileDescriptor arg0, jint arg1)
		: JObject(
			"android.media.MediaMuxer",
			"(Ljava/io/FileDescriptor;I)V",
			arg0.object(),
			arg1
		) {}
	inline MediaMuxer::MediaMuxer(JString arg0, jint arg1)
		: JObject(
			"android.media.MediaMuxer",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint MediaMuxer::addTrack(android::media::MediaFormat arg0) const
	{
		return callMethod<jint>(
			"addTrack",
			"(Landroid/media/MediaFormat;)I",
			arg0.object()
		);
	}
	inline void MediaMuxer::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaMuxer::setLocation(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLocation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void MediaMuxer::setOrientationHint(jint arg0) const
	{
		callMethod<void>(
			"setOrientationHint",
			"(I)V",
			arg0
		);
	}
	inline void MediaMuxer::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void MediaMuxer::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline void MediaMuxer::writeSampleData(jint arg0, java::nio::ByteBuffer arg1, android::media::MediaCodec_BufferInfo arg2) const
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

// Base class headers


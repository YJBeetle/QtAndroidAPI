#pragma once

#include "./Image.def.hpp"
#include "../os/Handler.def.hpp"
#include "../view/Surface.def.hpp"
#include "./ImageWriter.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::ImageWriter ImageWriter::newInstance(android::view::Surface arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ImageWriter",
			"newInstance",
			"(Landroid/view/Surface;I)Landroid/media/ImageWriter;",
			arg0.object(),
			arg1
		);
	}
	inline android::media::ImageWriter ImageWriter::newInstance(android::view::Surface arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.ImageWriter",
			"newInstance",
			"(Landroid/view/Surface;II)Landroid/media/ImageWriter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void ImageWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::media::Image ImageWriter::dequeueInputImage() const
	{
		return callObjectMethod(
			"dequeueInputImage",
			"()Landroid/media/Image;"
		);
	}
	inline jint ImageWriter::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	inline jint ImageWriter::getMaxImages() const
	{
		return callMethod<jint>(
			"getMaxImages",
			"()I"
		);
	}
	inline void ImageWriter::queueInputImage(android::media::Image arg0) const
	{
		callMethod<void>(
			"queueInputImage",
			"(Landroid/media/Image;)V",
			arg0.object()
		);
	}
	inline void ImageWriter::setOnImageReleasedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnImageReleasedListener",
			"(Landroid/media/ImageWriter$OnImageReleasedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif

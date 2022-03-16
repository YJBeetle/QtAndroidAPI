#pragma once

#include "./Image.def.hpp"
#include "../os/Handler.def.hpp"
#include "../view/Surface.def.hpp"
#include "./ImageReader.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::ImageReader ImageReader::newInstance(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.media.ImageReader",
			"newInstance",
			"(IIII)Landroid/media/ImageReader;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline android::media::Image ImageReader::acquireLatestImage() const
	{
		return callObjectMethod(
			"acquireLatestImage",
			"()Landroid/media/Image;"
		);
	}
	inline android::media::Image ImageReader::acquireNextImage() const
	{
		return callObjectMethod(
			"acquireNextImage",
			"()Landroid/media/Image;"
		);
	}
	inline void ImageReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ImageReader::discardFreeBuffers() const
	{
		callMethod<void>(
			"discardFreeBuffers",
			"()V"
		);
	}
	inline jint ImageReader::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint ImageReader::getImageFormat() const
	{
		return callMethod<jint>(
			"getImageFormat",
			"()I"
		);
	}
	inline jint ImageReader::getMaxImages() const
	{
		return callMethod<jint>(
			"getMaxImages",
			"()I"
		);
	}
	inline android::view::Surface ImageReader::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline jint ImageReader::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline void ImageReader::setOnImageAvailableListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnImageAvailableListener",
			"(Landroid/media/ImageReader$OnImageAvailableListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

// Base class headers


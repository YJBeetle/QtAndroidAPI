#pragma once

#include "./params/MultiResolutionStreamInfo.def.hpp"
#include "../../media/ImageReader.def.hpp"
#include "../../view/Surface.def.hpp"
#include "./MultiResolutionImageReader.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline MultiResolutionImageReader::MultiResolutionImageReader(JObject arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.camera2.MultiResolutionImageReader",
			"(Ljava/util/Collection;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline void MultiResolutionImageReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void MultiResolutionImageReader::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline android::hardware::camera2::params::MultiResolutionStreamInfo MultiResolutionImageReader::getStreamInfoForImageReader(android::media::ImageReader arg0) const
	{
		return callObjectMethod(
			"getStreamInfoForImageReader",
			"(Landroid/media/ImageReader;)Landroid/hardware/camera2/params/MultiResolutionStreamInfo;",
			arg0.object()
		);
	}
	inline android::view::Surface MultiResolutionImageReader::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline void MultiResolutionImageReader::setOnImageAvailableListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnImageAvailableListener",
			"(Landroid/media/ImageReader$OnImageAvailableListener;Ljava/util/concurrent/Executor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::hardware::camera2

// Base class headers


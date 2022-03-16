#pragma once

#include "../../graphics/Bitmap.def.hpp"
#include "./CameraCharacteristics.def.hpp"
#include "./CaptureResult.def.hpp"
#include "../../location/Location.def.hpp"
#include "../../media/Image.def.hpp"
#include "../../util/Size.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../java/io/OutputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./DngCreator.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline jint DngCreator::MAX_THUMBNAIL_DIMENSION()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.DngCreator",
			"MAX_THUMBNAIL_DIMENSION"
		);
	}
	
	// Constructors
	inline DngCreator::DngCreator(android::hardware::camera2::CameraCharacteristics arg0, android::hardware::camera2::CaptureResult arg1)
		: JObject(
			"android.hardware.camera2.DngCreator",
			"(Landroid/hardware/camera2/CameraCharacteristics;Landroid/hardware/camera2/CaptureResult;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void DngCreator::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::hardware::camera2::DngCreator DngCreator::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/hardware/camera2/DngCreator;",
			arg0.object<jstring>()
		);
	}
	inline android::hardware::camera2::DngCreator DngCreator::setLocation(android::location::Location arg0) const
	{
		return callObjectMethod(
			"setLocation",
			"(Landroid/location/Location;)Landroid/hardware/camera2/DngCreator;",
			arg0.object()
		);
	}
	inline android::hardware::camera2::DngCreator DngCreator::setOrientation(jint arg0) const
	{
		return callObjectMethod(
			"setOrientation",
			"(I)Landroid/hardware/camera2/DngCreator;",
			arg0
		);
	}
	inline android::hardware::camera2::DngCreator DngCreator::setThumbnail(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"setThumbnail",
			"(Landroid/graphics/Bitmap;)Landroid/hardware/camera2/DngCreator;",
			arg0.object()
		);
	}
	inline android::hardware::camera2::DngCreator DngCreator::setThumbnail(android::media::Image arg0) const
	{
		return callObjectMethod(
			"setThumbnail",
			"(Landroid/media/Image;)Landroid/hardware/camera2/DngCreator;",
			arg0.object()
		);
	}
	inline void DngCreator::writeByteBuffer(java::io::OutputStream arg0, android::util::Size arg1, java::nio::ByteBuffer arg2, jlong arg3) const
	{
		callMethod<void>(
			"writeByteBuffer",
			"(Ljava/io/OutputStream;Landroid/util/Size;Ljava/nio/ByteBuffer;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline void DngCreator::writeImage(java::io::OutputStream arg0, android::media::Image arg1) const
	{
		callMethod<void>(
			"writeImage",
			"(Ljava/io/OutputStream;Landroid/media/Image;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DngCreator::writeInputStream(java::io::OutputStream arg0, android::util::Size arg1, java::io::InputStream arg2, jlong arg3) const
	{
		callMethod<void>(
			"writeInputStream",
			"(Ljava/io/OutputStream;Landroid/util/Size;Ljava/io/InputStream;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
} // namespace android::hardware::camera2

// Base class headers


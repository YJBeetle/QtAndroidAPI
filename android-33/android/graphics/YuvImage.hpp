#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "./Rect.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "./YuvImage.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline YuvImage::YuvImage(JByteArray arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4)
		: JObject(
			"android.graphics.YuvImage",
			"([BIII[I)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>()
		) {}
	
	// Methods
	inline jboolean YuvImage::compressToJpeg(android::graphics::Rect arg0, jint arg1, java::io::OutputStream arg2) const
	{
		return callMethod<jboolean>(
			"compressToJpeg",
			"(Landroid/graphics/Rect;ILjava/io/OutputStream;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jint YuvImage::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JIntArray YuvImage::getStrides() const
	{
		return callObjectMethod(
			"getStrides",
			"()[I"
		);
	}
	inline jint YuvImage::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline JByteArray YuvImage::getYuvData() const
	{
		return callObjectMethod(
			"getYuvData",
			"()[B"
		);
	}
	inline jint YuvImage::getYuvFormat() const
	{
		return callMethod<jint>(
			"getYuvFormat",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif

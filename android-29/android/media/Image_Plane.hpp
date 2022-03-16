#pragma once

#include "../../java/nio/ByteBuffer.def.hpp"
#include "./Image_Plane.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::ByteBuffer Image_Plane::getBuffer() const
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline jint Image_Plane::getPixelStride() const
	{
		return callMethod<jint>(
			"getPixelStride",
			"()I"
		);
	}
	inline jint Image_Plane::getRowStride() const
	{
		return callMethod<jint>(
			"getRowStride",
			"()I"
		);
	}
} // namespace android::media

// Base class headers


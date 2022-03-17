#pragma once

#include "../../JArray.hpp"
#include "../graphics/Rect.def.hpp"
#include "../hardware/HardwareBuffer.def.hpp"
#include "./Image.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Image::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::graphics::Rect Image::getCropRect() const
	{
		return callObjectMethod(
			"getCropRect",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jint Image::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	inline android::hardware::HardwareBuffer Image::getHardwareBuffer() const
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	inline jint Image::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JArray Image::getPlanes() const
	{
		return callObjectMethod(
			"getPlanes",
			"()[Landroid/media/Image$Plane;"
		);
	}
	inline jlong Image::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	inline jint Image::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline void Image::setCropRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setCropRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void Image::setTimestamp(jlong arg0) const
	{
		callMethod<void>(
			"setTimestamp",
			"(J)V",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif

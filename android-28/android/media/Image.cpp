#include "../graphics/Rect.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "./Image.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	Image::Image(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Image::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::graphics::Rect Image::getCropRect()
	{
		return callObjectMethod(
			"getCropRect",
			"()Landroid/graphics/Rect;"
		);
	}
	jint Image::getFormat()
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	android::hardware::HardwareBuffer Image::getHardwareBuffer()
	{
		return callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	jint Image::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jarray Image::getPlanes()
	{
		return callObjectMethod(
			"getPlanes",
			"()[Landroid/media/Image$Plane;"
		).object<jarray>();
	}
	jlong Image::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jint Image::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void Image::setCropRect(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setCropRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Image::setTimestamp(jlong arg0)
	{
		callMethod<void>(
			"setTimestamp",
			"(J)V",
			arg0
		);
	}
} // namespace android::media


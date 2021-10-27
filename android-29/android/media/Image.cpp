#include "../graphics/Rect.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "./Image.hpp"

namespace android::media
{
	// Fields
	
	Image::Image(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Image::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject Image::getCropRect()
	{
		return __thiz.callObjectMethod(
			"getCropRect",
			"()Landroid/graphics/Rect;"
		);
	}
	jint Image::getFormat()
	{
		return __thiz.callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	QAndroidJniObject Image::getHardwareBuffer()
	{
		return __thiz.callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	jint Image::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jarray Image::getPlanes()
	{
		return __thiz.callObjectMethod(
			"getPlanes",
			"()[Landroid/media/Image$Plane;"
		).object<jarray>();
	}
	jlong Image::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jint Image::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void Image::setCropRect(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setCropRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void Image::setTimestamp(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTimestamp",
			"(J)V",
			arg0
		);
	}
} // namespace android::media


#include "../../../graphics/Point.hpp"
#include "../../../graphics/Rect.hpp"
#include "../../../util/Size.hpp"
#include "./MeteringRectangle.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint MeteringRectangle::METERING_WEIGHT_DONT_CARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_DONT_CARE"
		);
	}
	jint MeteringRectangle::METERING_WEIGHT_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_MAX"
		);
	}
	jint MeteringRectangle::METERING_WEIGHT_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_MIN"
		);
	}
	
	MeteringRectangle::MeteringRectangle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MeteringRectangle::MeteringRectangle(android::graphics::Rect arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(Landroid/graphics/Rect;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	MeteringRectangle::MeteringRectangle(android::graphics::Point arg0, android::util::Size arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(Landroid/graphics/Point;Landroid/util/Size;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	MeteringRectangle::MeteringRectangle(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jboolean MeteringRectangle::equals(android::hardware::camera2::params::MeteringRectangle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/hardware/camera2/params/MeteringRectangle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean MeteringRectangle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MeteringRectangle::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint MeteringRectangle::getMeteringWeight()
	{
		return __thiz.callMethod<jint>(
			"getMeteringWeight",
			"()I"
		);
	}
	QAndroidJniObject MeteringRectangle::getRect()
	{
		return __thiz.callObjectMethod(
			"getRect",
			"()Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject MeteringRectangle::getSize()
	{
		return __thiz.callObjectMethod(
			"getSize",
			"()Landroid/util/Size;"
		);
	}
	QAndroidJniObject MeteringRectangle::getUpperLeftPoint()
	{
		return __thiz.callObjectMethod(
			"getUpperLeftPoint",
			"()Landroid/graphics/Point;"
		);
	}
	jint MeteringRectangle::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint MeteringRectangle::getX()
	{
		return __thiz.callMethod<jint>(
			"getX",
			"()I"
		);
	}
	jint MeteringRectangle::getY()
	{
		return __thiz.callMethod<jint>(
			"getY",
			"()I"
		);
	}
	jint MeteringRectangle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring MeteringRectangle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params


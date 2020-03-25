#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_METERINGRECTANGLE
#define ANDROID_HARDWARE_CAMERA2_PARAMS_METERINGRECTANGLE

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::util
{
	class Size;
}

namespace __jni_impl::android::hardware::camera2::params
{
	class MeteringRectangle : public __JniBaseClass
	{
	public:
		// Fields
		static jint METERING_WEIGHT_DONT_CARE();
		static jint METERING_WEIGHT_MAX();
		static jint METERING_WEIGHT_MIN();
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Rect arg0, jint arg1);
		void __constructor(__jni_impl::android::graphics::Point arg0, __jni_impl::android::util::Size arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jboolean equals(jobject arg0);
		jboolean equals(__jni_impl::android::hardware::camera2::params::MeteringRectangle arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getSize();
		jint getX();
		jint getY();
		jint getWidth();
		jint getHeight();
		jint getMeteringWeight();
		QAndroidJniObject getUpperLeftPoint();
		QAndroidJniObject getRect();
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "../../../graphics/Rect.hpp"
#include "../../../graphics/Point.hpp"
#include "../../../util/Size.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	jint MeteringRectangle::METERING_WEIGHT_DONT_CARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_DONT_CARE");
	}
	jint MeteringRectangle::METERING_WEIGHT_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_MAX");
	}
	jint MeteringRectangle::METERING_WEIGHT_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_MIN");
	}
	
	// Constructors
	void MeteringRectangle::__constructor(__jni_impl::android::graphics::Rect arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(Landroid/graphics/Rect;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void MeteringRectangle::__constructor(__jni_impl::android::graphics::Point arg0, __jni_impl::android::util::Size arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(Landroid/graphics/Point;Landroid/util/Size;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void MeteringRectangle::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	
	// Methods
	jboolean MeteringRectangle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean MeteringRectangle::equals(__jni_impl::android::hardware::camera2::params::MeteringRectangle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/hardware/camera2/params/MeteringRectangle;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MeteringRectangle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint MeteringRectangle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject MeteringRectangle::getSize()
	{
		return __thiz.callObjectMethod(
			"getSize",
			"()Landroid/util/Size;");
	}
	jint MeteringRectangle::getX()
	{
		return __thiz.callMethod<jint>(
			"getX",
			"()I");
	}
	jint MeteringRectangle::getY()
	{
		return __thiz.callMethod<jint>(
			"getY",
			"()I");
	}
	jint MeteringRectangle::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
	}
	jint MeteringRectangle::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I");
	}
	jint MeteringRectangle::getMeteringWeight()
	{
		return __thiz.callMethod<jint>(
			"getMeteringWeight",
			"()I");
	}
	QAndroidJniObject MeteringRectangle::getUpperLeftPoint()
	{
		return __thiz.callObjectMethod(
			"getUpperLeftPoint",
			"()Landroid/graphics/Point;");
	}
	QAndroidJniObject MeteringRectangle::getRect()
	{
		return __thiz.callObjectMethod(
			"getRect",
			"()Landroid/graphics/Rect;");
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class MeteringRectangle : public __jni_impl::android::hardware::camera2::params::MeteringRectangle
	{
	public:
		MeteringRectangle(QAndroidJniObject obj) { __thiz = obj; }
		MeteringRectangle(__jni_impl::android::graphics::Rect arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MeteringRectangle(__jni_impl::android::graphics::Point arg0, __jni_impl::android::util::Size arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		MeteringRectangle(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_METERINGRECTANGLE


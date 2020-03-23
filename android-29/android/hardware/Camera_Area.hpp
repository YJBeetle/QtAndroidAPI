#pragma once

#ifndef ANDROID_HARDWARE_CAMERA_AREA
#define ANDROID_HARDWARE_CAMERA_AREA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::hardware
{
	class Camera_Area : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject rect();
		jint weight();
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Rect arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace __jni_impl::android::hardware

#include "../graphics/Rect.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	QAndroidJniObject Camera_Area::rect()
	{
		return __thiz.getObjectField(
			"rect",
			"Landroid/graphics/Rect;");
	}
	jint Camera_Area::weight()
	{
		return __thiz.getField<jint>(
			"weight");
	}
	
	// Constructors
	void Camera_Area::__constructor(__jni_impl::android::graphics::Rect arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.Camera$Area",
			"(Landroid/graphics/Rect;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jboolean Camera_Area::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class Camera_Area : public __jni_impl::android::hardware::Camera_Area
	{
	public:
		Camera_Area(QAndroidJniObject obj) { __thiz = obj; }
		Camera_Area(__jni_impl::android::graphics::Rect arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_CAMERA_AREA


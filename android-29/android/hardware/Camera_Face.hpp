#pragma once

#ifndef ANDROID_HARDWARE_CAMERA_FACE
#define ANDROID_HARDWARE_CAMERA_FACE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::hardware
{
	class Camera_Face : public __JniBaseClass
	{
	public:
		// Fields
		jint id();
		QAndroidJniObject leftEye();
		QAndroidJniObject mouth();
		QAndroidJniObject rect();
		QAndroidJniObject rightEye();
		jint score();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::hardware

#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::hardware
{
	// Fields
	jint Camera_Face::id()
	{
		return __thiz.getField<jint>(
			"id"
		);
	}
	QAndroidJniObject Camera_Face::leftEye()
	{
		return __thiz.getObjectField(
			"leftEye",
			"Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Camera_Face::mouth()
	{
		return __thiz.getObjectField(
			"mouth",
			"Landroid/graphics/Point;"
		);
	}
	QAndroidJniObject Camera_Face::rect()
	{
		return __thiz.getObjectField(
			"rect",
			"Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject Camera_Face::rightEye()
	{
		return __thiz.getObjectField(
			"rightEye",
			"Landroid/graphics/Point;"
		);
	}
	jint Camera_Face::score()
	{
		return __thiz.getField<jint>(
			"score"
		);
	}
	
	// Constructors
	void Camera_Face::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.Camera$Face",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::hardware

namespace android::hardware
{
	class Camera_Face : public __jni_impl::android::hardware::Camera_Face
	{
	public:
		Camera_Face(QAndroidJniObject obj) { __thiz = obj; }
		Camera_Face()
		{
			__constructor();
		}
	};
} // namespace android::hardware

#endif // ANDROID_HARDWARE_CAMERA_FACE


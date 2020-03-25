#pragma once

#ifndef ANDROID_GRAPHICS_CAMERA
#define ANDROID_GRAPHICS_CAMERA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::graphics
{
	class Camera : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void save();
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2);
		void restore();
		void translate(jfloat arg0, jfloat arg1, jfloat arg2);
		void getMatrix(__jni_impl::android::graphics::Matrix arg0);
		void setLocation(jfloat arg0, jfloat arg1, jfloat arg2);
		void rotateX(jfloat arg0);
		void rotateY(jfloat arg0);
		void rotateZ(jfloat arg0);
		jfloat getLocationX();
		jfloat getLocationY();
		jfloat getLocationZ();
		void applyToCanvas(__jni_impl::android::graphics::Canvas arg0);
		jfloat dotWithNormal(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace __jni_impl::android::graphics

#include "Matrix.hpp"
#include "Canvas.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Camera::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Camera",
			"()V");
	}
	
	// Methods
	void Camera::save()
	{
		__thiz.callMethod<void>(
			"save",
			"()V");
	}
	void Camera::rotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2);
	}
	void Camera::restore()
	{
		__thiz.callMethod<void>(
			"restore",
			"()V");
	}
	void Camera::translate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"translate",
			"(FFF)V",
			arg0,
			arg1,
			arg2);
	}
	void Camera::getMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object());
	}
	void Camera::setLocation(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setLocation",
			"(FFF)V",
			arg0,
			arg1,
			arg2);
	}
	void Camera::rotateX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotateX",
			"(F)V",
			arg0);
	}
	void Camera::rotateY(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotateY",
			"(F)V",
			arg0);
	}
	void Camera::rotateZ(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotateZ",
			"(F)V",
			arg0);
	}
	jfloat Camera::getLocationX()
	{
		return __thiz.callMethod<jfloat>(
			"getLocationX",
			"()F");
	}
	jfloat Camera::getLocationY()
	{
		return __thiz.callMethod<jfloat>(
			"getLocationY",
			"()F");
	}
	jfloat Camera::getLocationZ()
	{
		return __thiz.callMethod<jfloat>(
			"getLocationZ",
			"()F");
	}
	void Camera::applyToCanvas(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"applyToCanvas",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	jfloat Camera::dotWithNormal(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jfloat>(
			"dotWithNormal",
			"(FFF)F",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Camera : public __jni_impl::android::graphics::Camera
	{
	public:
		Camera(QAndroidJniObject obj) { __thiz = obj; }
		Camera()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_CAMERA


#include "./Canvas.hpp"
#include "./Matrix.hpp"
#include "./Camera.hpp"

namespace android::graphics
{
	// Fields
	
	Camera::Camera(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Camera::Camera()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Camera",
			"()V"
		);
	}
	
	// Methods
	void Camera::applyToCanvas(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"applyToCanvas",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat Camera::dotWithNormal(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jfloat>(
			"dotWithNormal",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat Camera::getLocationX()
	{
		return __thiz.callMethod<jfloat>(
			"getLocationX",
			"()F"
		);
	}
	jfloat Camera::getLocationY()
	{
		return __thiz.callMethod<jfloat>(
			"getLocationY",
			"()F"
		);
	}
	jfloat Camera::getLocationZ()
	{
		return __thiz.callMethod<jfloat>(
			"getLocationZ",
			"()F"
		);
	}
	void Camera::getMatrix(android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::restore()
	{
		__thiz.callMethod<void>(
			"restore",
			"()V"
		);
	}
	void Camera::rotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Camera::rotateX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotateX",
			"(F)V",
			arg0
		);
	}
	void Camera::rotateY(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotateY",
			"(F)V",
			arg0
		);
	}
	void Camera::rotateZ(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotateZ",
			"(F)V",
			arg0
		);
	}
	void Camera::save()
	{
		__thiz.callMethod<void>(
			"save",
			"()V"
		);
	}
	void Camera::setLocation(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setLocation",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Camera::translate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"translate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::graphics


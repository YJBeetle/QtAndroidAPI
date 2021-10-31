#include "./Canvas.hpp"
#include "./Matrix.hpp"
#include "./Camera.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Camera::Camera(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Camera::Camera()
		: __JniBaseClass(
			"android.graphics.Camera",
			"()V"
		) {}
	
	// Methods
	void Camera::applyToCanvas(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"applyToCanvas",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jfloat Camera::dotWithNormal(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callMethod<jfloat>(
			"dotWithNormal",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	jfloat Camera::getLocationX()
	{
		return callMethod<jfloat>(
			"getLocationX",
			"()F"
		);
	}
	jfloat Camera::getLocationY()
	{
		return callMethod<jfloat>(
			"getLocationY",
			"()F"
		);
	}
	jfloat Camera::getLocationZ()
	{
		return callMethod<jfloat>(
			"getLocationZ",
			"()F"
		);
	}
	void Camera::getMatrix(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void Camera::restore()
	{
		callMethod<void>(
			"restore",
			"()V"
		);
	}
	void Camera::rotate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"rotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Camera::rotateX(jfloat arg0)
	{
		callMethod<void>(
			"rotateX",
			"(F)V",
			arg0
		);
	}
	void Camera::rotateY(jfloat arg0)
	{
		callMethod<void>(
			"rotateY",
			"(F)V",
			arg0
		);
	}
	void Camera::rotateZ(jfloat arg0)
	{
		callMethod<void>(
			"rotateZ",
			"(F)V",
			arg0
		);
	}
	void Camera::save()
	{
		callMethod<void>(
			"save",
			"()V"
		);
	}
	void Camera::setLocation(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"setLocation",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Camera::translate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"translate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::graphics


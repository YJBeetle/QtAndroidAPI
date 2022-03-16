#pragma once

#include "./Canvas.def.hpp"
#include "./Matrix.def.hpp"
#include "./Camera.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Camera::Camera()
		: JObject(
			"android.graphics.Camera",
			"()V"
		) {}
	
	// Methods
	inline void Camera::applyToCanvas(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"applyToCanvas",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jfloat Camera::dotWithNormal(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jfloat>(
			"dotWithNormal",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	inline jfloat Camera::getLocationX() const
	{
		return callMethod<jfloat>(
			"getLocationX",
			"()F"
		);
	}
	inline jfloat Camera::getLocationY() const
	{
		return callMethod<jfloat>(
			"getLocationY",
			"()F"
		);
	}
	inline jfloat Camera::getLocationZ() const
	{
		return callMethod<jfloat>(
			"getLocationZ",
			"()F"
		);
	}
	inline void Camera::getMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void Camera::restore() const
	{
		callMethod<void>(
			"restore",
			"()V"
		);
	}
	inline void Camera::rotate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"rotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Camera::rotateX(jfloat arg0) const
	{
		callMethod<void>(
			"rotateX",
			"(F)V",
			arg0
		);
	}
	inline void Camera::rotateY(jfloat arg0) const
	{
		callMethod<void>(
			"rotateY",
			"(F)V",
			arg0
		);
	}
	inline void Camera::rotateZ(jfloat arg0) const
	{
		callMethod<void>(
			"rotateZ",
			"(F)V",
			arg0
		);
	}
	inline void Camera::save() const
	{
		callMethod<void>(
			"save",
			"()V"
		);
	}
	inline void Camera::setLocation(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setLocation",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Camera::translate(jfloat arg0, jfloat arg1, jfloat arg2) const
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

// Base class headers


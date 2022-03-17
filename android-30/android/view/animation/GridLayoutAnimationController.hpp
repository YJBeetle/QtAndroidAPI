#pragma once

#include "../../content/Context.def.hpp"
#include "../View.def.hpp"
#include "./Animation.def.hpp"
#include "./GridLayoutAnimationController.def.hpp"

namespace android::view::animation
{
	// Fields
	inline jint GridLayoutAnimationController::DIRECTION_BOTTOM_TO_TOP()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_BOTTOM_TO_TOP"
		);
	}
	inline jint GridLayoutAnimationController::DIRECTION_HORIZONTAL_MASK()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_HORIZONTAL_MASK"
		);
	}
	inline jint GridLayoutAnimationController::DIRECTION_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	inline jint GridLayoutAnimationController::DIRECTION_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	inline jint GridLayoutAnimationController::DIRECTION_TOP_TO_BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_TOP_TO_BOTTOM"
		);
	}
	inline jint GridLayoutAnimationController::DIRECTION_VERTICAL_MASK()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_VERTICAL_MASK"
		);
	}
	inline jint GridLayoutAnimationController::PRIORITY_COLUMN()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_COLUMN"
		);
	}
	inline jint GridLayoutAnimationController::PRIORITY_NONE()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_NONE"
		);
	}
	inline jint GridLayoutAnimationController::PRIORITY_ROW()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_ROW"
		);
	}
	
	// Constructors
	inline GridLayoutAnimationController::GridLayoutAnimationController(android::view::animation::Animation arg0)
		: android::view::animation::LayoutAnimationController(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		) {}
	inline GridLayoutAnimationController::GridLayoutAnimationController(android::content::Context arg0, JObject arg1)
		: android::view::animation::LayoutAnimationController(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GridLayoutAnimationController::GridLayoutAnimationController(android::view::animation::Animation arg0, jfloat arg1, jfloat arg2)
		: android::view::animation::LayoutAnimationController(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/view/animation/Animation;FF)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jfloat GridLayoutAnimationController::getColumnDelay() const
	{
		return callMethod<jfloat>(
			"getColumnDelay",
			"()F"
		);
	}
	inline jint GridLayoutAnimationController::getDirection() const
	{
		return callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	inline jint GridLayoutAnimationController::getDirectionPriority() const
	{
		return callMethod<jint>(
			"getDirectionPriority",
			"()I"
		);
	}
	inline jfloat GridLayoutAnimationController::getRowDelay() const
	{
		return callMethod<jfloat>(
			"getRowDelay",
			"()F"
		);
	}
	inline void GridLayoutAnimationController::setColumnDelay(jfloat arg0) const
	{
		callMethod<void>(
			"setColumnDelay",
			"(F)V",
			arg0
		);
	}
	inline void GridLayoutAnimationController::setDirection(jint arg0) const
	{
		callMethod<void>(
			"setDirection",
			"(I)V",
			arg0
		);
	}
	inline void GridLayoutAnimationController::setDirectionPriority(jint arg0) const
	{
		callMethod<void>(
			"setDirectionPriority",
			"(I)V",
			arg0
		);
	}
	inline void GridLayoutAnimationController::setRowDelay(jfloat arg0) const
	{
		callMethod<void>(
			"setRowDelay",
			"(F)V",
			arg0
		);
	}
	inline jboolean GridLayoutAnimationController::willOverlap() const
	{
		return callMethod<jboolean>(
			"willOverlap",
			"()Z"
		);
	}
} // namespace android::view::animation

// Base class headers
#include "./LayoutAnimationController.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::animation;
#endif

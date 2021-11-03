#include "../../content/Context.hpp"
#include "../View.hpp"
#include "./Animation.hpp"
#include "./GridLayoutAnimationController.hpp"

namespace android::view::animation
{
	// Fields
	jint GridLayoutAnimationController::DIRECTION_BOTTOM_TO_TOP()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_BOTTOM_TO_TOP"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_HORIZONTAL_MASK()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_HORIZONTAL_MASK"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_TOP_TO_BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_TOP_TO_BOTTOM"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_VERTICAL_MASK()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_VERTICAL_MASK"
		);
	}
	jint GridLayoutAnimationController::PRIORITY_COLUMN()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_COLUMN"
		);
	}
	jint GridLayoutAnimationController::PRIORITY_NONE()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_NONE"
		);
	}
	jint GridLayoutAnimationController::PRIORITY_ROW()
	{
		return getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_ROW"
		);
	}
	
	// QJniObject forward
	GridLayoutAnimationController::GridLayoutAnimationController(QJniObject obj) : android::view::animation::LayoutAnimationController(obj) {}
	
	// Constructors
	GridLayoutAnimationController::GridLayoutAnimationController(android::view::animation::Animation arg0)
		: android::view::animation::LayoutAnimationController(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		) {}
	GridLayoutAnimationController::GridLayoutAnimationController(android::content::Context arg0, JObject arg1)
		: android::view::animation::LayoutAnimationController(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	GridLayoutAnimationController::GridLayoutAnimationController(android::view::animation::Animation arg0, jfloat arg1, jfloat arg2)
		: android::view::animation::LayoutAnimationController(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/view/animation/Animation;FF)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jfloat GridLayoutAnimationController::getColumnDelay()
	{
		return callMethod<jfloat>(
			"getColumnDelay",
			"()F"
		);
	}
	jint GridLayoutAnimationController::getDirection()
	{
		return callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	jint GridLayoutAnimationController::getDirectionPriority()
	{
		return callMethod<jint>(
			"getDirectionPriority",
			"()I"
		);
	}
	jfloat GridLayoutAnimationController::getRowDelay()
	{
		return callMethod<jfloat>(
			"getRowDelay",
			"()F"
		);
	}
	void GridLayoutAnimationController::setColumnDelay(jfloat arg0)
	{
		callMethod<void>(
			"setColumnDelay",
			"(F)V",
			arg0
		);
	}
	void GridLayoutAnimationController::setDirection(jint arg0)
	{
		callMethod<void>(
			"setDirection",
			"(I)V",
			arg0
		);
	}
	void GridLayoutAnimationController::setDirectionPriority(jint arg0)
	{
		callMethod<void>(
			"setDirectionPriority",
			"(I)V",
			arg0
		);
	}
	void GridLayoutAnimationController::setRowDelay(jfloat arg0)
	{
		callMethod<void>(
			"setRowDelay",
			"(F)V",
			arg0
		);
	}
	jboolean GridLayoutAnimationController::willOverlap()
	{
		return callMethod<jboolean>(
			"willOverlap",
			"()Z"
		);
	}
} // namespace android::view::animation


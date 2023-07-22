#pragma once

#include "../../content/Context.def.hpp"
#include "../View.def.hpp"
#include "./Animation.def.hpp"
#include "./LayoutAnimationController_AnimationParameters.def.hpp"
#include "../../../java/util/Random.def.hpp"
#include "./LayoutAnimationController.def.hpp"

namespace android::view::animation
{
	// Fields
	inline jint LayoutAnimationController::ORDER_NORMAL()
	{
		return getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_NORMAL"
		);
	}
	inline jint LayoutAnimationController::ORDER_RANDOM()
	{
		return getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_RANDOM"
		);
	}
	inline jint LayoutAnimationController::ORDER_REVERSE()
	{
		return getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_REVERSE"
		);
	}
	
	// Constructors
	inline LayoutAnimationController::LayoutAnimationController(android::view::animation::Animation arg0)
		: JObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		) {}
	inline LayoutAnimationController::LayoutAnimationController(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline LayoutAnimationController::LayoutAnimationController(android::view::animation::Animation arg0, jfloat arg1)
		: JObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;F)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline android::view::animation::Animation LayoutAnimationController::getAnimation() const
	{
		return callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	inline android::view::animation::Animation LayoutAnimationController::getAnimationForView(android::view::View arg0) const
	{
		return callObjectMethod(
			"getAnimationForView",
			"(Landroid/view/View;)Landroid/view/animation/Animation;",
			arg0.object()
		);
	}
	inline jfloat LayoutAnimationController::getDelay() const
	{
		return callMethod<jfloat>(
			"getDelay",
			"()F"
		);
	}
	inline JObject LayoutAnimationController::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	inline jint LayoutAnimationController::getOrder() const
	{
		return callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	inline jboolean LayoutAnimationController::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	inline void LayoutAnimationController::setAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	inline void LayoutAnimationController::setAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void LayoutAnimationController::setDelay(jfloat arg0) const
	{
		callMethod<void>(
			"setDelay",
			"(F)V",
			arg0
		);
	}
	inline void LayoutAnimationController::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.object()
		);
	}
	inline void LayoutAnimationController::setInterpolator(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void LayoutAnimationController::setOrder(jint arg0) const
	{
		callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	inline void LayoutAnimationController::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline jboolean LayoutAnimationController::willOverlap() const
	{
		return callMethod<jboolean>(
			"willOverlap",
			"()Z"
		);
	}
} // namespace android::view::animation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::animation;
#endif

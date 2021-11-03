#include "../../content/Context.hpp"
#include "../View.hpp"
#include "./Animation.hpp"
#include "./LayoutAnimationController_AnimationParameters.hpp"
#include "../../../java/util/Random.hpp"
#include "./LayoutAnimationController.hpp"

namespace android::view::animation
{
	// Fields
	jint LayoutAnimationController::ORDER_NORMAL()
	{
		return getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_NORMAL"
		);
	}
	jint LayoutAnimationController::ORDER_RANDOM()
	{
		return getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_RANDOM"
		);
	}
	jint LayoutAnimationController::ORDER_REVERSE()
	{
		return getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_REVERSE"
		);
	}
	
	// QAndroidJniObject forward
	LayoutAnimationController::LayoutAnimationController(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LayoutAnimationController::LayoutAnimationController(android::view::animation::Animation arg0)
		: JObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		) {}
	LayoutAnimationController::LayoutAnimationController(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	LayoutAnimationController::LayoutAnimationController(android::view::animation::Animation arg0, jfloat arg1)
		: JObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;F)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::animation::Animation LayoutAnimationController::getAnimation() const
	{
		return callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	android::view::animation::Animation LayoutAnimationController::getAnimationForView(android::view::View arg0) const
	{
		return callObjectMethod(
			"getAnimationForView",
			"(Landroid/view/View;)Landroid/view/animation/Animation;",
			arg0.object()
		);
	}
	jfloat LayoutAnimationController::getDelay() const
	{
		return callMethod<jfloat>(
			"getDelay",
			"()F"
		);
	}
	JObject LayoutAnimationController::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint LayoutAnimationController::getOrder() const
	{
		return callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	jboolean LayoutAnimationController::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	void LayoutAnimationController::setAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	void LayoutAnimationController::setAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void LayoutAnimationController::setDelay(jfloat arg0) const
	{
		callMethod<void>(
			"setDelay",
			"(F)V",
			arg0
		);
	}
	void LayoutAnimationController::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.object()
		);
	}
	void LayoutAnimationController::setInterpolator(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void LayoutAnimationController::setOrder(jint arg0) const
	{
		callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	void LayoutAnimationController::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	jboolean LayoutAnimationController::willOverlap() const
	{
		return callMethod<jboolean>(
			"willOverlap",
			"()Z"
		);
	}
} // namespace android::view::animation


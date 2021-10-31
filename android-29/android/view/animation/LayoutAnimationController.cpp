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
	LayoutAnimationController::LayoutAnimationController(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LayoutAnimationController::LayoutAnimationController(android::view::animation::Animation arg0)
		: __JniBaseClass(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		) {}
	LayoutAnimationController::LayoutAnimationController(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	LayoutAnimationController::LayoutAnimationController(android::view::animation::Animation arg0, jfloat arg1)
		: __JniBaseClass(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;F)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::animation::Animation LayoutAnimationController::getAnimation()
	{
		return callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	android::view::animation::Animation LayoutAnimationController::getAnimationForView(android::view::View arg0)
	{
		return callObjectMethod(
			"getAnimationForView",
			"(Landroid/view/View;)Landroid/view/animation/Animation;",
			arg0.object()
		);
	}
	jfloat LayoutAnimationController::getDelay()
	{
		return callMethod<jfloat>(
			"getDelay",
			"()F"
		);
	}
	__JniBaseClass LayoutAnimationController::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint LayoutAnimationController::getOrder()
	{
		return callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	jboolean LayoutAnimationController::isDone()
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	void LayoutAnimationController::setAnimation(android::view::animation::Animation arg0)
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	void LayoutAnimationController::setAnimation(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void LayoutAnimationController::setDelay(jfloat arg0)
	{
		callMethod<void>(
			"setDelay",
			"(F)V",
			arg0
		);
	}
	void LayoutAnimationController::setInterpolator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.object()
		);
	}
	void LayoutAnimationController::setInterpolator(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void LayoutAnimationController::setOrder(jint arg0)
	{
		callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	void LayoutAnimationController::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	jboolean LayoutAnimationController::willOverlap()
	{
		return callMethod<jboolean>(
			"willOverlap",
			"()Z"
		);
	}
} // namespace android::view::animation


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
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_NORMAL"
		);
	}
	jint LayoutAnimationController::ORDER_RANDOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_RANDOM"
		);
	}
	jint LayoutAnimationController::ORDER_REVERSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_REVERSE"
		);
	}
	
	LayoutAnimationController::LayoutAnimationController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LayoutAnimationController::LayoutAnimationController(android::view::animation::Animation &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	LayoutAnimationController::LayoutAnimationController(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	LayoutAnimationController::LayoutAnimationController(android::view::animation::Animation &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;F)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject LayoutAnimationController::getAnimation()
	{
		return __thiz.callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	QAndroidJniObject LayoutAnimationController::getAnimationForView(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"getAnimationForView",
			"(Landroid/view/View;)Landroid/view/animation/Animation;",
			arg0.__jniObject().object()
		);
	}
	jfloat LayoutAnimationController::getDelay()
	{
		return __thiz.callMethod<jfloat>(
			"getDelay",
			"()F"
		);
	}
	QAndroidJniObject LayoutAnimationController::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint LayoutAnimationController::getOrder()
	{
		return __thiz.callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	jboolean LayoutAnimationController::isDone()
	{
		return __thiz.callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	void LayoutAnimationController::setAnimation(android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutAnimationController::setAnimation(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void LayoutAnimationController::setDelay(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setDelay",
			"(F)V",
			arg0
		);
	}
	void LayoutAnimationController::setInterpolator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutAnimationController::setInterpolator(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void LayoutAnimationController::setOrder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	void LayoutAnimationController::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	jboolean LayoutAnimationController::willOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"willOverlap",
			"()Z"
		);
	}
} // namespace android::view::animation


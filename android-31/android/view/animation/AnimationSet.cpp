#include "../../content/Context.hpp"
#include "./Animation.hpp"
#include "./Transformation.hpp"
#include "./AnimationSet.hpp"

namespace android::view::animation
{
	// Fields
	
	// QAndroidJniObject forward
	AnimationSet::AnimationSet(QAndroidJniObject obj) : android::view::animation::Animation(obj) {}
	
	// Constructors
	AnimationSet::AnimationSet(jboolean arg0)
		: android::view::animation::Animation(
			"android.view.animation.AnimationSet",
			"(Z)V",
			arg0
		) {}
	AnimationSet::AnimationSet(android::content::Context arg0, JObject arg1)
		: android::view::animation::Animation(
			"android.view.animation.AnimationSet",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void AnimationSet::addAnimation(android::view::animation::Animation arg0)
	{
		callMethod<void>(
			"addAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	jlong AnimationSet::computeDurationHint()
	{
		return callMethod<jlong>(
			"computeDurationHint",
			"()J"
		);
	}
	JObject AnimationSet::getAnimations()
	{
		return callObjectMethod(
			"getAnimations",
			"()Ljava/util/List;"
		);
	}
	jlong AnimationSet::getDuration()
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	jlong AnimationSet::getStartTime()
	{
		return callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	jboolean AnimationSet::getTransformation(jlong arg0, android::view::animation::Transformation arg1)
	{
		return callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;)Z",
			arg0,
			arg1.object()
		);
	}
	void AnimationSet::initialize(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void AnimationSet::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void AnimationSet::restrictDuration(jlong arg0)
	{
		callMethod<void>(
			"restrictDuration",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::scaleCurrentDuration(jfloat arg0)
	{
		callMethod<void>(
			"scaleCurrentDuration",
			"(F)V",
			arg0
		);
	}
	void AnimationSet::setDuration(jlong arg0)
	{
		callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::setFillAfter(jboolean arg0)
	{
		callMethod<void>(
			"setFillAfter",
			"(Z)V",
			arg0
		);
	}
	void AnimationSet::setFillBefore(jboolean arg0)
	{
		callMethod<void>(
			"setFillBefore",
			"(Z)V",
			arg0
		);
	}
	void AnimationSet::setRepeatMode(jint arg0)
	{
		callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	void AnimationSet::setStartOffset(jlong arg0)
	{
		callMethod<void>(
			"setStartOffset",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::setStartTime(jlong arg0)
	{
		callMethod<void>(
			"setStartTime",
			"(J)V",
			arg0
		);
	}
	jboolean AnimationSet::willChangeBounds()
	{
		return callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	jboolean AnimationSet::willChangeTransformationMatrix()
	{
		return callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation


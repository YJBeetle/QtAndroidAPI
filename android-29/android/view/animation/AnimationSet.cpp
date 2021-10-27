#include "../../content/Context.hpp"
#include "./Animation.hpp"
#include "./Transformation.hpp"
#include "./AnimationSet.hpp"

namespace android::view::animation
{
	// Fields
	
	AnimationSet::AnimationSet(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnimationSet::AnimationSet(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnimationSet",
			"(Z)V",
			arg0
		);
	}
	AnimationSet::AnimationSet(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnimationSet",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void AnimationSet::addAnimation(android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"addAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	jlong AnimationSet::computeDurationHint()
	{
		return __thiz.callMethod<jlong>(
			"computeDurationHint",
			"()J"
		);
	}
	QAndroidJniObject AnimationSet::getAnimations()
	{
		return __thiz.callObjectMethod(
			"getAnimations",
			"()Ljava/util/List;"
		);
	}
	jlong AnimationSet::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	jlong AnimationSet::getStartTime()
	{
		return __thiz.callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	jboolean AnimationSet::getTransformation(jlong arg0, android::view::animation::Transformation arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AnimationSet::initialize(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void AnimationSet::restrictDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"restrictDuration",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::scaleCurrentDuration(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"scaleCurrentDuration",
			"(F)V",
			arg0
		);
	}
	void AnimationSet::setDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::setFillAfter(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillAfter",
			"(Z)V",
			arg0
		);
	}
	void AnimationSet::setFillBefore(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillBefore",
			"(Z)V",
			arg0
		);
	}
	void AnimationSet::setRepeatMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	void AnimationSet::setStartOffset(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartOffset",
			"(J)V",
			arg0
		);
	}
	void AnimationSet::setStartTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartTime",
			"(J)V",
			arg0
		);
	}
	jboolean AnimationSet::willChangeBounds()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	jboolean AnimationSet::willChangeTransformationMatrix()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation


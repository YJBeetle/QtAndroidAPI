#include "./Animator.hpp"
#include "./ValueAnimator.hpp"

namespace android::animation
{
	// Fields
	jint ValueAnimator::INFINITE()
	{
		return getStaticField<jint>(
			"android.animation.ValueAnimator",
			"INFINITE"
		);
	}
	jint ValueAnimator::RESTART()
	{
		return getStaticField<jint>(
			"android.animation.ValueAnimator",
			"RESTART"
		);
	}
	jint ValueAnimator::REVERSE()
	{
		return getStaticField<jint>(
			"android.animation.ValueAnimator",
			"REVERSE"
		);
	}
	
	// QJniObject forward
	ValueAnimator::ValueAnimator(QJniObject obj) : android::animation::Animator(obj) {}
	
	// Constructors
	ValueAnimator::ValueAnimator()
		: android::animation::Animator(
			"android.animation.ValueAnimator",
			"()V"
		) {}
	
	// Methods
	jboolean ValueAnimator::areAnimatorsEnabled()
	{
		return callStaticMethod<jboolean>(
			"android.animation.ValueAnimator",
			"areAnimatorsEnabled",
			"()Z"
		);
	}
	jlong ValueAnimator::getFrameDelay()
	{
		return callStaticMethod<jlong>(
			"android.animation.ValueAnimator",
			"getFrameDelay",
			"()J"
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofArgb(jintArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofArgb",
			"([I)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofFloat(jfloatArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofFloat",
			"([F)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofInt(jintArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofInt",
			"([I)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofObject(__JniBaseClass arg0, jobjectArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofObject",
			"(Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ValueAnimator;",
			arg0.object(),
			arg1
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofPropertyValuesHolder(jarray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofPropertyValuesHolder",
			"([Landroid/animation/PropertyValuesHolder;)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	void ValueAnimator::setFrameDelay(jlong arg0)
	{
		callStaticMethod<void>(
			"android.animation.ValueAnimator",
			"setFrameDelay",
			"(J)V",
			arg0
		);
	}
	void ValueAnimator::addUpdateListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V",
			arg0.object()
		);
	}
	void ValueAnimator::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::animation::ValueAnimator ValueAnimator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/ValueAnimator;"
		);
	}
	void ValueAnimator::end()
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	jfloat ValueAnimator::getAnimatedFraction()
	{
		return callMethod<jfloat>(
			"getAnimatedFraction",
			"()F"
		);
	}
	jobject ValueAnimator::getAnimatedValue()
	{
		return callObjectMethod(
			"getAnimatedValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ValueAnimator::getAnimatedValue(jstring arg0)
	{
		return callObjectMethod(
			"getAnimatedValue",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong ValueAnimator::getCurrentPlayTime()
	{
		return callMethod<jlong>(
			"getCurrentPlayTime",
			"()J"
		);
	}
	jlong ValueAnimator::getDuration()
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	__JniBaseClass ValueAnimator::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jint ValueAnimator::getRepeatCount()
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jint ValueAnimator::getRepeatMode()
	{
		return callMethod<jint>(
			"getRepeatMode",
			"()I"
		);
	}
	jlong ValueAnimator::getStartDelay()
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	jlong ValueAnimator::getTotalDuration()
	{
		return callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	jarray ValueAnimator::getValues()
	{
		return callObjectMethod(
			"getValues",
			"()[Landroid/animation/PropertyValuesHolder;"
		).object<jarray>();
	}
	jboolean ValueAnimator::isRunning()
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean ValueAnimator::isStarted()
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void ValueAnimator::pause()
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void ValueAnimator::removeAllUpdateListeners()
	{
		callMethod<void>(
			"removeAllUpdateListeners",
			"()V"
		);
	}
	void ValueAnimator::removeUpdateListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V",
			arg0.object()
		);
	}
	void ValueAnimator::resume()
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void ValueAnimator::reverse()
	{
		callMethod<void>(
			"reverse",
			"()V"
		);
	}
	void ValueAnimator::setCurrentFraction(jfloat arg0)
	{
		callMethod<void>(
			"setCurrentFraction",
			"(F)V",
			arg0
		);
	}
	void ValueAnimator::setCurrentPlayTime(jlong arg0)
	{
		callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	android::animation::ValueAnimator ValueAnimator::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	void ValueAnimator::setEvaluator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEvaluator",
			"(Landroid/animation/TypeEvaluator;)V",
			arg0.object()
		);
	}
	void ValueAnimator::setFloatValues(jfloatArray arg0)
	{
		callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0
		);
	}
	void ValueAnimator::setIntValues(jintArray arg0)
	{
		callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0
		);
	}
	void ValueAnimator::setInterpolator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	void ValueAnimator::setObjectValues(jobjectArray arg0)
	{
		callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void ValueAnimator::setRepeatCount(jint arg0)
	{
		callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	void ValueAnimator::setRepeatMode(jint arg0)
	{
		callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	void ValueAnimator::setStartDelay(jlong arg0)
	{
		callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	void ValueAnimator::setValues(jarray arg0)
	{
		callMethod<void>(
			"setValues",
			"([Landroid/animation/PropertyValuesHolder;)V",
			arg0
		);
	}
	void ValueAnimator::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	jstring ValueAnimator::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::animation


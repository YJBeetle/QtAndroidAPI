#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "./Animator.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	android::animation::ValueAnimator ValueAnimator::ofArgb(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofArgb",
			"([I)Landroid/animation/ValueAnimator;",
			arg0.object<jintArray>()
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofFloat(JFloatArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofFloat",
			"([F)Landroid/animation/ValueAnimator;",
			arg0.object<jfloatArray>()
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofInt(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofInt",
			"([I)Landroid/animation/ValueAnimator;",
			arg0.object<jintArray>()
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofObject(JObject arg0, JObjectArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofObject",
			"(Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ValueAnimator;",
			arg0.object(),
			arg1.object<jobjectArray>()
		);
	}
	android::animation::ValueAnimator ValueAnimator::ofPropertyValuesHolder(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofPropertyValuesHolder",
			"([Landroid/animation/PropertyValuesHolder;)Landroid/animation/ValueAnimator;",
			arg0.object<jarray>()
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
	void ValueAnimator::addUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"addUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V",
			arg0.object()
		);
	}
	void ValueAnimator::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::animation::ValueAnimator ValueAnimator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/ValueAnimator;"
		);
	}
	void ValueAnimator::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	jfloat ValueAnimator::getAnimatedFraction() const
	{
		return callMethod<jfloat>(
			"getAnimatedFraction",
			"()F"
		);
	}
	JObject ValueAnimator::getAnimatedValue() const
	{
		return callObjectMethod(
			"getAnimatedValue",
			"()Ljava/lang/Object;"
		);
	}
	JObject ValueAnimator::getAnimatedValue(JString arg0) const
	{
		return callObjectMethod(
			"getAnimatedValue",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	jlong ValueAnimator::getCurrentPlayTime() const
	{
		return callMethod<jlong>(
			"getCurrentPlayTime",
			"()J"
		);
	}
	jlong ValueAnimator::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	JObject ValueAnimator::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jint ValueAnimator::getRepeatCount() const
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jint ValueAnimator::getRepeatMode() const
	{
		return callMethod<jint>(
			"getRepeatMode",
			"()I"
		);
	}
	jlong ValueAnimator::getStartDelay() const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	jlong ValueAnimator::getTotalDuration() const
	{
		return callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	JArray ValueAnimator::getValues() const
	{
		return callObjectMethod(
			"getValues",
			"()[Landroid/animation/PropertyValuesHolder;"
		);
	}
	jboolean ValueAnimator::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean ValueAnimator::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void ValueAnimator::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void ValueAnimator::removeAllUpdateListeners() const
	{
		callMethod<void>(
			"removeAllUpdateListeners",
			"()V"
		);
	}
	void ValueAnimator::removeUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"removeUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V",
			arg0.object()
		);
	}
	void ValueAnimator::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void ValueAnimator::reverse() const
	{
		callMethod<void>(
			"reverse",
			"()V"
		);
	}
	void ValueAnimator::setCurrentFraction(jfloat arg0) const
	{
		callMethod<void>(
			"setCurrentFraction",
			"(F)V",
			arg0
		);
	}
	void ValueAnimator::setCurrentPlayTime(jlong arg0) const
	{
		callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	android::animation::ValueAnimator ValueAnimator::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	void ValueAnimator::setEvaluator(JObject arg0) const
	{
		callMethod<void>(
			"setEvaluator",
			"(Landroid/animation/TypeEvaluator;)V",
			arg0.object()
		);
	}
	void ValueAnimator::setFloatValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void ValueAnimator::setIntValues(JIntArray arg0) const
	{
		callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void ValueAnimator::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	void ValueAnimator::setObjectValues(JObjectArray arg0) const
	{
		callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	void ValueAnimator::setRepeatCount(jint arg0) const
	{
		callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	void ValueAnimator::setRepeatMode(jint arg0) const
	{
		callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	void ValueAnimator::setStartDelay(jlong arg0) const
	{
		callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	void ValueAnimator::setValues(JArray arg0) const
	{
		callMethod<void>(
			"setValues",
			"([Landroid/animation/PropertyValuesHolder;)V",
			arg0.object<jarray>()
		);
	}
	void ValueAnimator::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	JString ValueAnimator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::animation


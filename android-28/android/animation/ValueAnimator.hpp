#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "./Animator.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ValueAnimator.def.hpp"

namespace android::animation
{
	// Fields
	inline jint ValueAnimator::INFINITE()
	{
		return getStaticField<jint>(
			"android.animation.ValueAnimator",
			"INFINITE"
		);
	}
	inline jint ValueAnimator::RESTART()
	{
		return getStaticField<jint>(
			"android.animation.ValueAnimator",
			"RESTART"
		);
	}
	inline jint ValueAnimator::REVERSE()
	{
		return getStaticField<jint>(
			"android.animation.ValueAnimator",
			"REVERSE"
		);
	}
	
	// Constructors
	inline ValueAnimator::ValueAnimator()
		: android::animation::Animator(
			"android.animation.ValueAnimator",
			"()V"
		) {}
	
	// Methods
	inline jboolean ValueAnimator::areAnimatorsEnabled()
	{
		return callStaticMethod<jboolean>(
			"android.animation.ValueAnimator",
			"areAnimatorsEnabled",
			"()Z"
		);
	}
	inline jlong ValueAnimator::getFrameDelay()
	{
		return callStaticMethod<jlong>(
			"android.animation.ValueAnimator",
			"getFrameDelay",
			"()J"
		);
	}
	inline android::animation::ValueAnimator ValueAnimator::ofArgb(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofArgb",
			"([I)Landroid/animation/ValueAnimator;",
			arg0.object<jintArray>()
		);
	}
	inline android::animation::ValueAnimator ValueAnimator::ofFloat(JFloatArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofFloat",
			"([F)Landroid/animation/ValueAnimator;",
			arg0.object<jfloatArray>()
		);
	}
	inline android::animation::ValueAnimator ValueAnimator::ofInt(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofInt",
			"([I)Landroid/animation/ValueAnimator;",
			arg0.object<jintArray>()
		);
	}
	inline android::animation::ValueAnimator ValueAnimator::ofObject(JObject arg0, JObjectArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofObject",
			"(Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ValueAnimator;",
			arg0.object(),
			arg1.object<jobjectArray>()
		);
	}
	inline android::animation::ValueAnimator ValueAnimator::ofPropertyValuesHolder(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofPropertyValuesHolder",
			"([Landroid/animation/PropertyValuesHolder;)Landroid/animation/ValueAnimator;",
			arg0.object<jarray>()
		);
	}
	inline void ValueAnimator::setFrameDelay(jlong arg0)
	{
		callStaticMethod<void>(
			"android.animation.ValueAnimator",
			"setFrameDelay",
			"(J)V",
			arg0
		);
	}
	inline void ValueAnimator::addUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"addUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V",
			arg0.object()
		);
	}
	inline void ValueAnimator::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline android::animation::ValueAnimator ValueAnimator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/ValueAnimator;"
		);
	}
	inline void ValueAnimator::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	inline jfloat ValueAnimator::getAnimatedFraction() const
	{
		return callMethod<jfloat>(
			"getAnimatedFraction",
			"()F"
		);
	}
	inline JObject ValueAnimator::getAnimatedValue() const
	{
		return callObjectMethod(
			"getAnimatedValue",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ValueAnimator::getAnimatedValue(JString arg0) const
	{
		return callObjectMethod(
			"getAnimatedValue",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jlong ValueAnimator::getCurrentPlayTime() const
	{
		return callMethod<jlong>(
			"getCurrentPlayTime",
			"()J"
		);
	}
	inline jlong ValueAnimator::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	inline JObject ValueAnimator::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	inline jint ValueAnimator::getRepeatCount() const
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	inline jint ValueAnimator::getRepeatMode() const
	{
		return callMethod<jint>(
			"getRepeatMode",
			"()I"
		);
	}
	inline jlong ValueAnimator::getStartDelay() const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	inline jlong ValueAnimator::getTotalDuration() const
	{
		return callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	inline JArray ValueAnimator::getValues() const
	{
		return callObjectMethod(
			"getValues",
			"()[Landroid/animation/PropertyValuesHolder;"
		);
	}
	inline jboolean ValueAnimator::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	inline jboolean ValueAnimator::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	inline void ValueAnimator::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	inline void ValueAnimator::removeAllUpdateListeners() const
	{
		callMethod<void>(
			"removeAllUpdateListeners",
			"()V"
		);
	}
	inline void ValueAnimator::removeUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"removeUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V",
			arg0.object()
		);
	}
	inline void ValueAnimator::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	inline void ValueAnimator::reverse() const
	{
		callMethod<void>(
			"reverse",
			"()V"
		);
	}
	inline void ValueAnimator::setCurrentFraction(jfloat arg0) const
	{
		callMethod<void>(
			"setCurrentFraction",
			"(F)V",
			arg0
		);
	}
	inline void ValueAnimator::setCurrentPlayTime(jlong arg0) const
	{
		callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	inline android::animation::ValueAnimator ValueAnimator::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	inline void ValueAnimator::setEvaluator(JObject arg0) const
	{
		callMethod<void>(
			"setEvaluator",
			"(Landroid/animation/TypeEvaluator;)V",
			arg0.object()
		);
	}
	inline void ValueAnimator::setFloatValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void ValueAnimator::setIntValues(JIntArray arg0) const
	{
		callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void ValueAnimator::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	inline void ValueAnimator::setObjectValues(JObjectArray arg0) const
	{
		callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void ValueAnimator::setRepeatCount(jint arg0) const
	{
		callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	inline void ValueAnimator::setRepeatMode(jint arg0) const
	{
		callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	inline void ValueAnimator::setStartDelay(jlong arg0) const
	{
		callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	inline void ValueAnimator::setValues(JArray arg0) const
	{
		callMethod<void>(
			"setValues",
			"([Landroid/animation/PropertyValuesHolder;)V",
			arg0.object<jarray>()
		);
	}
	inline void ValueAnimator::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline JString ValueAnimator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::animation

// Base class headers
#include "./Animator.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::animation;
#endif

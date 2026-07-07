#pragma once

#include "../../JArray.hpp"
#include "./Animator.def.hpp"
#include "./AnimatorSet_Builder.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./AnimatorSet.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline AnimatorSet::AnimatorSet()
		: android::animation::Animator(
			"android.animation.AnimatorSet",
			"()V"
		) {}
	
	// Methods
	inline void AnimatorSet::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline android::animation::AnimatorSet AnimatorSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/AnimatorSet;"
		);
	}
	inline void AnimatorSet::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	inline java::util::ArrayList AnimatorSet::getChildAnimations() const
	{
		return callObjectMethod(
			"getChildAnimations",
			"()Ljava/util/ArrayList;"
		);
	}
	inline jlong AnimatorSet::getCurrentPlayTime() const
	{
		return callMethod<jlong>(
			"getCurrentPlayTime",
			"()J"
		);
	}
	inline jlong AnimatorSet::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	inline JObject AnimatorSet::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	inline jlong AnimatorSet::getStartDelay() const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	inline jlong AnimatorSet::getTotalDuration() const
	{
		return callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	inline jboolean AnimatorSet::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	inline jboolean AnimatorSet::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	inline void AnimatorSet::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	inline android::animation::AnimatorSet_Builder AnimatorSet::play(android::animation::Animator arg0) const
	{
		return callObjectMethod(
			"play",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
	inline void AnimatorSet::playSequentially(JArray arg0) const
	{
		callMethod<void>(
			"playSequentially",
			"([Landroid/animation/Animator;)V",
			arg0.object<jarray>()
		);
	}
	inline void AnimatorSet::playSequentially(JObject arg0) const
	{
		callMethod<void>(
			"playSequentially",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void AnimatorSet::playTogether(JArray arg0) const
	{
		callMethod<void>(
			"playTogether",
			"([Landroid/animation/Animator;)V",
			arg0.object<jarray>()
		);
	}
	inline void AnimatorSet::playTogether(JObject arg0) const
	{
		callMethod<void>(
			"playTogether",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	inline void AnimatorSet::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	inline void AnimatorSet::reverse() const
	{
		callMethod<void>(
			"reverse",
			"()V"
		);
	}
	inline void AnimatorSet::setCurrentPlayTime(jlong arg0) const
	{
		callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	inline android::animation::AnimatorSet AnimatorSet::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/AnimatorSet;",
			arg0
		);
	}
	inline void AnimatorSet::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	inline void AnimatorSet::setStartDelay(jlong arg0) const
	{
		callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	inline void AnimatorSet::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void AnimatorSet::setupEndValues() const
	{
		callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	inline void AnimatorSet::setupStartValues() const
	{
		callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	inline void AnimatorSet::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline JString AnimatorSet::toString() const
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

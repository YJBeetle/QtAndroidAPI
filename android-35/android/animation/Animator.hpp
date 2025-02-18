#pragma once

#include "../../JObject.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./Animator.def.hpp"

namespace android::animation
{
	// Fields
	inline jlong Animator::DURATION_INFINITE()
	{
		return getStaticField<jlong>(
			"android.animation.Animator",
			"DURATION_INFINITE"
		);
	}
	
	// Constructors
	inline Animator::Animator()
		: JObject(
			"android.animation.Animator",
			"()V"
		) {}
	
	// Methods
	inline void Animator::addListener(JObject arg0) const
	{
		callMethod<void>(
			"addListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.object()
		);
	}
	inline void Animator::addPauseListener(JObject arg0) const
	{
		callMethod<void>(
			"addPauseListener",
			"(Landroid/animation/Animator$AnimatorPauseListener;)V",
			arg0.object()
		);
	}
	inline void Animator::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline android::animation::Animator Animator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/Animator;"
		);
	}
	inline void Animator::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	inline jlong Animator::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	inline JObject Animator::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	inline java::util::ArrayList Animator::getListeners() const
	{
		return callObjectMethod(
			"getListeners",
			"()Ljava/util/ArrayList;"
		);
	}
	inline jlong Animator::getStartDelay() const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	inline jlong Animator::getTotalDuration() const
	{
		return callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	inline jboolean Animator::isPaused() const
	{
		return callMethod<jboolean>(
			"isPaused",
			"()Z"
		);
	}
	inline jboolean Animator::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	inline jboolean Animator::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	inline void Animator::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	inline void Animator::removeAllListeners() const
	{
		callMethod<void>(
			"removeAllListeners",
			"()V"
		);
	}
	inline void Animator::removeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.object()
		);
	}
	inline void Animator::removePauseListener(JObject arg0) const
	{
		callMethod<void>(
			"removePauseListener",
			"(Landroid/animation/Animator$AnimatorPauseListener;)V",
			arg0.object()
		);
	}
	inline void Animator::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	inline android::animation::Animator Animator::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/Animator;",
			arg0
		);
	}
	inline void Animator::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	inline void Animator::setStartDelay(jlong arg0) const
	{
		callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	inline void Animator::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void Animator::setupEndValues() const
	{
		callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	inline void Animator::setupStartValues() const
	{
		callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	inline void Animator::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::animation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::animation;
#endif

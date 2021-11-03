#include "../../JArray.hpp"
#include "./Animator.hpp"
#include "./AnimatorSet_Builder.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./AnimatorSet.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	AnimatorSet::AnimatorSet(QJniObject obj) : android::animation::Animator(obj) {}
	
	// Constructors
	AnimatorSet::AnimatorSet()
		: android::animation::Animator(
			"android.animation.AnimatorSet",
			"()V"
		) {}
	
	// Methods
	void AnimatorSet::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::animation::AnimatorSet AnimatorSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/AnimatorSet;"
		);
	}
	void AnimatorSet::end()
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	java::util::ArrayList AnimatorSet::getChildAnimations()
	{
		return callObjectMethod(
			"getChildAnimations",
			"()Ljava/util/ArrayList;"
		);
	}
	jlong AnimatorSet::getCurrentPlayTime()
	{
		return callMethod<jlong>(
			"getCurrentPlayTime",
			"()J"
		);
	}
	jlong AnimatorSet::getDuration()
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	JObject AnimatorSet::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jlong AnimatorSet::getStartDelay()
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	jlong AnimatorSet::getTotalDuration()
	{
		return callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	jboolean AnimatorSet::isRunning()
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean AnimatorSet::isStarted()
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void AnimatorSet::pause()
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	android::animation::AnimatorSet_Builder AnimatorSet::play(android::animation::Animator arg0)
	{
		return callObjectMethod(
			"play",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
	void AnimatorSet::playSequentially(JArray arg0)
	{
		callMethod<void>(
			"playSequentially",
			"([Landroid/animation/Animator;)V",
			arg0.object<jarray>()
		);
	}
	void AnimatorSet::playSequentially(JObject arg0)
	{
		callMethod<void>(
			"playSequentially",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void AnimatorSet::playTogether(JArray arg0)
	{
		callMethod<void>(
			"playTogether",
			"([Landroid/animation/Animator;)V",
			arg0.object<jarray>()
		);
	}
	void AnimatorSet::playTogether(JObject arg0)
	{
		callMethod<void>(
			"playTogether",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void AnimatorSet::resume()
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	void AnimatorSet::reverse()
	{
		callMethod<void>(
			"reverse",
			"()V"
		);
	}
	void AnimatorSet::setCurrentPlayTime(jlong arg0)
	{
		callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	android::animation::AnimatorSet AnimatorSet::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/AnimatorSet;",
			arg0
		);
	}
	void AnimatorSet::setInterpolator(JObject arg0)
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	void AnimatorSet::setStartDelay(jlong arg0)
	{
		callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	void AnimatorSet::setTarget(JObject arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void AnimatorSet::setupEndValues()
	{
		callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	void AnimatorSet::setupStartValues()
	{
		callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	void AnimatorSet::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	JString AnimatorSet::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::animation


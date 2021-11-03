#include "../../JObject.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Animator.hpp"

namespace android::animation
{
	// Fields
	jlong Animator::DURATION_INFINITE()
	{
		return getStaticField<jlong>(
			"android.animation.Animator",
			"DURATION_INFINITE"
		);
	}
	
	// QAndroidJniObject forward
	Animator::Animator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Animator::Animator()
		: JObject(
			"android.animation.Animator",
			"()V"
		) {}
	
	// Methods
	void Animator::addListener(JObject arg0) const
	{
		callMethod<void>(
			"addListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.object()
		);
	}
	void Animator::addPauseListener(JObject arg0) const
	{
		callMethod<void>(
			"addPauseListener",
			"(Landroid/animation/Animator$AnimatorPauseListener;)V",
			arg0.object()
		);
	}
	void Animator::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::animation::Animator Animator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/Animator;"
		);
	}
	void Animator::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	jlong Animator::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	JObject Animator::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	java::util::ArrayList Animator::getListeners() const
	{
		return callObjectMethod(
			"getListeners",
			"()Ljava/util/ArrayList;"
		);
	}
	jlong Animator::getStartDelay() const
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	jlong Animator::getTotalDuration() const
	{
		return callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	jboolean Animator::isPaused() const
	{
		return callMethod<jboolean>(
			"isPaused",
			"()Z"
		);
	}
	jboolean Animator::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean Animator::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void Animator::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void Animator::removeAllListeners() const
	{
		callMethod<void>(
			"removeAllListeners",
			"()V"
		);
	}
	void Animator::removeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.object()
		);
	}
	void Animator::removePauseListener(JObject arg0) const
	{
		callMethod<void>(
			"removePauseListener",
			"(Landroid/animation/Animator$AnimatorPauseListener;)V",
			arg0.object()
		);
	}
	void Animator::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	android::animation::Animator Animator::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/Animator;",
			arg0
		);
	}
	void Animator::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	void Animator::setStartDelay(jlong arg0) const
	{
		callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	void Animator::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void Animator::setupEndValues() const
	{
		callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	void Animator::setupStartValues() const
	{
		callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	void Animator::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::animation


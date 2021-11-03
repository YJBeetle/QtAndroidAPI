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
	void Animator::addListener(JObject arg0)
	{
		callMethod<void>(
			"addListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.object()
		);
	}
	void Animator::addPauseListener(JObject arg0)
	{
		callMethod<void>(
			"addPauseListener",
			"(Landroid/animation/Animator$AnimatorPauseListener;)V",
			arg0.object()
		);
	}
	void Animator::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::animation::Animator Animator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/Animator;"
		);
	}
	void Animator::end()
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	jlong Animator::getDuration()
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	JObject Animator::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	java::util::ArrayList Animator::getListeners()
	{
		return callObjectMethod(
			"getListeners",
			"()Ljava/util/ArrayList;"
		);
	}
	jlong Animator::getStartDelay()
	{
		return callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	jlong Animator::getTotalDuration()
	{
		return callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	jboolean Animator::isPaused()
	{
		return callMethod<jboolean>(
			"isPaused",
			"()Z"
		);
	}
	jboolean Animator::isRunning()
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean Animator::isStarted()
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void Animator::pause()
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void Animator::removeAllListeners()
	{
		callMethod<void>(
			"removeAllListeners",
			"()V"
		);
	}
	void Animator::removeListener(JObject arg0)
	{
		callMethod<void>(
			"removeListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.object()
		);
	}
	void Animator::removePauseListener(JObject arg0)
	{
		callMethod<void>(
			"removePauseListener",
			"(Landroid/animation/Animator$AnimatorPauseListener;)V",
			arg0.object()
		);
	}
	void Animator::resume()
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	android::animation::Animator Animator::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/Animator;",
			arg0
		);
	}
	void Animator::setInterpolator(JObject arg0)
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	void Animator::setStartDelay(jlong arg0)
	{
		callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	void Animator::setTarget(jobject arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Animator::setupEndValues()
	{
		callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	void Animator::setupStartValues()
	{
		callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	void Animator::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::animation


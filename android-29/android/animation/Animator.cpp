#include "../../java/util/ArrayList.hpp"
#include "./Animator.hpp"

namespace android::animation
{
	// Fields
	jlong Animator::DURATION_INFINITE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.animation.Animator",
			"DURATION_INFINITE"
		);
	}
	
	// QAndroidJniObject forward
	Animator::Animator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Animator::Animator()
		: __JniBaseClass(
			"android.animation.Animator",
			"()V"
		) {}
	
	// Methods
	void Animator::addListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.object()
		);
	}
	void Animator::addPauseListener(__JniBaseClass arg0)
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
	QAndroidJniObject Animator::clone()
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
	QAndroidJniObject Animator::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	QAndroidJniObject Animator::getListeners()
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
	void Animator::removeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.object()
		);
	}
	void Animator::removePauseListener(__JniBaseClass arg0)
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
	QAndroidJniObject Animator::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/Animator;",
			arg0
		);
	}
	void Animator::setInterpolator(__JniBaseClass arg0)
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


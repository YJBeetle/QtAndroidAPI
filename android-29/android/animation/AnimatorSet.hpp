#pragma once

#ifndef ANDROID_ANIMATION_ANIMATORSET
#define ANDROID_ANIMATION_ANIMATORSET

#include "../../__JniBaseClass.hpp"
#include "Animator.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::animation
{
	class AnimatorSet_Builder;
}

namespace __jni_impl::android::animation
{
	class AnimatorSet : public __jni_impl::android::animation::Animator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		QAndroidJniObject clone();
		void end();
		void start();
		void resume();
		void setTarget(jobject arg0);
		void reverse();
		jlong getDuration();
		void cancel();
		QAndroidJniObject setDuration(jlong arg0);
		void setStartDelay(jlong arg0);
		jlong getStartDelay();
		void setInterpolator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getInterpolator();
		void pause();
		jlong getTotalDuration();
		jboolean isRunning();
		jboolean isStarted();
		void setupStartValues();
		void setupEndValues();
		void playTogether(jarray arg0);
		void playTogether(__jni_impl::__JniBaseClass arg0);
		void playSequentially(jarray arg0);
		void playSequentially(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getChildAnimations();
		QAndroidJniObject play(__jni_impl::android::animation::Animator arg0);
		void setCurrentPlayTime(jlong arg0);
		jlong getCurrentPlayTime();
	};
} // namespace __jni_impl::android::animation

#include "Animator.hpp"
#include "../../java/util/ArrayList.hpp"
#include "AnimatorSet_Builder.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void AnimatorSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.AnimatorSet",
			"()V");
	}
	
	// Methods
	jstring AnimatorSet::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AnimatorSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/AnimatorSet;"
		);
	}
	void AnimatorSet::end()
	{
		__thiz.callMethod<void>(
			"end",
			"()V"
		);
	}
	void AnimatorSet::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void AnimatorSet::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	void AnimatorSet::setTarget(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AnimatorSet::reverse()
	{
		__thiz.callMethod<void>(
			"reverse",
			"()V"
		);
	}
	jlong AnimatorSet::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	void AnimatorSet::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	QAndroidJniObject AnimatorSet::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/AnimatorSet;",
			arg0
		);
	}
	void AnimatorSet::setStartDelay(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	jlong AnimatorSet::getStartDelay()
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	void AnimatorSet::setInterpolator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AnimatorSet::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	void AnimatorSet::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	jlong AnimatorSet::getTotalDuration()
	{
		return __thiz.callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	jboolean AnimatorSet::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean AnimatorSet::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void AnimatorSet::setupStartValues()
	{
		__thiz.callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	void AnimatorSet::setupEndValues()
	{
		__thiz.callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	void AnimatorSet::playTogether(jarray arg0)
	{
		__thiz.callMethod<void>(
			"playTogether",
			"([Landroid/animation/Animator;)V",
			arg0
		);
	}
	void AnimatorSet::playTogether(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"playTogether",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorSet::playSequentially(jarray arg0)
	{
		__thiz.callMethod<void>(
			"playSequentially",
			"([Landroid/animation/Animator;)V",
			arg0
		);
	}
	void AnimatorSet::playSequentially(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"playSequentially",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AnimatorSet::getChildAnimations()
	{
		return __thiz.callObjectMethod(
			"getChildAnimations",
			"()Ljava/util/ArrayList;"
		);
	}
	QAndroidJniObject AnimatorSet::play(__jni_impl::android::animation::Animator arg0)
	{
		return __thiz.callObjectMethod(
			"play",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.__jniObject().object()
		);
	}
	void AnimatorSet::setCurrentPlayTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	jlong AnimatorSet::getCurrentPlayTime()
	{
		return __thiz.callMethod<jlong>(
			"getCurrentPlayTime",
			"()J"
		);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class AnimatorSet : public __jni_impl::android::animation::AnimatorSet
	{
	public:
		AnimatorSet(QAndroidJniObject obj) { __thiz = obj; }
		AnimatorSet()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_ANIMATORSET


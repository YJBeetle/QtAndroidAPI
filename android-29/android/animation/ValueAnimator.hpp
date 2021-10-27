#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Animator.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}

namespace __jni_impl::android::animation
{
	class ValueAnimator : public __jni_impl::android::animation::Animator
	{
	public:
		// Fields
		static jint INFINITE();
		static jint RESTART();
		static jint REVERSE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean areAnimatorsEnabled();
		static jlong getFrameDelay();
		static QAndroidJniObject ofArgb(jintArray arg0);
		static QAndroidJniObject ofFloat(jfloatArray arg0);
		static QAndroidJniObject ofInt(jintArray arg0);
		static QAndroidJniObject ofObject(__jni_impl::__JniBaseClass arg0, jobjectArray arg1);
		static QAndroidJniObject ofPropertyValuesHolder(jarray arg0);
		static void setFrameDelay(jlong arg0);
		void addUpdateListener(__jni_impl::__JniBaseClass arg0);
		void cancel();
		QAndroidJniObject clone();
		void end();
		jfloat getAnimatedFraction();
		jobject getAnimatedValue();
		jobject getAnimatedValue(jstring arg0);
		jobject getAnimatedValue(const QString &arg0);
		jlong getCurrentPlayTime();
		jlong getDuration();
		QAndroidJniObject getInterpolator();
		jint getRepeatCount();
		jint getRepeatMode();
		jlong getStartDelay();
		jlong getTotalDuration();
		jarray getValues();
		jboolean isRunning();
		jboolean isStarted();
		void pause();
		void removeAllUpdateListeners();
		void removeUpdateListener(__jni_impl::__JniBaseClass arg0);
		void resume();
		void reverse();
		void setCurrentFraction(jfloat arg0);
		void setCurrentPlayTime(jlong arg0);
		QAndroidJniObject setDuration(jlong arg0);
		void setEvaluator(__jni_impl::__JniBaseClass arg0);
		void setFloatValues(jfloatArray arg0);
		void setIntValues(jintArray arg0);
		void setInterpolator(__jni_impl::__JniBaseClass arg0);
		void setObjectValues(jobjectArray arg0);
		void setRepeatCount(jint arg0);
		void setRepeatMode(jint arg0);
		void setStartDelay(jlong arg0);
		void setValues(jarray arg0);
		void start();
		jstring toString();
	};
} // namespace __jni_impl::android::animation

#include "./Animator.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	jint ValueAnimator::INFINITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.ValueAnimator",
			"INFINITE"
		);
	}
	jint ValueAnimator::RESTART()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.ValueAnimator",
			"RESTART"
		);
	}
	jint ValueAnimator::REVERSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.ValueAnimator",
			"REVERSE"
		);
	}
	
	// Constructors
	void ValueAnimator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.ValueAnimator",
			"()V"
		);
	}
	
	// Methods
	jboolean ValueAnimator::areAnimatorsEnabled()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.animation.ValueAnimator",
			"areAnimatorsEnabled",
			"()Z"
		);
	}
	jlong ValueAnimator::getFrameDelay()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.animation.ValueAnimator",
			"getFrameDelay",
			"()J"
		);
	}
	QAndroidJniObject ValueAnimator::ofArgb(jintArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofArgb",
			"([I)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	QAndroidJniObject ValueAnimator::ofFloat(jfloatArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofFloat",
			"([F)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	QAndroidJniObject ValueAnimator::ofInt(jintArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofInt",
			"([I)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	QAndroidJniObject ValueAnimator::ofObject(__jni_impl::__JniBaseClass arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofObject",
			"(Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ValueAnimator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ValueAnimator::ofPropertyValuesHolder(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ValueAnimator",
			"ofPropertyValuesHolder",
			"([Landroid/animation/PropertyValuesHolder;)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	void ValueAnimator::setFrameDelay(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.animation.ValueAnimator",
			"setFrameDelay",
			"(J)V",
			arg0
		);
	}
	void ValueAnimator::addUpdateListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ValueAnimator::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	QAndroidJniObject ValueAnimator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/ValueAnimator;"
		);
	}
	void ValueAnimator::end()
	{
		__thiz.callMethod<void>(
			"end",
			"()V"
		);
	}
	jfloat ValueAnimator::getAnimatedFraction()
	{
		return __thiz.callMethod<jfloat>(
			"getAnimatedFraction",
			"()F"
		);
	}
	jobject ValueAnimator::getAnimatedValue()
	{
		return __thiz.callObjectMethod(
			"getAnimatedValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ValueAnimator::getAnimatedValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAnimatedValue",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ValueAnimator::getAnimatedValue(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAnimatedValue",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jlong ValueAnimator::getCurrentPlayTime()
	{
		return __thiz.callMethod<jlong>(
			"getCurrentPlayTime",
			"()J"
		);
	}
	jlong ValueAnimator::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	QAndroidJniObject ValueAnimator::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jint ValueAnimator::getRepeatCount()
	{
		return __thiz.callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jint ValueAnimator::getRepeatMode()
	{
		return __thiz.callMethod<jint>(
			"getRepeatMode",
			"()I"
		);
	}
	jlong ValueAnimator::getStartDelay()
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	jlong ValueAnimator::getTotalDuration()
	{
		return __thiz.callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	jarray ValueAnimator::getValues()
	{
		return __thiz.callObjectMethod(
			"getValues",
			"()[Landroid/animation/PropertyValuesHolder;"
		).object<jarray>();
	}
	jboolean ValueAnimator::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean ValueAnimator::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void ValueAnimator::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	void ValueAnimator::removeAllUpdateListeners()
	{
		__thiz.callMethod<void>(
			"removeAllUpdateListeners",
			"()V"
		);
	}
	void ValueAnimator::removeUpdateListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeUpdateListener",
			"(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ValueAnimator::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	void ValueAnimator::reverse()
	{
		__thiz.callMethod<void>(
			"reverse",
			"()V"
		);
	}
	void ValueAnimator::setCurrentFraction(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentFraction",
			"(F)V",
			arg0
		);
	}
	void ValueAnimator::setCurrentPlayTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject ValueAnimator::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/ValueAnimator;",
			arg0
		);
	}
	void ValueAnimator::setEvaluator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEvaluator",
			"(Landroid/animation/TypeEvaluator;)V",
			arg0.__jniObject().object()
		);
	}
	void ValueAnimator::setFloatValues(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0
		);
	}
	void ValueAnimator::setIntValues(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0
		);
	}
	void ValueAnimator::setInterpolator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.__jniObject().object()
		);
	}
	void ValueAnimator::setObjectValues(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void ValueAnimator::setRepeatCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	void ValueAnimator::setRepeatMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	void ValueAnimator::setStartDelay(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	void ValueAnimator::setValues(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setValues",
			"([Landroid/animation/PropertyValuesHolder;)V",
			arg0
		);
	}
	void ValueAnimator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	jstring ValueAnimator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class ValueAnimator : public __jni_impl::android::animation::ValueAnimator
	{
	public:
		ValueAnimator(QAndroidJniObject obj) { __thiz = obj; }
		ValueAnimator()
		{
			__constructor();
		}
	};
} // namespace android::animation


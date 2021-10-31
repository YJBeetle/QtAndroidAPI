#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Animator.hpp"

namespace android::animation
{
	class Animator;
}

namespace android::animation
{
	class ValueAnimator : public android::animation::Animator
	{
	public:
		// Fields
		static jint INFINITE();
		static jint RESTART();
		static jint REVERSE();
		
		ValueAnimator(QAndroidJniObject obj);
		// Constructors
		ValueAnimator();
		
		// Methods
		static jboolean areAnimatorsEnabled();
		static jlong getFrameDelay();
		static QAndroidJniObject ofArgb(jintArray arg0);
		static QAndroidJniObject ofFloat(jfloatArray arg0);
		static QAndroidJniObject ofInt(jintArray arg0);
		static QAndroidJniObject ofObject(__JniBaseClass arg0, jobjectArray arg1);
		static QAndroidJniObject ofPropertyValuesHolder(jarray arg0);
		static void setFrameDelay(jlong arg0);
		void addUpdateListener(__JniBaseClass arg0);
		void cancel();
		QAndroidJniObject clone();
		void end();
		jfloat getAnimatedFraction();
		jobject getAnimatedValue();
		jobject getAnimatedValue(jstring arg0);
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
		void removeUpdateListener(__JniBaseClass arg0);
		void resume();
		void reverse();
		void setCurrentFraction(jfloat arg0);
		void setCurrentPlayTime(jlong arg0);
		QAndroidJniObject setDuration(jlong arg0);
		void setEvaluator(__JniBaseClass arg0);
		void setFloatValues(jfloatArray arg0);
		void setIntValues(jintArray arg0);
		void setInterpolator(__JniBaseClass arg0);
		void setObjectValues(jobjectArray arg0);
		void setRepeatCount(jint arg0);
		void setRepeatMode(jint arg0);
		void setStartDelay(jlong arg0);
		void setValues(jarray arg0);
		void start();
		jstring toString();
	};
} // namespace android::animation


#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ValueAnimator(const char *className, const char *sig, Ts...agv) : android::animation::Animator(className, sig, std::forward<Ts>(agv)...) {}
		ValueAnimator(QJniObject obj);
		
		// Constructors
		ValueAnimator();
		
		// Methods
		static jboolean areAnimatorsEnabled();
		static jlong getFrameDelay();
		static android::animation::ValueAnimator ofArgb(jintArray arg0);
		static android::animation::ValueAnimator ofFloat(jfloatArray arg0);
		static android::animation::ValueAnimator ofInt(jintArray arg0);
		static android::animation::ValueAnimator ofObject(JObject arg0, jobjectArray arg1);
		static android::animation::ValueAnimator ofPropertyValuesHolder(jarray arg0);
		static void setFrameDelay(jlong arg0);
		void addUpdateListener(JObject arg0);
		void cancel();
		android::animation::ValueAnimator clone();
		void end();
		jfloat getAnimatedFraction();
		jobject getAnimatedValue();
		jobject getAnimatedValue(jstring arg0);
		jlong getCurrentPlayTime();
		jlong getDuration();
		JObject getInterpolator();
		jint getRepeatCount();
		jint getRepeatMode();
		jlong getStartDelay();
		jlong getTotalDuration();
		jarray getValues();
		jboolean isRunning();
		jboolean isStarted();
		void pause();
		void removeAllUpdateListeners();
		void removeUpdateListener(JObject arg0);
		void resume();
		void reverse();
		void setCurrentFraction(jfloat arg0);
		void setCurrentPlayTime(jlong arg0);
		android::animation::ValueAnimator setDuration(jlong arg0);
		void setEvaluator(JObject arg0);
		void setFloatValues(jfloatArray arg0);
		void setIntValues(jintArray arg0);
		void setInterpolator(JObject arg0);
		void setObjectValues(jobjectArray arg0);
		void setRepeatCount(jint arg0);
		void setRepeatMode(jint arg0);
		void setStartDelay(jlong arg0);
		void setValues(jarray arg0);
		void start();
		jstring toString();
	};
} // namespace android::animation


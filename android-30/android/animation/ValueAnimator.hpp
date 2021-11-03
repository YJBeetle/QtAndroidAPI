#pragma once

#include "./Animator.hpp"

class JFloatArray;
class JIntArray;
class JArray;
class JObjectArray;
namespace android::animation
{
	class Animator;
}
class JObject;
class JString;

namespace android::animation
{
	class ValueAnimator : public android::animation::Animator
	{
	public:
		// Fields
		static jint INFINITE();
		static jint RESTART();
		static jint REVERSE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ValueAnimator(const char *className, const char *sig, Ts...agv) : android::animation::Animator(className, sig, std::forward<Ts>(agv)...) {}
		ValueAnimator(QAndroidJniObject obj);
		
		// Constructors
		ValueAnimator();
		
		// Methods
		static jboolean areAnimatorsEnabled();
		static jlong getFrameDelay();
		static android::animation::ValueAnimator ofArgb(JIntArray arg0);
		static android::animation::ValueAnimator ofFloat(JFloatArray arg0);
		static android::animation::ValueAnimator ofInt(JIntArray arg0);
		static android::animation::ValueAnimator ofObject(JObject arg0, JObjectArray arg1);
		static android::animation::ValueAnimator ofPropertyValuesHolder(JArray arg0);
		static void setFrameDelay(jlong arg0);
		void addUpdateListener(JObject arg0);
		void cancel();
		android::animation::ValueAnimator clone();
		void end();
		jfloat getAnimatedFraction();
		JObject getAnimatedValue();
		JObject getAnimatedValue(JString arg0);
		jlong getCurrentPlayTime();
		jlong getDuration();
		JObject getInterpolator();
		jint getRepeatCount();
		jint getRepeatMode();
		jlong getStartDelay();
		jlong getTotalDuration();
		JArray getValues();
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
		void setFloatValues(JFloatArray arg0);
		void setIntValues(JIntArray arg0);
		void setInterpolator(JObject arg0);
		void setObjectValues(JObjectArray arg0);
		void setRepeatCount(jint arg0);
		void setRepeatMode(jint arg0);
		void setStartDelay(jlong arg0);
		void setValues(JArray arg0);
		void start();
		JString toString();
	};
} // namespace android::animation


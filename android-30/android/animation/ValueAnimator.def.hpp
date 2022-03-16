#pragma once

#include "./Animator.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ValueAnimator(const char *className, const char *sig, Ts...agv) : android::animation::Animator(className, sig, std::forward<Ts>(agv)...) {}
		ValueAnimator(QJniObject obj) : android::animation::Animator(obj) {}
		
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
		void addUpdateListener(JObject arg0) const;
		void cancel() const;
		android::animation::ValueAnimator clone() const;
		void end() const;
		jfloat getAnimatedFraction() const;
		JObject getAnimatedValue() const;
		JObject getAnimatedValue(JString arg0) const;
		jlong getCurrentPlayTime() const;
		jlong getDuration() const;
		JObject getInterpolator() const;
		jint getRepeatCount() const;
		jint getRepeatMode() const;
		jlong getStartDelay() const;
		jlong getTotalDuration() const;
		JArray getValues() const;
		jboolean isRunning() const;
		jboolean isStarted() const;
		void pause() const;
		void removeAllUpdateListeners() const;
		void removeUpdateListener(JObject arg0) const;
		void resume() const;
		void reverse() const;
		void setCurrentFraction(jfloat arg0) const;
		void setCurrentPlayTime(jlong arg0) const;
		android::animation::ValueAnimator setDuration(jlong arg0) const;
		void setEvaluator(JObject arg0) const;
		void setFloatValues(JFloatArray arg0) const;
		void setIntValues(JIntArray arg0) const;
		void setInterpolator(JObject arg0) const;
		void setObjectValues(JObjectArray arg0) const;
		void setRepeatCount(jint arg0) const;
		void setRepeatMode(jint arg0) const;
		void setStartDelay(jlong arg0) const;
		void setValues(JArray arg0) const;
		void start() const;
		JString toString() const;
	};
} // namespace android::animation


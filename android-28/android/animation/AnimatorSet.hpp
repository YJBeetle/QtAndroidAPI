#pragma once

#include "./Animator.hpp"

class JArray;
namespace android::animation
{
	class Animator;
}
namespace android::animation
{
	class AnimatorSet_Builder;
}
class JObject;
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::animation
{
	class AnimatorSet : public android::animation::Animator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AnimatorSet(const char *className, const char *sig, Ts...agv) : android::animation::Animator(className, sig, std::forward<Ts>(agv)...) {}
		AnimatorSet(QJniObject obj);
		
		// Constructors
		AnimatorSet();
		
		// Methods
		void cancel();
		android::animation::AnimatorSet clone();
		void end();
		java::util::ArrayList getChildAnimations();
		jlong getCurrentPlayTime();
		jlong getDuration();
		JObject getInterpolator();
		jlong getStartDelay();
		jlong getTotalDuration();
		jboolean isRunning();
		jboolean isStarted();
		void pause();
		android::animation::AnimatorSet_Builder play(android::animation::Animator arg0);
		void playSequentially(JArray arg0);
		void playSequentially(JObject arg0);
		void playTogether(JArray arg0);
		void playTogether(JObject arg0);
		void resume();
		void reverse();
		void setCurrentPlayTime(jlong arg0);
		android::animation::AnimatorSet setDuration(jlong arg0);
		void setInterpolator(JObject arg0);
		void setStartDelay(jlong arg0);
		void setTarget(JObject arg0);
		void setupEndValues();
		void setupStartValues();
		void start();
		JString toString();
	};
} // namespace android::animation


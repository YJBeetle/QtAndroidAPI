#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Animator.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::animation
{
	class AnimatorSet_Builder;
}
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
		__JniBaseClass getInterpolator();
		jlong getStartDelay();
		jlong getTotalDuration();
		jboolean isRunning();
		jboolean isStarted();
		void pause();
		android::animation::AnimatorSet_Builder play(android::animation::Animator arg0);
		void playSequentially(jarray arg0);
		void playSequentially(__JniBaseClass arg0);
		void playTogether(jarray arg0);
		void playTogether(__JniBaseClass arg0);
		void resume();
		void reverse();
		void setCurrentPlayTime(jlong arg0);
		android::animation::AnimatorSet setDuration(jlong arg0);
		void setInterpolator(__JniBaseClass arg0);
		void setStartDelay(jlong arg0);
		void setTarget(jobject arg0);
		void setupEndValues();
		void setupStartValues();
		void start();
		jstring toString();
	};
} // namespace android::animation


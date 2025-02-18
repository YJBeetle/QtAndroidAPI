#pragma once

#include "./Animator.def.hpp"

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
		AnimatorSet(QJniObject obj) : android::animation::Animator(obj) {}
		
		// Constructors
		AnimatorSet();
		
		// Methods
		void cancel() const;
		android::animation::AnimatorSet clone() const;
		void end() const;
		java::util::ArrayList getChildAnimations() const;
		jlong getCurrentPlayTime() const;
		jlong getDuration() const;
		JObject getInterpolator() const;
		jlong getStartDelay() const;
		jlong getTotalDuration() const;
		jboolean isRunning() const;
		jboolean isStarted() const;
		void pause() const;
		android::animation::AnimatorSet_Builder play(android::animation::Animator arg0) const;
		void playSequentially(JArray arg0) const;
		void playSequentially(JObject arg0) const;
		void playTogether(JArray arg0) const;
		void playTogether(JObject arg0) const;
		void resume() const;
		void reverse() const;
		void setCurrentPlayTime(jlong arg0) const;
		android::animation::AnimatorSet setDuration(jlong arg0) const;
		void setInterpolator(JObject arg0) const;
		void setStartDelay(jlong arg0) const;
		void setTarget(JObject arg0) const;
		void setupEndValues() const;
		void setupStartValues() const;
		void start() const;
		JString toString() const;
	};
} // namespace android::animation


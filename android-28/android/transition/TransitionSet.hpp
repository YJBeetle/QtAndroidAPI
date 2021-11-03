#pragma once

#include "./Transition.hpp"

namespace android::content
{
	class Context;
}
namespace android::transition
{
	class PathMotion;
}
namespace android::transition
{
	class Transition;
}
namespace android::transition
{
	class Transition_EpicenterCallback;
}
namespace android::transition
{
	class TransitionPropagation;
}
namespace android::transition
{
	class TransitionValues;
}
namespace android::view
{
	class View;
}
class JClass;
class JObject;
class JString;

namespace android::transition
{
	class TransitionSet : public android::transition::Transition
	{
	public:
		// Fields
		static jint ORDERING_SEQUENTIAL();
		static jint ORDERING_TOGETHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionSet(const char *className, const char *sig, Ts...agv) : android::transition::Transition(className, sig, std::forward<Ts>(agv)...) {}
		TransitionSet(QJniObject obj);
		
		// Constructors
		TransitionSet();
		TransitionSet(android::content::Context arg0, JObject arg1);
		
		// Methods
		android::transition::TransitionSet addListener(JObject arg0) const;
		android::transition::TransitionSet addTarget(android::view::View arg0) const;
		android::transition::TransitionSet addTarget(jint arg0) const;
		android::transition::TransitionSet addTarget(JClass arg0) const;
		android::transition::TransitionSet addTarget(JString arg0) const;
		android::transition::TransitionSet addTransition(android::transition::Transition arg0) const;
		void captureEndValues(android::transition::TransitionValues arg0) const;
		void captureStartValues(android::transition::TransitionValues arg0) const;
		android::transition::TransitionSet clone() const;
		android::transition::Transition excludeTarget(android::view::View arg0, jboolean arg1) const;
		android::transition::Transition excludeTarget(jint arg0, jboolean arg1) const;
		android::transition::Transition excludeTarget(JClass arg0, jboolean arg1) const;
		android::transition::Transition excludeTarget(JString arg0, jboolean arg1) const;
		jint getOrdering() const;
		android::transition::Transition getTransitionAt(jint arg0) const;
		jint getTransitionCount() const;
		android::transition::TransitionSet removeListener(JObject arg0) const;
		android::transition::TransitionSet removeTarget(android::view::View arg0) const;
		android::transition::TransitionSet removeTarget(jint arg0) const;
		android::transition::TransitionSet removeTarget(JClass arg0) const;
		android::transition::TransitionSet removeTarget(JString arg0) const;
		android::transition::TransitionSet removeTransition(android::transition::Transition arg0) const;
		android::transition::TransitionSet setDuration(jlong arg0) const;
		void setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0) const;
		android::transition::TransitionSet setInterpolator(JObject arg0) const;
		android::transition::TransitionSet setOrdering(jint arg0) const;
		void setPathMotion(android::transition::PathMotion arg0) const;
		void setPropagation(android::transition::TransitionPropagation arg0) const;
		android::transition::TransitionSet setStartDelay(jlong arg0) const;
	};
} // namespace android::transition


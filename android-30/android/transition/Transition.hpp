#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::animation
{
	class Animator;
}
namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Rect;
}
namespace android::transition
{
	class PathMotion;
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
namespace android::view
{
	class ViewGroup;
}
class JClass;
class JObject;
class JString;

namespace android::transition
{
	class Transition : public JObject
	{
	public:
		// Fields
		static jint MATCH_ID();
		static jint MATCH_INSTANCE();
		static jint MATCH_ITEM_ID();
		static jint MATCH_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Transition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Transition(QAndroidJniObject obj);
		
		// Constructors
		Transition();
		Transition(android::content::Context arg0, JObject arg1);
		
		// Methods
		android::transition::Transition addListener(JObject arg0);
		android::transition::Transition addTarget(android::view::View arg0);
		android::transition::Transition addTarget(jint arg0);
		android::transition::Transition addTarget(JClass arg0);
		android::transition::Transition addTarget(JString arg0);
		jboolean canRemoveViews();
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		android::transition::Transition clone();
		android::animation::Animator createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2);
		android::transition::Transition excludeChildren(android::view::View arg0, jboolean arg1);
		android::transition::Transition excludeChildren(jint arg0, jboolean arg1);
		android::transition::Transition excludeChildren(JClass arg0, jboolean arg1);
		android::transition::Transition excludeTarget(android::view::View arg0, jboolean arg1);
		android::transition::Transition excludeTarget(jint arg0, jboolean arg1);
		android::transition::Transition excludeTarget(JClass arg0, jboolean arg1);
		android::transition::Transition excludeTarget(JString arg0, jboolean arg1);
		jlong getDuration();
		android::graphics::Rect getEpicenter();
		android::transition::Transition_EpicenterCallback getEpicenterCallback();
		JObject getInterpolator();
		JString getName();
		android::transition::PathMotion getPathMotion();
		android::transition::TransitionPropagation getPropagation();
		jlong getStartDelay();
		JObject getTargetIds();
		JObject getTargetNames();
		JObject getTargetTypes();
		JObject getTargets();
		JArray getTransitionProperties();
		android::transition::TransitionValues getTransitionValues(android::view::View arg0, jboolean arg1);
		jboolean isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1);
		android::transition::Transition removeListener(JObject arg0);
		android::transition::Transition removeTarget(android::view::View arg0);
		android::transition::Transition removeTarget(jint arg0);
		android::transition::Transition removeTarget(JClass arg0);
		android::transition::Transition removeTarget(JString arg0);
		android::transition::Transition setDuration(jlong arg0);
		void setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0);
		android::transition::Transition setInterpolator(JObject arg0);
		void setMatchOrder(JIntArray arg0);
		void setPathMotion(android::transition::PathMotion arg0);
		void setPropagation(android::transition::TransitionPropagation arg0);
		android::transition::Transition setStartDelay(jlong arg0);
		JString toString();
	};
} // namespace android::transition


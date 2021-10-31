#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::transition
{
	class Transition : public __JniBaseClass
	{
	public:
		// Fields
		static jint MATCH_ID();
		static jint MATCH_INSTANCE();
		static jint MATCH_ITEM_ID();
		static jint MATCH_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Transition(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Transition(QAndroidJniObject obj);
		
		// Constructors
		Transition();
		Transition(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject addListener(__JniBaseClass arg0);
		QAndroidJniObject addTarget(android::view::View arg0);
		QAndroidJniObject addTarget(jint arg0);
		QAndroidJniObject addTarget(jclass arg0);
		QAndroidJniObject addTarget(jstring arg0);
		jboolean canRemoveViews();
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		QAndroidJniObject clone();
		QAndroidJniObject createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2);
		QAndroidJniObject excludeChildren(android::view::View arg0, jboolean arg1);
		QAndroidJniObject excludeChildren(jint arg0, jboolean arg1);
		QAndroidJniObject excludeChildren(jclass arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(android::view::View arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jint arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jclass arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jstring arg0, jboolean arg1);
		jlong getDuration();
		QAndroidJniObject getEpicenter();
		QAndroidJniObject getEpicenterCallback();
		QAndroidJniObject getInterpolator();
		jstring getName();
		QAndroidJniObject getPathMotion();
		QAndroidJniObject getPropagation();
		jlong getStartDelay();
		QAndroidJniObject getTargetIds();
		QAndroidJniObject getTargetNames();
		QAndroidJniObject getTargetTypes();
		QAndroidJniObject getTargets();
		jarray getTransitionProperties();
		QAndroidJniObject getTransitionValues(android::view::View arg0, jboolean arg1);
		jboolean isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1);
		QAndroidJniObject removeListener(__JniBaseClass arg0);
		QAndroidJniObject removeTarget(android::view::View arg0);
		QAndroidJniObject removeTarget(jint arg0);
		QAndroidJniObject removeTarget(jclass arg0);
		QAndroidJniObject removeTarget(jstring arg0);
		QAndroidJniObject setDuration(jlong arg0);
		void setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0);
		QAndroidJniObject setInterpolator(__JniBaseClass arg0);
		void setMatchOrder(jintArray arg0);
		void setPathMotion(android::transition::PathMotion arg0);
		void setPropagation(android::transition::TransitionPropagation arg0);
		QAndroidJniObject setStartDelay(jlong arg0);
		jstring toString();
	};
} // namespace android::transition


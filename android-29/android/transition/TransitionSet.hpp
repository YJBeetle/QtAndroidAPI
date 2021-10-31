#pragma once

#include "../../__JniBaseClass.hpp"
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

namespace android::transition
{
	class TransitionSet : public android::transition::Transition
	{
	public:
		// Fields
		static jint ORDERING_SEQUENTIAL();
		static jint ORDERING_TOGETHER();
		
		TransitionSet(QAndroidJniObject obj);
		// Constructors
		TransitionSet();
		TransitionSet(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject addListener(__JniBaseClass arg0);
		QAndroidJniObject addTarget(android::view::View arg0);
		QAndroidJniObject addTarget(jint arg0);
		QAndroidJniObject addTarget(jclass arg0);
		QAndroidJniObject addTarget(jstring arg0);
		QAndroidJniObject addTransition(android::transition::Transition arg0);
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		QAndroidJniObject clone();
		QAndroidJniObject excludeTarget(android::view::View arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jint arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jclass arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jstring arg0, jboolean arg1);
		jint getOrdering();
		QAndroidJniObject getTransitionAt(jint arg0);
		jint getTransitionCount();
		QAndroidJniObject removeListener(__JniBaseClass arg0);
		QAndroidJniObject removeTarget(android::view::View arg0);
		QAndroidJniObject removeTarget(jint arg0);
		QAndroidJniObject removeTarget(jclass arg0);
		QAndroidJniObject removeTarget(jstring arg0);
		QAndroidJniObject removeTransition(android::transition::Transition arg0);
		QAndroidJniObject setDuration(jlong arg0);
		void setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0);
		QAndroidJniObject setInterpolator(__JniBaseClass arg0);
		QAndroidJniObject setOrdering(jint arg0);
		void setPathMotion(android::transition::PathMotion arg0);
		void setPropagation(android::transition::TransitionPropagation arg0);
		QAndroidJniObject setStartDelay(jlong arg0);
	};
} // namespace android::transition


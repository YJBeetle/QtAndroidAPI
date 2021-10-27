#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::animation
{
	class LayoutTransition : public __JniBaseClass
	{
	public:
		// Fields
		static jint APPEARING();
		static jint CHANGE_APPEARING();
		static jint CHANGE_DISAPPEARING();
		static jint CHANGING();
		static jint DISAPPEARING();
		
		LayoutTransition(QAndroidJniObject obj);
		// Constructors
		LayoutTransition();
		
		// Methods
		void addChild(android::view::ViewGroup arg0, android::view::View arg1);
		void addTransitionListener(__JniBaseClass arg0);
		void disableTransitionType(jint arg0);
		void enableTransitionType(jint arg0);
		QAndroidJniObject getAnimator(jint arg0);
		jlong getDuration(jint arg0);
		QAndroidJniObject getInterpolator(jint arg0);
		jlong getStagger(jint arg0);
		jlong getStartDelay(jint arg0);
		QAndroidJniObject getTransitionListeners();
		void hideChild(android::view::ViewGroup arg0, android::view::View arg1);
		void hideChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2);
		jboolean isChangingLayout();
		jboolean isRunning();
		jboolean isTransitionTypeEnabled(jint arg0);
		void removeChild(android::view::ViewGroup arg0, android::view::View arg1);
		void removeTransitionListener(__JniBaseClass arg0);
		void setAnimateParentHierarchy(jboolean arg0);
		void setAnimator(jint arg0, android::animation::Animator arg1);
		void setDuration(jlong arg0);
		void setDuration(jint arg0, jlong arg1);
		void setInterpolator(jint arg0, __JniBaseClass arg1);
		void setStagger(jint arg0, jlong arg1);
		void setStartDelay(jint arg0, jlong arg1);
		void showChild(android::view::ViewGroup arg0, android::view::View arg1);
		void showChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2);
	};
} // namespace android::animation


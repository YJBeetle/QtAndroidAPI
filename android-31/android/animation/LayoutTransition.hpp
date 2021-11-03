#pragma once

#include "../../JObject.hpp"

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
	class LayoutTransition : public JObject
	{
	public:
		// Fields
		static jint APPEARING();
		static jint CHANGE_APPEARING();
		static jint CHANGE_DISAPPEARING();
		static jint CHANGING();
		static jint DISAPPEARING();
		
		// QJniObject forward
		template<typename ...Ts> explicit LayoutTransition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LayoutTransition(QJniObject obj);
		
		// Constructors
		LayoutTransition();
		
		// Methods
		void addChild(android::view::ViewGroup arg0, android::view::View arg1);
		void addTransitionListener(JObject arg0);
		void disableTransitionType(jint arg0);
		void enableTransitionType(jint arg0);
		android::animation::Animator getAnimator(jint arg0);
		jlong getDuration(jint arg0);
		JObject getInterpolator(jint arg0);
		jlong getStagger(jint arg0);
		jlong getStartDelay(jint arg0);
		JObject getTransitionListeners();
		void hideChild(android::view::ViewGroup arg0, android::view::View arg1);
		void hideChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2);
		jboolean isChangingLayout();
		jboolean isRunning();
		jboolean isTransitionTypeEnabled(jint arg0);
		void removeChild(android::view::ViewGroup arg0, android::view::View arg1);
		void removeTransitionListener(JObject arg0);
		void setAnimateParentHierarchy(jboolean arg0);
		void setAnimator(jint arg0, android::animation::Animator arg1);
		void setDuration(jlong arg0);
		void setDuration(jint arg0, jlong arg1);
		void setInterpolator(jint arg0, JObject arg1);
		void setStagger(jint arg0, jlong arg1);
		void setStartDelay(jint arg0, jlong arg1);
		void showChild(android::view::ViewGroup arg0, android::view::View arg1);
		void showChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2);
	};
} // namespace android::animation


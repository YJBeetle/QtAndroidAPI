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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LayoutTransition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LayoutTransition(QAndroidJniObject obj);
		
		// Constructors
		LayoutTransition();
		
		// Methods
		void addChild(android::view::ViewGroup arg0, android::view::View arg1) const;
		void addTransitionListener(JObject arg0) const;
		void disableTransitionType(jint arg0) const;
		void enableTransitionType(jint arg0) const;
		android::animation::Animator getAnimator(jint arg0) const;
		jlong getDuration(jint arg0) const;
		JObject getInterpolator(jint arg0) const;
		jlong getStagger(jint arg0) const;
		jlong getStartDelay(jint arg0) const;
		JObject getTransitionListeners() const;
		void hideChild(android::view::ViewGroup arg0, android::view::View arg1) const;
		void hideChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2) const;
		jboolean isChangingLayout() const;
		jboolean isRunning() const;
		jboolean isTransitionTypeEnabled(jint arg0) const;
		void removeChild(android::view::ViewGroup arg0, android::view::View arg1) const;
		void removeTransitionListener(JObject arg0) const;
		void setAnimateParentHierarchy(jboolean arg0) const;
		void setAnimator(jint arg0, android::animation::Animator arg1) const;
		void setDuration(jlong arg0) const;
		void setDuration(jint arg0, jlong arg1) const;
		void setInterpolator(jint arg0, JObject arg1) const;
		void setStagger(jint arg0, jlong arg1) const;
		void setStartDelay(jint arg0, jlong arg1) const;
		void showChild(android::view::ViewGroup arg0, android::view::View arg1) const;
		void showChild(android::view::ViewGroup arg0, android::view::View arg1, jint arg2) const;
	};
} // namespace android::animation


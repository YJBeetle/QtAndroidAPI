#pragma once

#include "./FrameLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view::animation
{
	class Animation;
}
class JString;

namespace android::widget
{
	class ViewAnimator : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewAnimator(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		ViewAnimator(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
		
		// Constructors
		ViewAnimator(android::content::Context arg0);
		ViewAnimator(android::content::Context arg0, JObject arg1);
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const;
		JString getAccessibilityClassName() const;
		jboolean getAnimateFirstView() const;
		jint getBaseline() const;
		android::view::View getCurrentView() const;
		jint getDisplayedChild() const;
		android::view::animation::Animation getInAnimation() const;
		android::view::animation::Animation getOutAnimation() const;
		void removeAllViews() const;
		void removeView(android::view::View arg0) const;
		void removeViewAt(jint arg0) const;
		void removeViewInLayout(android::view::View arg0) const;
		void removeViews(jint arg0, jint arg1) const;
		void removeViewsInLayout(jint arg0, jint arg1) const;
		void setAnimateFirstView(jboolean arg0) const;
		void setDisplayedChild(jint arg0) const;
		void setInAnimation(android::view::animation::Animation arg0) const;
		void setInAnimation(android::content::Context arg0, jint arg1) const;
		void setOutAnimation(android::view::animation::Animation arg0) const;
		void setOutAnimation(android::content::Context arg0, jint arg1) const;
		void showNext() const;
		void showPrevious() const;
	};
} // namespace android::widget


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
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewAnimator(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		ViewAnimator(QJniObject obj);
		
		// Constructors
		ViewAnimator(android::content::Context arg0);
		ViewAnimator(android::content::Context arg0, JObject arg1);
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		JString getAccessibilityClassName();
		jboolean getAnimateFirstView();
		jint getBaseline();
		android::view::View getCurrentView();
		jint getDisplayedChild();
		android::view::animation::Animation getInAnimation();
		android::view::animation::Animation getOutAnimation();
		void removeAllViews();
		void removeView(android::view::View arg0);
		void removeViewAt(jint arg0);
		void removeViewInLayout(android::view::View arg0);
		void removeViews(jint arg0, jint arg1);
		void removeViewsInLayout(jint arg0, jint arg1);
		void setAnimateFirstView(jboolean arg0);
		void setDisplayedChild(jint arg0);
		void setInAnimation(android::view::animation::Animation arg0);
		void setInAnimation(android::content::Context arg0, jint arg1);
		void setOutAnimation(android::view::animation::Animation arg0);
		void setOutAnimation(android::content::Context arg0, jint arg1);
		void showNext();
		void showPrevious();
	};
} // namespace android::widget


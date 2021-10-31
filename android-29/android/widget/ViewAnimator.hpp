#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
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

namespace android::widget
{
	class ViewAnimator : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		ViewAnimator(QAndroidJniObject obj);
		// Constructors
		ViewAnimator(android::content::Context arg0);
		ViewAnimator(android::content::Context arg0, __JniBaseClass arg1);
		ViewAnimator() = default;
		
		// Methods
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		jstring getAccessibilityClassName();
		jboolean getAnimateFirstView();
		jint getBaseline();
		QAndroidJniObject getCurrentView();
		jint getDisplayedChild();
		QAndroidJniObject getInAnimation();
		QAndroidJniObject getOutAnimation();
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


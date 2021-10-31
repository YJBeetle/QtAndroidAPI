#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}

namespace android::widget
{
	class HorizontalScrollView : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HorizontalScrollView(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		HorizontalScrollView(QAndroidJniObject obj);
		
		// Constructors
		HorizontalScrollView(android::content::Context arg0);
		HorizontalScrollView(android::content::Context arg0, __JniBaseClass arg1);
		HorizontalScrollView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		HorizontalScrollView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addView(android::view::View arg0);
		void addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void addView(android::view::View arg0, jint arg1);
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		jboolean arrowScroll(jint arg0);
		void computeScroll();
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		void draw(android::graphics::Canvas arg0);
		jboolean executeKeyEvent(android::view::KeyEvent arg0);
		void fling(jint arg0);
		jboolean fullScroll(jint arg0);
		jstring getAccessibilityClassName();
		jint getLeftEdgeEffectColor();
		jint getMaxScrollAmount();
		jint getRightEdgeEffectColor();
		jboolean isFillViewport();
		jboolean isSmoothScrollingEnabled();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean pageScroll(jint arg0);
		void requestChildFocus(android::view::View arg0, android::view::View arg1);
		jboolean requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2);
		void requestDisallowInterceptTouchEvent(jboolean arg0);
		void requestLayout();
		void scrollTo(jint arg0, jint arg1);
		void setEdgeEffectColor(jint arg0);
		void setFillViewport(jboolean arg0);
		void setLeftEdgeEffectColor(jint arg0);
		void setRightEdgeEffectColor(jint arg0);
		void setSmoothScrollingEnabled(jboolean arg0);
		jboolean shouldDelayChildPressedState();
		void smoothScrollBy(jint arg0, jint arg1);
		void smoothScrollTo(jint arg0, jint arg1);
	};
} // namespace android::widget


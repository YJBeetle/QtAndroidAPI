#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class SlidingDrawer : public android::view::ViewGroup
	{
	public:
		// Fields
		static jint ORIENTATION_HORIZONTAL();
		static jint ORIENTATION_VERTICAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SlidingDrawer(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		SlidingDrawer(QAndroidJniObject obj);
		
		// Constructors
		SlidingDrawer(android::content::Context arg0, JObject arg1);
		SlidingDrawer(android::content::Context arg0, JObject arg1, jint arg2);
		SlidingDrawer(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void animateClose();
		void animateOpen();
		void animateToggle();
		void close();
		jstring getAccessibilityClassName();
		android::view::View getContent();
		android::view::View getHandle();
		jboolean isMoving();
		jboolean isOpened();
		void lock();
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void open();
		void setOnDrawerCloseListener(JObject arg0);
		void setOnDrawerOpenListener(JObject arg0);
		void setOnDrawerScrollListener(JObject arg0);
		void toggle();
		void unlock();
	};
} // namespace android::widget


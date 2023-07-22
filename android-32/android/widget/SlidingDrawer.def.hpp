#pragma once

#include "../view/ViewGroup.def.hpp"

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
class JString;

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
		SlidingDrawer(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
		
		// Constructors
		SlidingDrawer(android::content::Context arg0, JObject arg1);
		SlidingDrawer(android::content::Context arg0, JObject arg1, jint arg2);
		SlidingDrawer(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void animateClose() const;
		void animateOpen() const;
		void animateToggle() const;
		void close() const;
		JString getAccessibilityClassName() const;
		android::view::View getContent() const;
		android::view::View getHandle() const;
		jboolean isMoving() const;
		jboolean isOpened() const;
		void lock() const;
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void open() const;
		void setOnDrawerCloseListener(JObject arg0) const;
		void setOnDrawerOpenListener(JObject arg0) const;
		void setOnDrawerScrollListener(JObject arg0) const;
		void toggle() const;
		void unlock() const;
	};
} // namespace android::widget


#pragma once

#include "./AbsSpinner.hpp"

namespace android::content
{
	class Context;
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
namespace android::view::animation
{
	class Transformation;
}
class JString;

namespace android::widget
{
	class Gallery : public android::widget::AbsSpinner
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Gallery(const char *className, const char *sig, Ts...agv) : android::widget::AbsSpinner(className, sig, std::forward<Ts>(agv)...) {}
		Gallery(QAndroidJniObject obj);
		
		// Constructors
		Gallery(android::content::Context arg0);
		Gallery(android::content::Context arg0, JObject arg1);
		Gallery(android::content::Context arg0, JObject arg1, jint arg2);
		Gallery(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		void dispatchSetSelected(jboolean arg0) const;
		android::view::ViewGroup_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		jboolean onDown(android::view::MotionEvent arg0) const;
		jboolean onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onLongPress(android::view::MotionEvent arg0) const;
		jboolean onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3) const;
		void onShowPress(android::view::MotionEvent arg0) const;
		jboolean onSingleTapUp(android::view::MotionEvent arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setAnimationDuration(jint arg0) const;
		void setCallbackDuringFling(jboolean arg0) const;
		void setGravity(jint arg0) const;
		void setSpacing(jint arg0) const;
		void setUnselectedAlpha(jfloat arg0) const;
		jboolean showContextMenu() const;
		jboolean showContextMenu(jfloat arg0, jfloat arg1) const;
		jboolean showContextMenuForChild(android::view::View arg0) const;
		jboolean showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2) const;
	};
} // namespace android::widget


#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
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
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		void dispatchSetSelected(jboolean arg0);
		android::view::ViewGroup_LayoutParams generateLayoutParams(JObject arg0);
		jstring getAccessibilityClassName();
		jboolean onDown(android::view::MotionEvent arg0);
		jboolean onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void onLongPress(android::view::MotionEvent arg0);
		jboolean onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3);
		void onShowPress(android::view::MotionEvent arg0);
		jboolean onSingleTapUp(android::view::MotionEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setAnimationDuration(jint arg0);
		void setCallbackDuringFling(jboolean arg0);
		void setGravity(jint arg0);
		void setSpacing(jint arg0);
		void setUnselectedAlpha(jfloat arg0);
		jboolean showContextMenu();
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
		jboolean showContextMenuForChild(android::view::View arg0);
		jboolean showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2);
	};
} // namespace android::widget


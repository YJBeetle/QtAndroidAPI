#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

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
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeProvider;
}

namespace android::widget
{
	class NumberPicker : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberPicker(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		NumberPicker(QJniObject obj);
		
		// Constructors
		NumberPicker(android::content::Context arg0);
		NumberPicker(android::content::Context arg0, __JniBaseClass arg1);
		NumberPicker(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		NumberPicker(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void computeScroll();
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0);
		android::view::accessibility::AccessibilityNodeProvider getAccessibilityNodeProvider();
		jarray getDisplayedValues();
		jint getMaxValue();
		jint getMinValue();
		jint getSolidColor();
		jint getValue();
		jboolean getWrapSelectorWheel();
		void jumpDrawablesToCurrentState();
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean performClick();
		jboolean performLongClick();
		void scrollBy(jint arg0, jint arg1);
		void setDisplayedValues(jarray arg0);
		void setEnabled(jboolean arg0);
		void setFormatter(__JniBaseClass arg0);
		void setMaxValue(jint arg0);
		void setMinValue(jint arg0);
		void setOnLongPressUpdateInterval(jlong arg0);
		void setOnScrollListener(__JniBaseClass arg0);
		void setOnValueChangedListener(__JniBaseClass arg0);
		void setValue(jint arg0);
		void setWrapSelectorWheel(jboolean arg0);
	};
} // namespace android::widget


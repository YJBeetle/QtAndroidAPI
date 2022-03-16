#pragma once

#include "./LinearLayout.hpp"

class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberPicker(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		NumberPicker(QAndroidJniObject obj) : android::widget::LinearLayout(obj) {}
		
		// Constructors
		NumberPicker(android::content::Context arg0);
		NumberPicker(android::content::Context arg0, JObject arg1);
		NumberPicker(android::content::Context arg0, JObject arg1, jint arg2);
		NumberPicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void computeScroll() const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0) const;
		android::view::accessibility::AccessibilityNodeProvider getAccessibilityNodeProvider() const;
		JArray getDisplayedValues() const;
		jint getMaxValue() const;
		jint getMinValue() const;
		jint getSelectionDividerHeight() const;
		jint getSolidColor() const;
		jint getTextColor() const;
		jfloat getTextSize() const;
		jint getValue() const;
		jboolean getWrapSelectorWheel() const;
		void jumpDrawablesToCurrentState() const;
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean performClick() const;
		jboolean performLongClick() const;
		void scrollBy(jint arg0, jint arg1) const;
		void setDisplayedValues(JArray arg0) const;
		void setEnabled(jboolean arg0) const;
		void setFormatter(JObject arg0) const;
		void setMaxValue(jint arg0) const;
		void setMinValue(jint arg0) const;
		void setOnLongPressUpdateInterval(jlong arg0) const;
		void setOnScrollListener(JObject arg0) const;
		void setOnValueChangedListener(JObject arg0) const;
		void setSelectionDividerHeight(jint arg0) const;
		void setTextColor(jint arg0) const;
		void setTextSize(jfloat arg0) const;
		void setValue(jint arg0) const;
		void setWrapSelectorWheel(jboolean arg0) const;
	};
} // namespace android::widget


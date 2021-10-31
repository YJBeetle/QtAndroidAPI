#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::accessibility
{
	class AccessibilityNodeInfo_AccessibilityAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_ACCESSIBILITY_FOCUS();
		static QAndroidJniObject ACTION_CLEAR_ACCESSIBILITY_FOCUS();
		static QAndroidJniObject ACTION_CLEAR_FOCUS();
		static QAndroidJniObject ACTION_CLEAR_SELECTION();
		static QAndroidJniObject ACTION_CLICK();
		static QAndroidJniObject ACTION_COLLAPSE();
		static QAndroidJniObject ACTION_CONTEXT_CLICK();
		static QAndroidJniObject ACTION_COPY();
		static QAndroidJniObject ACTION_CUT();
		static QAndroidJniObject ACTION_DISMISS();
		static QAndroidJniObject ACTION_EXPAND();
		static QAndroidJniObject ACTION_FOCUS();
		static QAndroidJniObject ACTION_HIDE_TOOLTIP();
		static QAndroidJniObject ACTION_LONG_CLICK();
		static QAndroidJniObject ACTION_MOVE_WINDOW();
		static QAndroidJniObject ACTION_NEXT_AT_MOVEMENT_GRANULARITY();
		static QAndroidJniObject ACTION_NEXT_HTML_ELEMENT();
		static QAndroidJniObject ACTION_PAGE_DOWN();
		static QAndroidJniObject ACTION_PAGE_LEFT();
		static QAndroidJniObject ACTION_PAGE_RIGHT();
		static QAndroidJniObject ACTION_PAGE_UP();
		static QAndroidJniObject ACTION_PASTE();
		static QAndroidJniObject ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY();
		static QAndroidJniObject ACTION_PREVIOUS_HTML_ELEMENT();
		static QAndroidJniObject ACTION_SCROLL_BACKWARD();
		static QAndroidJniObject ACTION_SCROLL_DOWN();
		static QAndroidJniObject ACTION_SCROLL_FORWARD();
		static QAndroidJniObject ACTION_SCROLL_LEFT();
		static QAndroidJniObject ACTION_SCROLL_RIGHT();
		static QAndroidJniObject ACTION_SCROLL_TO_POSITION();
		static QAndroidJniObject ACTION_SCROLL_UP();
		static QAndroidJniObject ACTION_SELECT();
		static QAndroidJniObject ACTION_SET_PROGRESS();
		static QAndroidJniObject ACTION_SET_SELECTION();
		static QAndroidJniObject ACTION_SET_TEXT();
		static QAndroidJniObject ACTION_SHOW_ON_SCREEN();
		static QAndroidJniObject ACTION_SHOW_TOOLTIP();
		
		AccessibilityNodeInfo_AccessibilityAction(QAndroidJniObject obj);
		// Constructors
		AccessibilityNodeInfo_AccessibilityAction(jint arg0, jstring arg1);
		AccessibilityNodeInfo_AccessibilityAction() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getId();
		jstring getLabel();
		jint hashCode();
		jstring toString();
	};
} // namespace android::view::accessibility


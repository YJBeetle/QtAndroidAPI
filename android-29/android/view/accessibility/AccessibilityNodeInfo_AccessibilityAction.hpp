#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::accessibility
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
		
		// Constructors
		void __constructor(jint arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint getId();
		jstring getLabel();
	};
} // namespace __jni_impl::android::view::accessibility


namespace __jni_impl::android::view::accessibility
{
	// Fields
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_ACCESSIBILITY_FOCUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_ACCESSIBILITY_FOCUS",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_CLEAR_ACCESSIBILITY_FOCUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_CLEAR_ACCESSIBILITY_FOCUS",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_CLEAR_FOCUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_CLEAR_FOCUS",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_CLEAR_SELECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_CLEAR_SELECTION",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_CLICK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_CLICK",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_COLLAPSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_COLLAPSE",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_CONTEXT_CLICK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_CONTEXT_CLICK",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_COPY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_COPY",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_CUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_CUT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_DISMISS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_DISMISS",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_EXPAND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_EXPAND",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_FOCUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_FOCUS",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_HIDE_TOOLTIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_HIDE_TOOLTIP",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_LONG_CLICK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_LONG_CLICK",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_MOVE_WINDOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_MOVE_WINDOW",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_NEXT_AT_MOVEMENT_GRANULARITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_NEXT_AT_MOVEMENT_GRANULARITY",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_NEXT_HTML_ELEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_NEXT_HTML_ELEMENT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_PAGE_DOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_PAGE_DOWN",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_PAGE_LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_PAGE_LEFT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_PAGE_RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_PAGE_RIGHT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_PAGE_UP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_PAGE_UP",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_PASTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_PASTE",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_PREVIOUS_HTML_ELEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_PREVIOUS_HTML_ELEMENT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SCROLL_BACKWARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SCROLL_BACKWARD",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SCROLL_DOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SCROLL_DOWN",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SCROLL_FORWARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SCROLL_FORWARD",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SCROLL_LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SCROLL_LEFT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SCROLL_RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SCROLL_RIGHT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SCROLL_TO_POSITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SCROLL_TO_POSITION",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SCROLL_UP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SCROLL_UP",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SELECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SELECT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SET_PROGRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SET_PROGRESS",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SET_SELECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SET_SELECTION",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SET_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SET_TEXT",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SHOW_ON_SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SHOW_ON_SCREEN",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_AccessibilityAction::ACTION_SHOW_TOOLTIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"ACTION_SHOW_TOOLTIP",
			"Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;"
		);
	}
	
	// Constructors
	void AccessibilityNodeInfo_AccessibilityAction::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityNodeInfo$AccessibilityAction",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean AccessibilityNodeInfo_AccessibilityAction::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AccessibilityNodeInfo_AccessibilityAction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo_AccessibilityAction::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint AccessibilityNodeInfo_AccessibilityAction::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo_AccessibilityAction::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_AccessibilityAction : public __jni_impl::android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction
	{
	public:
		AccessibilityNodeInfo_AccessibilityAction(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityNodeInfo_AccessibilityAction(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION


#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityWindowInfo;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_AccessibilityAction;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_RangeInfo;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo;
}

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACTION_ACCESSIBILITY_FOCUS();
		static jstring ACTION_ARGUMENT_COLUMN_INT();
		static jstring ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN();
		static jstring ACTION_ARGUMENT_HTML_ELEMENT_STRING();
		static jstring ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT();
		static jstring ACTION_ARGUMENT_MOVE_WINDOW_X();
		static jstring ACTION_ARGUMENT_MOVE_WINDOW_Y();
		static jstring ACTION_ARGUMENT_PROGRESS_VALUE();
		static jstring ACTION_ARGUMENT_ROW_INT();
		static jstring ACTION_ARGUMENT_SELECTION_END_INT();
		static jstring ACTION_ARGUMENT_SELECTION_START_INT();
		static jstring ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE();
		static jint ACTION_CLEAR_ACCESSIBILITY_FOCUS();
		static jint ACTION_CLEAR_FOCUS();
		static jint ACTION_CLEAR_SELECTION();
		static jint ACTION_CLICK();
		static jint ACTION_COLLAPSE();
		static jint ACTION_COPY();
		static jint ACTION_CUT();
		static jint ACTION_DISMISS();
		static jint ACTION_EXPAND();
		static jint ACTION_FOCUS();
		static jint ACTION_LONG_CLICK();
		static jint ACTION_NEXT_AT_MOVEMENT_GRANULARITY();
		static jint ACTION_NEXT_HTML_ELEMENT();
		static jint ACTION_PASTE();
		static jint ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY();
		static jint ACTION_PREVIOUS_HTML_ELEMENT();
		static jint ACTION_SCROLL_BACKWARD();
		static jint ACTION_SCROLL_FORWARD();
		static jint ACTION_SELECT();
		static jint ACTION_SET_SELECTION();
		static jint ACTION_SET_TEXT();
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH();
		static jstring EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX();
		static jstring EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY();
		static jint FOCUS_ACCESSIBILITY();
		static jint FOCUS_INPUT();
		static jint MOVEMENT_GRANULARITY_CHARACTER();
		static jint MOVEMENT_GRANULARITY_LINE();
		static jint MOVEMENT_GRANULARITY_PAGE();
		static jint MOVEMENT_GRANULARITY_PARAGRAPH();
		static jint MOVEMENT_GRANULARITY_WORD();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getPackageName();
		QAndroidJniObject getParent();
		jint getActions();
		jstring getClassName();
		void setParent(__jni_impl::android::view::View arg0, jint arg1);
		void setParent(__jni_impl::android::view::View arg0);
		void setError(jstring arg0);
		jboolean isEnabled();
		void setText(jstring arg0);
		jstring getText();
		jboolean isVisibleToUser();
		void setFocused(jboolean arg0);
		void setAccessibilityFocused(jboolean arg0);
		jint getTextSelectionStart();
		jint getTextSelectionEnd();
		void setMaxTextLength(jint arg0);
		jboolean performAction(jint arg0);
		jboolean performAction(jint arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject findAccessibilityNodeInfosByText(jstring arg0);
		QAndroidJniObject getChild(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getWindow();
		QAndroidJniObject getExtras();
		void setClassName(jstring arg0);
		void setPassword(jboolean arg0);
		void addChild(__jni_impl::android::view::View arg0);
		void addChild(__jni_impl::android::view::View arg0, jint arg1);
		void setInputType(jint arg0);
		jint getInputType();
		jstring getError();
		jboolean refreshWithExtraData(jstring arg0, __jni_impl::android::os::Bundle arg1);
		jboolean removeChild(__jni_impl::android::view::View arg0, jint arg1);
		jboolean removeChild(__jni_impl::android::view::View arg0);
		QAndroidJniObject getActionList();
		jboolean removeAction(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0);
		void removeAction(jint arg0);
		QAndroidJniObject getTraversalBefore();
		void setTraversalBefore(__jni_impl::android::view::View arg0);
		void setTraversalBefore(__jni_impl::android::view::View arg0, jint arg1);
		QAndroidJniObject getTraversalAfter();
		void setTraversalAfter(__jni_impl::android::view::View arg0, jint arg1);
		void setTraversalAfter(__jni_impl::android::view::View arg0);
		QAndroidJniObject getAvailableExtraData();
		void setAvailableExtraData(__jni_impl::__JniBaseClass arg0);
		void setMovementGranularities(jint arg0);
		jint getMovementGranularities();
		QAndroidJniObject findAccessibilityNodeInfosByViewId(jstring arg0);
		void getBoundsInParent(__jni_impl::android::graphics::Rect arg0);
		void setBoundsInParent(__jni_impl::android::graphics::Rect arg0);
		void getBoundsInScreen(__jni_impl::android::graphics::Rect arg0);
		void setBoundsInScreen(__jni_impl::android::graphics::Rect arg0);
		void setVisibleToUser(jboolean arg0);
		jboolean isEditable();
		void setEditable(jboolean arg0);
		void setPaneTitle(jstring arg0);
		jstring getPaneTitle();
		jint getDrawingOrder();
		void setDrawingOrder(jint arg0);
		QAndroidJniObject getCollectionInfo();
		void setCollectionInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_CollectionInfo arg0);
		QAndroidJniObject getCollectionItemInfo();
		void setCollectionItemInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo arg0);
		QAndroidJniObject getRangeInfo();
		void setRangeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_RangeInfo arg0);
		jboolean isContentInvalid();
		void setContentInvalid(jboolean arg0);
		jint getLiveRegion();
		void setLiveRegion(jint arg0);
		jboolean isMultiLine();
		void setMultiLine(jboolean arg0);
		jboolean canOpenPopup();
		void setCanOpenPopup(jboolean arg0);
		jboolean isDismissable();
		void setDismissable(jboolean arg0);
		jboolean isShowingHintText();
		void setShowingHintText(jboolean arg0);
		void setHeading(jboolean arg0);
		jboolean isTextEntryKey();
		void setTextEntryKey(jboolean arg0);
		jstring getHintText();
		void setHintText(jstring arg0);
		void setLabeledBy(__jni_impl::android::view::View arg0, jint arg1);
		void setLabeledBy(__jni_impl::android::view::View arg0);
		QAndroidJniObject getLabeledBy();
		void setViewIdResourceName(jstring arg0);
		jstring getViewIdResourceName();
		void setTextSelection(jint arg0, jint arg1);
		QAndroidJniObject getTouchDelegateInfo();
		void setTouchDelegateInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo arg0);
		void addAction(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0);
		void addAction(jint arg0);
		QAndroidJniObject focusSearch(jint arg0);
		QAndroidJniObject findFocus(jint arg0);
		jint getChildCount();
		jstring getContentDescription();
		void setContentDescription(jstring arg0);
		QAndroidJniObject getLabelFor();
		void setLabelFor(__jni_impl::android::view::View arg0, jint arg1);
		void setLabelFor(__jni_impl::android::view::View arg0);
		jboolean isFocused();
		void setEnabled(jboolean arg0);
		void setFocusable(jboolean arg0);
		jboolean isClickable();
		void setClickable(jboolean arg0);
		jboolean isLongClickable();
		void setLongClickable(jboolean arg0);
		jboolean isContextClickable();
		void setContextClickable(jboolean arg0);
		jboolean isFocusable();
		jboolean isScreenReaderFocusable();
		void setScreenReaderFocusable(jboolean arg0);
		jboolean isHeading();
		jboolean isAccessibilityFocused();
		void setImportantForAccessibility(jboolean arg0);
		jboolean isImportantForAccessibility();
		jint getWindowId();
		void setSelected(jboolean arg0);
		jboolean isSelected();
		void setTooltipText(jstring arg0);
		jstring getTooltipText();
		jboolean refresh();
		jint getMaxTextLength();
		void setPackageName(jstring arg0);
		jboolean isChecked();
		void setChecked(jboolean arg0);
		jboolean isPassword();
		jboolean isScrollable();
		void setScrollable(jboolean arg0);
		void setCheckable(jboolean arg0);
		jboolean isCheckable();
		void setSource(__jni_impl::android::view::View arg0);
		void setSource(__jni_impl::android::view::View arg0, jint arg1);
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(__jni_impl::android::view::View arg0);
		static QAndroidJniObject obtain(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0);
		static QAndroidJniObject obtain(__jni_impl::android::view::View arg0, jint arg1);
		void recycle();
	};
} // namespace __jni_impl::android::view::accessibility

#include "../View.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "AccessibilityWindowInfo.hpp"
#include "AccessibilityNodeInfo_AccessibilityAction.hpp"
#include "../../graphics/Rect.hpp"
#include "AccessibilityNodeInfo_CollectionInfo.hpp"
#include "AccessibilityNodeInfo_CollectionItemInfo.hpp"
#include "AccessibilityNodeInfo_RangeInfo.hpp"
#include "AccessibilityNodeInfo_TouchDelegateInfo.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	jint AccessibilityNodeInfo::ACTION_ACCESSIBILITY_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ACCESSIBILITY_FOCUS"
		);
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_COLUMN_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_COLUMN_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_HTML_ELEMENT_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_HTML_ELEMENT_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_X",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_Y",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_PROGRESS_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_PROGRESS_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_ROW_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_ROW_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_END_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_END_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_START_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_START_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_ACCESSIBILITY_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_ACCESSIBILITY_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_SELECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_SELECTION"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLICK"
		);
	}
	jint AccessibilityNodeInfo::ACTION_COLLAPSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_COLLAPSE"
		);
	}
	jint AccessibilityNodeInfo::ACTION_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_COPY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CUT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_DISMISS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_DISMISS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_EXPAND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_EXPAND"
		);
	}
	jint AccessibilityNodeInfo::ACTION_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_LONG_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_LONG_CLICK"
		);
	}
	jint AccessibilityNodeInfo::ACTION_NEXT_AT_MOVEMENT_GRANULARITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_NEXT_AT_MOVEMENT_GRANULARITY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_NEXT_HTML_ELEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_NEXT_HTML_ELEMENT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PASTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PASTE"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PREVIOUS_HTML_ELEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PREVIOUS_HTML_ELEMENT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SCROLL_BACKWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SCROLL_BACKWARD"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SCROLL_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SCROLL_FORWARD"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SELECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SELECT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SET_SELECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SET_SELECTION"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SET_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SET_TEXT"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::FOCUS_ACCESSIBILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FOCUS_ACCESSIBILITY"
		);
	}
	jint AccessibilityNodeInfo::FOCUS_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FOCUS_INPUT"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_CHARACTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_CHARACTER"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_LINE"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_PAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_PAGE"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_PARAGRAPH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_PARAGRAPH"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_WORD"
		);
	}
	
	// Constructors
	void AccessibilityNodeInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"(V)V");
	}
	
	// Methods
	jboolean AccessibilityNodeInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AccessibilityNodeInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject AccessibilityNodeInfo::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	jint AccessibilityNodeInfo::getActions()
	{
		return __thiz.callMethod<jint>(
			"getActions",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void AccessibilityNodeInfo::setParent(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setParent",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setParent(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setParent",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring AccessibilityNodeInfo::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean AccessibilityNodeInfo::isVisibleToUser()
	{
		return __thiz.callMethod<jboolean>(
			"isVisibleToUser",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setFocused(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setAccessibilityFocused(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0
		);
	}
	jint AccessibilityNodeInfo::getTextSelectionStart()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getTextSelectionEnd()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	void AccessibilityNodeInfo::setMaxTextLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::performAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performAction",
			"(I)Z",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::performAction(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::findAccessibilityNodeInfosByText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getChild(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	jint AccessibilityNodeInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AccessibilityNodeInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void AccessibilityNodeInfo::setClassName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setPassword(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::addChild(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addChild",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::addChild(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addChild",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setInputType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	jint AccessibilityNodeInfo::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getError()
	{
		return __thiz.callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean AccessibilityNodeInfo::refreshWithExtraData(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"refreshWithExtraData",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AccessibilityNodeInfo::removeChild(__jni_impl::android::view::View arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean AccessibilityNodeInfo::removeChild(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getActionList()
	{
		return __thiz.callObjectMethod(
			"getActionList",
			"()Ljava/util/List;"
		);
	}
	jboolean AccessibilityNodeInfo::removeAction(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)Z",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::removeAction(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAction",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getTraversalBefore()
	{
		return __thiz.callObjectMethod(
			"getTraversalBefore",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void AccessibilityNodeInfo::setTraversalBefore(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setTraversalBefore(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getTraversalAfter()
	{
		return __thiz.callObjectMethod(
			"getTraversalAfter",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void AccessibilityNodeInfo::setTraversalAfter(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setTraversalAfter(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getAvailableExtraData()
	{
		return __thiz.callObjectMethod(
			"getAvailableExtraData",
			"()Ljava/util/List;"
		);
	}
	void AccessibilityNodeInfo::setAvailableExtraData(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAvailableExtraData",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setMovementGranularities(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMovementGranularities",
			"(I)V",
			arg0
		);
	}
	jint AccessibilityNodeInfo::getMovementGranularities()
	{
		return __thiz.callMethod<jint>(
			"getMovementGranularities",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findAccessibilityNodeInfosByViewId",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	void AccessibilityNodeInfo::getBoundsInParent(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setBoundsInParent(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::getBoundsInScreen(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setBoundsInScreen(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setVisibleToUser(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVisibleToUser",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isEditable()
	{
		return __thiz.callMethod<jboolean>(
			"isEditable",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setEditable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEditable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setPaneTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring AccessibilityNodeInfo::getPaneTitle()
	{
		return __thiz.callObjectMethod(
			"getPaneTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::getDrawingOrder()
	{
		return __thiz.callMethod<jint>(
			"getDrawingOrder",
			"()I"
		);
	}
	void AccessibilityNodeInfo::setDrawingOrder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDrawingOrder",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getCollectionInfo()
	{
		return __thiz.callObjectMethod(
			"getCollectionInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;"
		);
	}
	void AccessibilityNodeInfo::setCollectionInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_CollectionInfo arg0)
	{
		__thiz.callMethod<void>(
			"setCollectionInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getCollectionItemInfo()
	{
		return __thiz.callObjectMethod(
			"getCollectionItemInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;"
		);
	}
	void AccessibilityNodeInfo::setCollectionItemInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo arg0)
	{
		__thiz.callMethod<void>(
			"setCollectionItemInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getRangeInfo()
	{
		return __thiz.callObjectMethod(
			"getRangeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;"
		);
	}
	void AccessibilityNodeInfo::setRangeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_RangeInfo arg0)
	{
		__thiz.callMethod<void>(
			"setRangeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityNodeInfo::isContentInvalid()
	{
		return __thiz.callMethod<jboolean>(
			"isContentInvalid",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setContentInvalid(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContentInvalid",
			"(Z)V",
			arg0
		);
	}
	jint AccessibilityNodeInfo::getLiveRegion()
	{
		return __thiz.callMethod<jint>(
			"getLiveRegion",
			"()I"
		);
	}
	void AccessibilityNodeInfo::setLiveRegion(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLiveRegion",
			"(I)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isMultiLine()
	{
		return __thiz.callMethod<jboolean>(
			"isMultiLine",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setMultiLine(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMultiLine",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::canOpenPopup()
	{
		return __thiz.callMethod<jboolean>(
			"canOpenPopup",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setCanOpenPopup(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCanOpenPopup",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isDismissable()
	{
		return __thiz.callMethod<jboolean>(
			"isDismissable",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setDismissable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDismissable",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isShowingHintText()
	{
		return __thiz.callMethod<jboolean>(
			"isShowingHintText",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setShowingHintText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowingHintText",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setHeading(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHeading",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isTextEntryKey()
	{
		return __thiz.callMethod<jboolean>(
			"isTextEntryKey",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setTextEntryKey(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTextEntryKey",
			"(Z)V",
			arg0
		);
	}
	jstring AccessibilityNodeInfo::getHintText()
	{
		return __thiz.callObjectMethod(
			"getHintText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void AccessibilityNodeInfo::setHintText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setHintText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setLabeledBy(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setLabeledBy(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getLabeledBy()
	{
		return __thiz.callObjectMethod(
			"getLabeledBy",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void AccessibilityNodeInfo::setViewIdResourceName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setViewIdResourceName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring AccessibilityNodeInfo::getViewIdResourceName()
	{
		return __thiz.callObjectMethod(
			"getViewIdResourceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AccessibilityNodeInfo::setTextSelection(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTextSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getTouchDelegateInfo()
	{
		return __thiz.callObjectMethod(
			"getTouchDelegateInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;"
		);
	}
	void AccessibilityNodeInfo::setTouchDelegateInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo arg0)
	{
		__thiz.callMethod<void>(
			"setTouchDelegateInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::addAction(__jni_impl::android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0)
	{
		__thiz.callMethod<void>(
			"addAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::addAction(jint arg0)
	{
		__thiz.callMethod<void>(
			"addAction",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::focusSearch(jint arg0)
	{
		return __thiz.callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::findFocus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	jint AccessibilityNodeInfo::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void AccessibilityNodeInfo::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getLabelFor()
	{
		return __thiz.callObjectMethod(
			"getLabelFor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void AccessibilityNodeInfo::setLabelFor(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setLabelFor(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityNodeInfo::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isLongClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setLongClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isContextClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setContextClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isScreenReaderFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setScreenReaderFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isHeading()
	{
		return __thiz.callMethod<jboolean>(
			"isHeading",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isAccessibilityFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setImportantForAccessibility(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setImportantForAccessibility",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isImportantForAccessibility()
	{
		return __thiz.callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	jint AccessibilityNodeInfo::getWindowId()
	{
		return __thiz.callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	void AccessibilityNodeInfo::setSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isSelected()
	{
		return __thiz.callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setTooltipText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring AccessibilityNodeInfo::getTooltipText()
	{
		return __thiz.callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean AccessibilityNodeInfo::refresh()
	{
		return __thiz.callMethod<jboolean>(
			"refresh",
			"()Z"
		);
	}
	jint AccessibilityNodeInfo::getMaxTextLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	void AccessibilityNodeInfo::setPackageName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isPassword()
	{
		return __thiz.callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isScrollable()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setScrollable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setCheckable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::isCheckable()
	{
		return __thiz.callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	void AccessibilityNodeInfo::setSource(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setSource(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::obtain(__jni_impl::android::view::View arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::obtain(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::obtain(__jni_impl::android::view::View arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/View;I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityNodeInfo : public __jni_impl::android::view::accessibility::AccessibilityNodeInfo
	{
	public:
		AccessibilityNodeInfo(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityNodeInfo()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO


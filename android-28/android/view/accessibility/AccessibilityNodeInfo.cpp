#include "../../graphics/Rect.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../View.hpp"
#include "./AccessibilityNodeInfo_AccessibilityAction.hpp"
#include "./AccessibilityNodeInfo_CollectionInfo.hpp"
#include "./AccessibilityNodeInfo_CollectionItemInfo.hpp"
#include "./AccessibilityNodeInfo_RangeInfo.hpp"
#include "./AccessibilityWindowInfo.hpp"
#include "./AccessibilityNodeInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityNodeInfo::ACTION_ACCESSIBILITY_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ACCESSIBILITY_FOCUS"
		);
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_COLUMN_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_COLUMN_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_HTML_ELEMENT_STRING()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_HTML_ELEMENT_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_X()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_X",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_Y()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_Y",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_PROGRESS_VALUE()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_PROGRESS_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_ROW_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_ROW_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_END_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_END_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_START_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_START_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_ACCESSIBILITY_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_ACCESSIBILITY_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_SELECTION"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLICK()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLICK"
		);
	}
	jint AccessibilityNodeInfo::ACTION_COLLAPSE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_COLLAPSE"
		);
	}
	jint AccessibilityNodeInfo::ACTION_COPY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_COPY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CUT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CUT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_DISMISS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_DISMISS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_EXPAND()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_EXPAND"
		);
	}
	jint AccessibilityNodeInfo::ACTION_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_LONG_CLICK()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_LONG_CLICK"
		);
	}
	jint AccessibilityNodeInfo::ACTION_NEXT_AT_MOVEMENT_GRANULARITY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_NEXT_AT_MOVEMENT_GRANULARITY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_NEXT_HTML_ELEMENT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_NEXT_HTML_ELEMENT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PASTE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PASTE"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PREVIOUS_HTML_ELEMENT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PREVIOUS_HTML_ELEMENT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SCROLL_BACKWARD()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SCROLL_BACKWARD"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SCROLL_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SCROLL_FORWARD"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SELECT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SELECT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SET_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SET_SELECTION"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SET_TEXT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SET_TEXT"
		);
	}
	__JniBaseClass AccessibilityNodeInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::FOCUS_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FOCUS_ACCESSIBILITY"
		);
	}
	jint AccessibilityNodeInfo::FOCUS_INPUT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FOCUS_INPUT"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_CHARACTER()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_CHARACTER"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_LINE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_LINE"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_PAGE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_PAGE"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_PARAGRAPH()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_PARAGRAPH"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_WORD()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_WORD"
		);
	}
	
	// QJniObject forward
	AccessibilityNodeInfo::AccessibilityNodeInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::obtain()
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::obtain(android::view::View arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::obtain(android::view::accessibility::AccessibilityNodeInfo arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::obtain(android::view::View arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/View;I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::addAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0)
	{
		callMethod<void>(
			"addAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::addAction(jint arg0)
	{
		callMethod<void>(
			"addAction",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::addChild(android::view::View arg0)
	{
		callMethod<void>(
			"addChild",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::addChild(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"addChild",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean AccessibilityNodeInfo::canOpenPopup()
	{
		return callMethod<jboolean>(
			"canOpenPopup",
			"()Z"
		);
	}
	jint AccessibilityNodeInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AccessibilityNodeInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass AccessibilityNodeInfo::findAccessibilityNodeInfosByText(jstring arg0)
	{
		return callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	__JniBaseClass AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(jstring arg0)
	{
		return callObjectMethod(
			"findAccessibilityNodeInfosByViewId",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::findFocus(jint arg0)
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::focusSearch(jint arg0)
	{
		return callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	__JniBaseClass AccessibilityNodeInfo::getActionList()
	{
		return callObjectMethod(
			"getActionList",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityNodeInfo::getActions()
	{
		return callMethod<jint>(
			"getActions",
			"()I"
		);
	}
	__JniBaseClass AccessibilityNodeInfo::getAvailableExtraData()
	{
		return callObjectMethod(
			"getAvailableExtraData",
			"()Ljava/util/List;"
		);
	}
	void AccessibilityNodeInfo::getBoundsInParent(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::getBoundsInScreen(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getChild(jint arg0)
	{
		return callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	jint AccessibilityNodeInfo::getChildCount()
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::accessibility::AccessibilityNodeInfo_CollectionInfo AccessibilityNodeInfo::getCollectionInfo()
	{
		return callObjectMethod(
			"getCollectionInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo AccessibilityNodeInfo::getCollectionItemInfo()
	{
		return callObjectMethod(
			"getCollectionItemInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;"
		);
	}
	jstring AccessibilityNodeInfo::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::getDrawingOrder()
	{
		return callMethod<jint>(
			"getDrawingOrder",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getError()
	{
		return callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::os::Bundle AccessibilityNodeInfo::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring AccessibilityNodeInfo::getHintText()
	{
		return callObjectMethod(
			"getHintText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getLabelFor()
	{
		return callObjectMethod(
			"getLabelFor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getLabeledBy()
	{
		return callObjectMethod(
			"getLabeledBy",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	jint AccessibilityNodeInfo::getLiveRegion()
	{
		return callMethod<jint>(
			"getLiveRegion",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getMaxTextLength()
	{
		return callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getMovementGranularities()
	{
		return callMethod<jint>(
			"getMovementGranularities",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::getPaneTitle()
	{
		return callObjectMethod(
			"getPaneTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo_RangeInfo AccessibilityNodeInfo::getRangeInfo()
	{
		return callObjectMethod(
			"getRangeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;"
		);
	}
	jstring AccessibilityNodeInfo::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::getTextSelectionEnd()
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getTextSelectionStart()
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getTooltipText()
	{
		return callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getTraversalAfter()
	{
		return callObjectMethod(
			"getTraversalAfter",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getTraversalBefore()
	{
		return callObjectMethod(
			"getTraversalBefore",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	jstring AccessibilityNodeInfo::getViewIdResourceName()
	{
		return callObjectMethod(
			"getViewIdResourceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::view::accessibility::AccessibilityWindowInfo AccessibilityNodeInfo::getWindow()
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	jint AccessibilityNodeInfo::getWindowId()
	{
		return callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AccessibilityNodeInfo::isAccessibilityFocused()
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isCheckable()
	{
		return callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isClickable()
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isContentInvalid()
	{
		return callMethod<jboolean>(
			"isContentInvalid",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isContextClickable()
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isDismissable()
	{
		return callMethod<jboolean>(
			"isDismissable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isEditable()
	{
		return callMethod<jboolean>(
			"isEditable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isFocusable()
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isFocused()
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isHeading()
	{
		return callMethod<jboolean>(
			"isHeading",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isImportantForAccessibility()
	{
		return callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isLongClickable()
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isMultiLine()
	{
		return callMethod<jboolean>(
			"isMultiLine",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isPassword()
	{
		return callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isScreenReaderFocusable()
	{
		return callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isScrollable()
	{
		return callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isSelected()
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isShowingHintText()
	{
		return callMethod<jboolean>(
			"isShowingHintText",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isVisibleToUser()
	{
		return callMethod<jboolean>(
			"isVisibleToUser",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::performAction(jint arg0)
	{
		return callMethod<jboolean>(
			"performAction",
			"(I)Z",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::performAction(jint arg0, android::os::Bundle arg1)
	{
		return callMethod<jboolean>(
			"performAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	void AccessibilityNodeInfo::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jboolean AccessibilityNodeInfo::refresh()
	{
		return callMethod<jboolean>(
			"refresh",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::refreshWithExtraData(jstring arg0, android::os::Bundle arg1)
	{
		return callMethod<jboolean>(
			"refreshWithExtraData",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AccessibilityNodeInfo::removeAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0)
	{
		return callMethod<jboolean>(
			"removeAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)Z",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::removeAction(jint arg0)
	{
		callMethod<void>(
			"removeAction",
			"(I)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::removeChild(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean AccessibilityNodeInfo::removeChild(android::view::View arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setAccessibilityFocused(jboolean arg0)
	{
		callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setAvailableExtraData(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setAvailableExtraData",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setBoundsInParent(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setBoundsInScreen(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setCanOpenPopup(jboolean arg0)
	{
		callMethod<void>(
			"setCanOpenPopup",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setCheckable(jboolean arg0)
	{
		callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setChecked(jboolean arg0)
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setClassName(jstring arg0)
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setClickable(jboolean arg0)
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setCollectionInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionInfo arg0)
	{
		callMethod<void>(
			"setCollectionInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setCollectionItemInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo arg0)
	{
		callMethod<void>(
			"setCollectionItemInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setContentDescription(jstring arg0)
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setContentInvalid(jboolean arg0)
	{
		callMethod<void>(
			"setContentInvalid",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setContextClickable(jboolean arg0)
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setDismissable(jboolean arg0)
	{
		callMethod<void>(
			"setDismissable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setDrawingOrder(jint arg0)
	{
		callMethod<void>(
			"setDrawingOrder",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setEditable(jboolean arg0)
	{
		callMethod<void>(
			"setEditable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setError(jstring arg0)
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setFocusable(jboolean arg0)
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setFocused(jboolean arg0)
	{
		callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setHeading(jboolean arg0)
	{
		callMethod<void>(
			"setHeading",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setHintText(jstring arg0)
	{
		callMethod<void>(
			"setHintText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setImportantForAccessibility(jboolean arg0)
	{
		callMethod<void>(
			"setImportantForAccessibility",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setInputType(jint arg0)
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setLabelFor(android::view::View arg0)
	{
		callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setLabelFor(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setLabeledBy(android::view::View arg0)
	{
		callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setLabeledBy(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setLiveRegion(jint arg0)
	{
		callMethod<void>(
			"setLiveRegion",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setLongClickable(jboolean arg0)
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMaxTextLength(jint arg0)
	{
		callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMovementGranularities(jint arg0)
	{
		callMethod<void>(
			"setMovementGranularities",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMultiLine(jboolean arg0)
	{
		callMethod<void>(
			"setMultiLine",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setPackageName(jstring arg0)
	{
		callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setPaneTitle(jstring arg0)
	{
		callMethod<void>(
			"setPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setParent(android::view::View arg0)
	{
		callMethod<void>(
			"setParent",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setParent(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"setParent",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setPassword(jboolean arg0)
	{
		callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setRangeInfo(android::view::accessibility::AccessibilityNodeInfo_RangeInfo arg0)
	{
		callMethod<void>(
			"setRangeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setScreenReaderFocusable(jboolean arg0)
	{
		callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setScrollable(jboolean arg0)
	{
		callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setSelected(jboolean arg0)
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setShowingHintText(jboolean arg0)
	{
		callMethod<void>(
			"setShowingHintText",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setSource(android::view::View arg0)
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setSource(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setText(jstring arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setTextSelection(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setTextSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AccessibilityNodeInfo::setTooltipText(jstring arg0)
	{
		callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setTraversalAfter(android::view::View arg0)
	{
		callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setTraversalAfter(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setTraversalBefore(android::view::View arg0)
	{
		callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setTraversalBefore(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setViewIdResourceName(jstring arg0)
	{
		callMethod<void>(
			"setViewIdResourceName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setVisibleToUser(jboolean arg0)
	{
		callMethod<void>(
			"setVisibleToUser",
			"(Z)V",
			arg0
		);
	}
	jstring AccessibilityNodeInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AccessibilityNodeInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility


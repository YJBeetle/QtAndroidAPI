#include "../../graphics/Rect.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../View.hpp"
#include "./AccessibilityNodeInfo_AccessibilityAction.hpp"
#include "./AccessibilityNodeInfo_CollectionInfo.hpp"
#include "./AccessibilityNodeInfo_CollectionItemInfo.hpp"
#include "./AccessibilityNodeInfo_ExtraRenderingInfo.hpp"
#include "./AccessibilityNodeInfo_RangeInfo.hpp"
#include "./AccessibilityNodeInfo_TouchDelegateInfo.hpp"
#include "./AccessibilityWindowInfo.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_COLUMN_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_COLUMN_INT",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_HTML_ELEMENT_STRING()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_HTML_ELEMENT_STRING",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_X()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_X",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_Y()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_Y",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_PRESS_AND_HOLD_DURATION_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_PRESS_AND_HOLD_DURATION_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_PROGRESS_VALUE()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_PROGRESS_VALUE",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_ROW_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_ROW_INT",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_END_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_END_INT",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_START_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_START_INT",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE",
			"Ljava/lang/String;"
		);
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
	JObject AccessibilityNodeInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString AccessibilityNodeInfo::EXTRA_DATA_RENDERING_INFO_KEY()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_RENDERING_INFO_KEY",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY",
			"Ljava/lang/String;"
		);
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
	
	// QAndroidJniObject forward
	AccessibilityNodeInfo::AccessibilityNodeInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessibilityNodeInfo::AccessibilityNodeInfo()
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"()V"
		) {}
	AccessibilityNodeInfo::AccessibilityNodeInfo(android::view::View arg0)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	AccessibilityNodeInfo::AccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo &arg0)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object()
		) {}
	AccessibilityNodeInfo::AccessibilityNodeInfo(android::view::View arg0, jint arg1)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		) {}
	
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
	void AccessibilityNodeInfo::addAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0) const
	{
		callMethod<void>(
			"addAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::addAction(jint arg0) const
	{
		callMethod<void>(
			"addAction",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::addChild(android::view::View arg0) const
	{
		callMethod<void>(
			"addChild",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::addChild(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"addChild",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean AccessibilityNodeInfo::canOpenPopup() const
	{
		return callMethod<jboolean>(
			"canOpenPopup",
			"()Z"
		);
	}
	jint AccessibilityNodeInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AccessibilityNodeInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AccessibilityNodeInfo::findAccessibilityNodeInfosByText(JString arg0) const
	{
		return callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	JObject AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(JString arg0) const
	{
		return callObjectMethod(
			"findAccessibilityNodeInfosByViewId",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::findFocus(jint arg0) const
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::focusSearch(jint arg0) const
	{
		return callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	JObject AccessibilityNodeInfo::getActionList() const
	{
		return callObjectMethod(
			"getActionList",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityNodeInfo::getActions() const
	{
		return callMethod<jint>(
			"getActions",
			"()I"
		);
	}
	JObject AccessibilityNodeInfo::getAvailableExtraData() const
	{
		return callObjectMethod(
			"getAvailableExtraData",
			"()Ljava/util/List;"
		);
	}
	void AccessibilityNodeInfo::getBoundsInParent(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::getBoundsInScreen(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getChild(jint arg0) const
	{
		return callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	jint AccessibilityNodeInfo::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	JString AccessibilityNodeInfo::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo_CollectionInfo AccessibilityNodeInfo::getCollectionInfo() const
	{
		return callObjectMethod(
			"getCollectionInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo AccessibilityNodeInfo::getCollectionItemInfo() const
	{
		return callObjectMethod(
			"getCollectionItemInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;"
		);
	}
	JString AccessibilityNodeInfo::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AccessibilityNodeInfo::getDrawingOrder() const
	{
		return callMethod<jint>(
			"getDrawingOrder",
			"()I"
		);
	}
	JString AccessibilityNodeInfo::getError() const
	{
		return callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo_ExtraRenderingInfo AccessibilityNodeInfo::getExtraRenderingInfo() const
	{
		return callObjectMethod(
			"getExtraRenderingInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$ExtraRenderingInfo;"
		);
	}
	android::os::Bundle AccessibilityNodeInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString AccessibilityNodeInfo::getHintText() const
	{
		return callObjectMethod(
			"getHintText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AccessibilityNodeInfo::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getLabelFor() const
	{
		return callObjectMethod(
			"getLabelFor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getLabeledBy() const
	{
		return callObjectMethod(
			"getLabeledBy",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	jint AccessibilityNodeInfo::getLiveRegion() const
	{
		return callMethod<jint>(
			"getLiveRegion",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getMaxTextLength() const
	{
		return callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getMovementGranularities() const
	{
		return callMethod<jint>(
			"getMovementGranularities",
			"()I"
		);
	}
	JString AccessibilityNodeInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString AccessibilityNodeInfo::getPaneTitle() const
	{
		return callObjectMethod(
			"getPaneTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo_RangeInfo AccessibilityNodeInfo::getRangeInfo() const
	{
		return callObjectMethod(
			"getRangeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;"
		);
	}
	JString AccessibilityNodeInfo::getStateDescription() const
	{
		return callObjectMethod(
			"getStateDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString AccessibilityNodeInfo::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AccessibilityNodeInfo::getTextSelectionEnd() const
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getTextSelectionStart() const
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	JString AccessibilityNodeInfo::getTooltipText() const
	{
		return callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo AccessibilityNodeInfo::getTouchDelegateInfo() const
	{
		return callObjectMethod(
			"getTouchDelegateInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getTraversalAfter() const
	{
		return callObjectMethod(
			"getTraversalAfter",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getTraversalBefore() const
	{
		return callObjectMethod(
			"getTraversalBefore",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	JString AccessibilityNodeInfo::getViewIdResourceName() const
	{
		return callObjectMethod(
			"getViewIdResourceName",
			"()Ljava/lang/String;"
		);
	}
	android::view::accessibility::AccessibilityWindowInfo AccessibilityNodeInfo::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	jint AccessibilityNodeInfo::getWindowId() const
	{
		return callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AccessibilityNodeInfo::isAccessibilityFocused() const
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isCheckable() const
	{
		return callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isClickable() const
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isContentInvalid() const
	{
		return callMethod<jboolean>(
			"isContentInvalid",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isContextClickable() const
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isDismissable() const
	{
		return callMethod<jboolean>(
			"isDismissable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isEditable() const
	{
		return callMethod<jboolean>(
			"isEditable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isFocusable() const
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isHeading() const
	{
		return callMethod<jboolean>(
			"isHeading",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isImportantForAccessibility() const
	{
		return callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isLongClickable() const
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isMultiLine() const
	{
		return callMethod<jboolean>(
			"isMultiLine",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isPassword() const
	{
		return callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isScreenReaderFocusable() const
	{
		return callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isScrollable() const
	{
		return callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isSelected() const
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isShowingHintText() const
	{
		return callMethod<jboolean>(
			"isShowingHintText",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isTextEntryKey() const
	{
		return callMethod<jboolean>(
			"isTextEntryKey",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isVisibleToUser() const
	{
		return callMethod<jboolean>(
			"isVisibleToUser",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::performAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performAction",
			"(I)Z",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::performAction(jint arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"performAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	void AccessibilityNodeInfo::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jboolean AccessibilityNodeInfo::refresh() const
	{
		return callMethod<jboolean>(
			"refresh",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::refreshWithExtraData(JString arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"refreshWithExtraData",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean AccessibilityNodeInfo::removeAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0) const
	{
		return callMethod<jboolean>(
			"removeAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)Z",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::removeAction(jint arg0) const
	{
		callMethod<void>(
			"removeAction",
			"(I)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::removeChild(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean AccessibilityNodeInfo::removeChild(android::view::View arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setAccessibilityFocused(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setAvailableExtraData(JObject arg0) const
	{
		callMethod<void>(
			"setAvailableExtraData",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setBoundsInParent(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setBoundsInScreen(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setCanOpenPopup(jboolean arg0) const
	{
		callMethod<void>(
			"setCanOpenPopup",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setCheckable(jboolean arg0) const
	{
		callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setClassName(JString arg0) const
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setCollectionInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionInfo arg0) const
	{
		callMethod<void>(
			"setCollectionInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setCollectionItemInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo arg0) const
	{
		callMethod<void>(
			"setCollectionItemInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setContentInvalid(jboolean arg0) const
	{
		callMethod<void>(
			"setContentInvalid",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setContextClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setDismissable(jboolean arg0) const
	{
		callMethod<void>(
			"setDismissable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setDrawingOrder(jint arg0) const
	{
		callMethod<void>(
			"setDrawingOrder",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setEditable(jboolean arg0) const
	{
		callMethod<void>(
			"setEditable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setError(JString arg0) const
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setFocused(jboolean arg0) const
	{
		callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setHeading(jboolean arg0) const
	{
		callMethod<void>(
			"setHeading",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setHintText(JString arg0) const
	{
		callMethod<void>(
			"setHintText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setImportantForAccessibility(jboolean arg0) const
	{
		callMethod<void>(
			"setImportantForAccessibility",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setInputType(jint arg0) const
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setLabelFor(android::view::View arg0) const
	{
		callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setLabelFor(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setLabeledBy(android::view::View arg0) const
	{
		callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setLabeledBy(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setLiveRegion(jint arg0) const
	{
		callMethod<void>(
			"setLiveRegion",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setLongClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMaxTextLength(jint arg0) const
	{
		callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMovementGranularities(jint arg0) const
	{
		callMethod<void>(
			"setMovementGranularities",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMultiLine(jboolean arg0) const
	{
		callMethod<void>(
			"setMultiLine",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setPackageName(JString arg0) const
	{
		callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setPaneTitle(JString arg0) const
	{
		callMethod<void>(
			"setPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setParent(android::view::View arg0) const
	{
		callMethod<void>(
			"setParent",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setParent(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setParent",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setPassword(jboolean arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setRangeInfo(android::view::accessibility::AccessibilityNodeInfo_RangeInfo arg0) const
	{
		callMethod<void>(
			"setRangeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setScreenReaderFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setScrollable(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setShowingHintText(jboolean arg0) const
	{
		callMethod<void>(
			"setShowingHintText",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setSource(android::view::View arg0) const
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setSource(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setStateDescription(JString arg0) const
	{
		callMethod<void>(
			"setStateDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setTextEntryKey(jboolean arg0) const
	{
		callMethod<void>(
			"setTextEntryKey",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setTextSelection(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setTextSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AccessibilityNodeInfo::setTooltipText(JString arg0) const
	{
		callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setTouchDelegateInfo(android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo arg0) const
	{
		callMethod<void>(
			"setTouchDelegateInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setTraversalAfter(android::view::View arg0) const
	{
		callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setTraversalAfter(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setTraversalBefore(android::view::View arg0) const
	{
		callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo::setTraversalBefore(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setViewIdResourceName(JString arg0) const
	{
		callMethod<void>(
			"setViewIdResourceName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setVisibleToUser(jboolean arg0) const
	{
		callMethod<void>(
			"setVisibleToUser",
			"(Z)V",
			arg0
		);
	}
	JString AccessibilityNodeInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AccessibilityNodeInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility


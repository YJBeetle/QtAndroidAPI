#pragma once

#include "../../graphics/Rect.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../View.def.hpp"
#include "./AccessibilityNodeInfo_AccessibilityAction.def.hpp"
#include "./AccessibilityNodeInfo_CollectionInfo.def.hpp"
#include "./AccessibilityNodeInfo_CollectionItemInfo.def.hpp"
#include "./AccessibilityNodeInfo_ExtraRenderingInfo.def.hpp"
#include "./AccessibilityNodeInfo_RangeInfo.def.hpp"
#include "./AccessibilityNodeInfo_TouchDelegateInfo.def.hpp"
#include "./AccessibilityWindowInfo.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./AccessibilityNodeInfo.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline jint AccessibilityNodeInfo::ACTION_ACCESSIBILITY_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ACCESSIBILITY_FOCUS"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_COLUMN_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_COLUMN_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_DIRECTION_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_DIRECTION_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_HTML_ELEMENT_STRING()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_HTML_ELEMENT_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_X()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_X",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_Y()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_Y",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_PRESS_AND_HOLD_DURATION_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_PRESS_AND_HOLD_DURATION_MILLIS_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_PROGRESS_VALUE()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_PROGRESS_VALUE",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_ROW_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_ROW_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_END_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_END_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_START_INT()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_START_INT",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE",
			"Ljava/lang/String;"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_CLEAR_ACCESSIBILITY_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_ACCESSIBILITY_FOCUS"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_CLEAR_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_FOCUS"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_CLEAR_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_SELECTION"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_CLICK()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLICK"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_COLLAPSE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_COLLAPSE"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_COPY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_COPY"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_CUT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CUT"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_DISMISS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_DISMISS"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_EXPAND()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_EXPAND"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_FOCUS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_FOCUS"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_LONG_CLICK()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_LONG_CLICK"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_NEXT_AT_MOVEMENT_GRANULARITY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_NEXT_AT_MOVEMENT_GRANULARITY"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_NEXT_HTML_ELEMENT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_NEXT_HTML_ELEMENT"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_PASTE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PASTE"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_PREVIOUS_HTML_ELEMENT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PREVIOUS_HTML_ELEMENT"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_SCROLL_BACKWARD()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SCROLL_BACKWARD"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_SCROLL_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SCROLL_FORWARD"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_SELECT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SELECT"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_SET_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SET_SELECTION"
		);
	}
	inline jint AccessibilityNodeInfo::ACTION_SET_TEXT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SET_TEXT"
		);
	}
	inline JObject AccessibilityNodeInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString AccessibilityNodeInfo::EXTRA_DATA_RENDERING_INFO_KEY()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_RENDERING_INFO_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH",
			"Ljava/lang/String;"
		);
	}
	inline jint AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_MAX_LENGTH()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_MAX_LENGTH"
		);
	}
	inline JString AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY",
			"Ljava/lang/String;"
		);
	}
	inline jint AccessibilityNodeInfo::FLAG_PREFETCH_ANCESTORS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FLAG_PREFETCH_ANCESTORS"
		);
	}
	inline jint AccessibilityNodeInfo::FLAG_PREFETCH_DESCENDANTS_BREADTH_FIRST()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FLAG_PREFETCH_DESCENDANTS_BREADTH_FIRST"
		);
	}
	inline jint AccessibilityNodeInfo::FLAG_PREFETCH_DESCENDANTS_DEPTH_FIRST()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FLAG_PREFETCH_DESCENDANTS_DEPTH_FIRST"
		);
	}
	inline jint AccessibilityNodeInfo::FLAG_PREFETCH_DESCENDANTS_HYBRID()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FLAG_PREFETCH_DESCENDANTS_HYBRID"
		);
	}
	inline jint AccessibilityNodeInfo::FLAG_PREFETCH_SIBLINGS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FLAG_PREFETCH_SIBLINGS"
		);
	}
	inline jint AccessibilityNodeInfo::FLAG_PREFETCH_UNINTERRUPTIBLE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FLAG_PREFETCH_UNINTERRUPTIBLE"
		);
	}
	inline jint AccessibilityNodeInfo::FOCUS_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FOCUS_ACCESSIBILITY"
		);
	}
	inline jint AccessibilityNodeInfo::FOCUS_INPUT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FOCUS_INPUT"
		);
	}
	inline jint AccessibilityNodeInfo::MAX_NUMBER_OF_PREFETCHED_NODES()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MAX_NUMBER_OF_PREFETCHED_NODES"
		);
	}
	inline jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_CHARACTER()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_CHARACTER"
		);
	}
	inline jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_LINE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_LINE"
		);
	}
	inline jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_PAGE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_PAGE"
		);
	}
	inline jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_PARAGRAPH()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_PARAGRAPH"
		);
	}
	inline jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_WORD()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_WORD"
		);
	}
	
	// Constructors
	inline AccessibilityNodeInfo::AccessibilityNodeInfo()
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"()V"
		) {}
	inline AccessibilityNodeInfo::AccessibilityNodeInfo(android::view::View arg0)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	inline AccessibilityNodeInfo::AccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo &arg0)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object()
		) {}
	inline AccessibilityNodeInfo::AccessibilityNodeInfo(android::view::View arg0, jint arg1)
		: JObject(
			"android.view.accessibility.AccessibilityNodeInfo",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::obtain()
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::obtain(android::view::View arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::obtain(android::view::accessibility::AccessibilityNodeInfo arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::obtain(android::view::View arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/View;I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::addAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0) const
	{
		callMethod<void>(
			"addAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::addAction(jint arg0) const
	{
		callMethod<void>(
			"addAction",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::addChild(android::view::View arg0) const
	{
		callMethod<void>(
			"addChild",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::addChild(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"addChild",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean AccessibilityNodeInfo::canOpenPopup() const
	{
		return callMethod<jboolean>(
			"canOpenPopup",
			"()Z"
		);
	}
	inline jint AccessibilityNodeInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AccessibilityNodeInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AccessibilityNodeInfo::findAccessibilityNodeInfosByText(JString arg0) const
	{
		return callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline JObject AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(JString arg0) const
	{
		return callObjectMethod(
			"findAccessibilityNodeInfosByViewId",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::findFocus(jint arg0) const
	{
		return callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::focusSearch(jint arg0) const
	{
		return callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline JObject AccessibilityNodeInfo::getActionList() const
	{
		return callObjectMethod(
			"getActionList",
			"()Ljava/util/List;"
		);
	}
	inline jint AccessibilityNodeInfo::getActions() const
	{
		return callMethod<jint>(
			"getActions",
			"()I"
		);
	}
	inline JObject AccessibilityNodeInfo::getAvailableExtraData() const
	{
		return callObjectMethod(
			"getAvailableExtraData",
			"()Ljava/util/List;"
		);
	}
	inline void AccessibilityNodeInfo::getBoundsInParent(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::getBoundsInScreen(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::getBoundsInWindow(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getBoundsInWindow",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getChild(jint arg0) const
	{
		return callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getChild(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getChild",
			"(II)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0,
			arg1
		);
	}
	inline jint AccessibilityNodeInfo::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	inline JString AccessibilityNodeInfo::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionInfo AccessibilityNodeInfo::getCollectionInfo() const
	{
		return callObjectMethod(
			"getCollectionInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo AccessibilityNodeInfo::getCollectionItemInfo() const
	{
		return callObjectMethod(
			"getCollectionItemInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;"
		);
	}
	inline JString AccessibilityNodeInfo::getContainerTitle() const
	{
		return callObjectMethod(
			"getContainerTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString AccessibilityNodeInfo::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AccessibilityNodeInfo::getDrawingOrder() const
	{
		return callMethod<jint>(
			"getDrawingOrder",
			"()I"
		);
	}
	inline JString AccessibilityNodeInfo::getError() const
	{
		return callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_ExtraRenderingInfo AccessibilityNodeInfo::getExtraRenderingInfo() const
	{
		return callObjectMethod(
			"getExtraRenderingInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$ExtraRenderingInfo;"
		);
	}
	inline android::os::Bundle AccessibilityNodeInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString AccessibilityNodeInfo::getHintText() const
	{
		return callObjectMethod(
			"getHintText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AccessibilityNodeInfo::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getLabelFor() const
	{
		return callObjectMethod(
			"getLabelFor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getLabeledBy() const
	{
		return callObjectMethod(
			"getLabeledBy",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline jint AccessibilityNodeInfo::getLiveRegion() const
	{
		return callMethod<jint>(
			"getLiveRegion",
			"()I"
		);
	}
	inline jint AccessibilityNodeInfo::getMaxTextLength() const
	{
		return callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	inline java::time::Duration AccessibilityNodeInfo::getMinDurationBetweenContentChanges() const
	{
		return callObjectMethod(
			"getMinDurationBetweenContentChanges",
			"()Ljava/time/Duration;"
		);
	}
	inline jint AccessibilityNodeInfo::getMovementGranularities() const
	{
		return callMethod<jint>(
			"getMovementGranularities",
			"()I"
		);
	}
	inline JString AccessibilityNodeInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString AccessibilityNodeInfo::getPaneTitle() const
	{
		return callObjectMethod(
			"getPaneTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getParent(jint arg0) const
	{
		return callObjectMethod(
			"getParent",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_RangeInfo AccessibilityNodeInfo::getRangeInfo() const
	{
		return callObjectMethod(
			"getRangeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;"
		);
	}
	inline JString AccessibilityNodeInfo::getStateDescription() const
	{
		return callObjectMethod(
			"getStateDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString AccessibilityNodeInfo::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AccessibilityNodeInfo::getTextSelectionEnd() const
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	inline jint AccessibilityNodeInfo::getTextSelectionStart() const
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	inline JString AccessibilityNodeInfo::getTooltipText() const
	{
		return callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo AccessibilityNodeInfo::getTouchDelegateInfo() const
	{
		return callObjectMethod(
			"getTouchDelegateInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getTraversalAfter() const
	{
		return callObjectMethod(
			"getTraversalAfter",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo AccessibilityNodeInfo::getTraversalBefore() const
	{
		return callObjectMethod(
			"getTraversalBefore",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline JString AccessibilityNodeInfo::getUniqueId() const
	{
		return callObjectMethod(
			"getUniqueId",
			"()Ljava/lang/String;"
		);
	}
	inline JString AccessibilityNodeInfo::getViewIdResourceName() const
	{
		return callObjectMethod(
			"getViewIdResourceName",
			"()Ljava/lang/String;"
		);
	}
	inline android::view::accessibility::AccessibilityWindowInfo AccessibilityNodeInfo::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	inline jint AccessibilityNodeInfo::getWindowId() const
	{
		return callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	inline jboolean AccessibilityNodeInfo::hasRequestInitialAccessibilityFocus() const
	{
		return callMethod<jboolean>(
			"hasRequestInitialAccessibilityFocus",
			"()Z"
		);
	}
	inline jint AccessibilityNodeInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AccessibilityNodeInfo::isAccessibilityDataSensitive() const
	{
		return callMethod<jboolean>(
			"isAccessibilityDataSensitive",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isAccessibilityFocused() const
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isCheckable() const
	{
		return callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isClickable() const
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isContentInvalid() const
	{
		return callMethod<jboolean>(
			"isContentInvalid",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isContextClickable() const
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isDismissable() const
	{
		return callMethod<jboolean>(
			"isDismissable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isEditable() const
	{
		return callMethod<jboolean>(
			"isEditable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isFocusable() const
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isHeading() const
	{
		return callMethod<jboolean>(
			"isHeading",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isImportantForAccessibility() const
	{
		return callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isLongClickable() const
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isMultiLine() const
	{
		return callMethod<jboolean>(
			"isMultiLine",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isPassword() const
	{
		return callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isScreenReaderFocusable() const
	{
		return callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isScrollable() const
	{
		return callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isSelected() const
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isShowingHintText() const
	{
		return callMethod<jboolean>(
			"isShowingHintText",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isTextEntryKey() const
	{
		return callMethod<jboolean>(
			"isTextEntryKey",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isTextSelectable() const
	{
		return callMethod<jboolean>(
			"isTextSelectable",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::isVisibleToUser() const
	{
		return callMethod<jboolean>(
			"isVisibleToUser",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::performAction(jint arg0) const
	{
		return callMethod<jboolean>(
			"performAction",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AccessibilityNodeInfo::performAction(jint arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"performAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void AccessibilityNodeInfo::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	inline jboolean AccessibilityNodeInfo::refresh() const
	{
		return callMethod<jboolean>(
			"refresh",
			"()Z"
		);
	}
	inline jboolean AccessibilityNodeInfo::refreshWithExtraData(JString arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"refreshWithExtraData",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean AccessibilityNodeInfo::removeAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0) const
	{
		return callMethod<jboolean>(
			"removeAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)Z",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::removeAction(jint arg0) const
	{
		callMethod<void>(
			"removeAction",
			"(I)V",
			arg0
		);
	}
	inline jboolean AccessibilityNodeInfo::removeChild(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean AccessibilityNodeInfo::removeChild(android::view::View arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setAccessibilityDataSensitive(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessibilityDataSensitive",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setAccessibilityFocused(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setAvailableExtraData(JObject arg0) const
	{
		callMethod<void>(
			"setAvailableExtraData",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setBoundsInParent(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setBoundsInScreen(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setBoundsInWindow(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setBoundsInWindow",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setCanOpenPopup(jboolean arg0) const
	{
		callMethod<void>(
			"setCanOpenPopup",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setCheckable(jboolean arg0) const
	{
		callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setClassName(JString arg0) const
	{
		callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setCollectionInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionInfo arg0) const
	{
		callMethod<void>(
			"setCollectionInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setCollectionItemInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo arg0) const
	{
		callMethod<void>(
			"setCollectionItemInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setContainerTitle(JString arg0) const
	{
		callMethod<void>(
			"setContainerTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setContentInvalid(jboolean arg0) const
	{
		callMethod<void>(
			"setContentInvalid",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setContextClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setDismissable(jboolean arg0) const
	{
		callMethod<void>(
			"setDismissable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setDrawingOrder(jint arg0) const
	{
		callMethod<void>(
			"setDrawingOrder",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setEditable(jboolean arg0) const
	{
		callMethod<void>(
			"setEditable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setError(JString arg0) const
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setFocused(jboolean arg0) const
	{
		callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setHeading(jboolean arg0) const
	{
		callMethod<void>(
			"setHeading",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setHintText(JString arg0) const
	{
		callMethod<void>(
			"setHintText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setImportantForAccessibility(jboolean arg0) const
	{
		callMethod<void>(
			"setImportantForAccessibility",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setInputType(jint arg0) const
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setLabelFor(android::view::View arg0) const
	{
		callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setLabelFor(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setLabeledBy(android::view::View arg0) const
	{
		callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setLabeledBy(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setLiveRegion(jint arg0) const
	{
		callMethod<void>(
			"setLiveRegion",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setLongClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setMaxTextLength(jint arg0) const
	{
		callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setMinDurationBetweenContentChanges(java::time::Duration arg0) const
	{
		callMethod<void>(
			"setMinDurationBetweenContentChanges",
			"(Ljava/time/Duration;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setMovementGranularities(jint arg0) const
	{
		callMethod<void>(
			"setMovementGranularities",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setMultiLine(jboolean arg0) const
	{
		callMethod<void>(
			"setMultiLine",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setPackageName(JString arg0) const
	{
		callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setPaneTitle(JString arg0) const
	{
		callMethod<void>(
			"setPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setParent(android::view::View arg0) const
	{
		callMethod<void>(
			"setParent",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setParent(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setParent",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setPassword(jboolean arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setQueryFromAppProcessEnabled(android::view::View arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setQueryFromAppProcessEnabled",
			"(Landroid/view/View;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setRangeInfo(android::view::accessibility::AccessibilityNodeInfo_RangeInfo arg0) const
	{
		callMethod<void>(
			"setRangeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setRequestInitialAccessibilityFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setRequestInitialAccessibilityFocus",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setScreenReaderFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setScrollable(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setShowingHintText(jboolean arg0) const
	{
		callMethod<void>(
			"setShowingHintText",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setSource(android::view::View arg0) const
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setSource(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setStateDescription(JString arg0) const
	{
		callMethod<void>(
			"setStateDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setTextEntryKey(jboolean arg0) const
	{
		callMethod<void>(
			"setTextEntryKey",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setTextSelectable(jboolean arg0) const
	{
		callMethod<void>(
			"setTextSelectable",
			"(Z)V",
			arg0
		);
	}
	inline void AccessibilityNodeInfo::setTextSelection(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setTextSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setTooltipText(JString arg0) const
	{
		callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setTouchDelegateInfo(android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo arg0) const
	{
		callMethod<void>(
			"setTouchDelegateInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setTraversalAfter(android::view::View arg0) const
	{
		callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setTraversalAfter(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setTraversalBefore(android::view::View arg0) const
	{
		callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AccessibilityNodeInfo::setTraversalBefore(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AccessibilityNodeInfo::setUniqueId(JString arg0) const
	{
		callMethod<void>(
			"setUniqueId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setViewIdResourceName(JString arg0) const
	{
		callMethod<void>(
			"setViewIdResourceName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityNodeInfo::setVisibleToUser(jboolean arg0) const
	{
		callMethod<void>(
			"setVisibleToUser",
			"(Z)V",
			arg0
		);
	}
	inline JString AccessibilityNodeInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AccessibilityNodeInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif

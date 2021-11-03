#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class View;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_AccessibilityAction;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_RangeInfo;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo;
}
namespace android::view::accessibility
{
	class AccessibilityWindowInfo;
}
class JString;
class JObject;
class JString;

namespace android::view::accessibility
{
	class AccessibilityNodeInfo : public JObject
	{
	public:
		// Fields
		static jint ACTION_ACCESSIBILITY_FOCUS();
		static JString ACTION_ARGUMENT_COLUMN_INT();
		static JString ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN();
		static JString ACTION_ARGUMENT_HTML_ELEMENT_STRING();
		static JString ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT();
		static JString ACTION_ARGUMENT_MOVE_WINDOW_X();
		static JString ACTION_ARGUMENT_MOVE_WINDOW_Y();
		static JString ACTION_ARGUMENT_PROGRESS_VALUE();
		static JString ACTION_ARGUMENT_ROW_INT();
		static JString ACTION_ARGUMENT_SELECTION_END_INT();
		static JString ACTION_ARGUMENT_SELECTION_START_INT();
		static JString ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE();
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
		static JObject CREATOR();
		static JString EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH();
		static JString EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX();
		static JString EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY();
		static jint FOCUS_ACCESSIBILITY();
		static jint FOCUS_INPUT();
		static jint MOVEMENT_GRANULARITY_CHARACTER();
		static jint MOVEMENT_GRANULARITY_LINE();
		static jint MOVEMENT_GRANULARITY_PAGE();
		static jint MOVEMENT_GRANULARITY_PARAGRAPH();
		static jint MOVEMENT_GRANULARITY_WORD();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::accessibility::AccessibilityNodeInfo obtain();
		static android::view::accessibility::AccessibilityNodeInfo obtain(android::view::View arg0);
		static android::view::accessibility::AccessibilityNodeInfo obtain(android::view::accessibility::AccessibilityNodeInfo arg0);
		static android::view::accessibility::AccessibilityNodeInfo obtain(android::view::View arg0, jint arg1);
		void addAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0) const;
		void addAction(jint arg0) const;
		void addChild(android::view::View arg0) const;
		void addChild(android::view::View arg0, jint arg1) const;
		jboolean canOpenPopup() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject findAccessibilityNodeInfosByText(JString arg0) const;
		JObject findAccessibilityNodeInfosByViewId(JString arg0) const;
		android::view::accessibility::AccessibilityNodeInfo findFocus(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo focusSearch(jint arg0) const;
		JObject getActionList() const;
		jint getActions() const;
		JObject getAvailableExtraData() const;
		void getBoundsInParent(android::graphics::Rect arg0) const;
		void getBoundsInScreen(android::graphics::Rect arg0) const;
		android::view::accessibility::AccessibilityNodeInfo getChild(jint arg0) const;
		jint getChildCount() const;
		JString getClassName() const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionInfo getCollectionInfo() const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo getCollectionItemInfo() const;
		JString getContentDescription() const;
		jint getDrawingOrder() const;
		JString getError() const;
		android::os::Bundle getExtras() const;
		JString getHintText() const;
		jint getInputType() const;
		android::view::accessibility::AccessibilityNodeInfo getLabelFor() const;
		android::view::accessibility::AccessibilityNodeInfo getLabeledBy() const;
		jint getLiveRegion() const;
		jint getMaxTextLength() const;
		jint getMovementGranularities() const;
		JString getPackageName() const;
		JString getPaneTitle() const;
		android::view::accessibility::AccessibilityNodeInfo getParent() const;
		android::view::accessibility::AccessibilityNodeInfo_RangeInfo getRangeInfo() const;
		JString getText() const;
		jint getTextSelectionEnd() const;
		jint getTextSelectionStart() const;
		JString getTooltipText() const;
		android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo getTouchDelegateInfo() const;
		android::view::accessibility::AccessibilityNodeInfo getTraversalAfter() const;
		android::view::accessibility::AccessibilityNodeInfo getTraversalBefore() const;
		JString getViewIdResourceName() const;
		android::view::accessibility::AccessibilityWindowInfo getWindow() const;
		jint getWindowId() const;
		jint hashCode() const;
		jboolean isAccessibilityFocused() const;
		jboolean isCheckable() const;
		jboolean isChecked() const;
		jboolean isClickable() const;
		jboolean isContentInvalid() const;
		jboolean isContextClickable() const;
		jboolean isDismissable() const;
		jboolean isEditable() const;
		jboolean isEnabled() const;
		jboolean isFocusable() const;
		jboolean isFocused() const;
		jboolean isHeading() const;
		jboolean isImportantForAccessibility() const;
		jboolean isLongClickable() const;
		jboolean isMultiLine() const;
		jboolean isPassword() const;
		jboolean isScreenReaderFocusable() const;
		jboolean isScrollable() const;
		jboolean isSelected() const;
		jboolean isShowingHintText() const;
		jboolean isTextEntryKey() const;
		jboolean isVisibleToUser() const;
		jboolean performAction(jint arg0) const;
		jboolean performAction(jint arg0, android::os::Bundle arg1) const;
		void recycle() const;
		jboolean refresh() const;
		jboolean refreshWithExtraData(JString arg0, android::os::Bundle arg1) const;
		jboolean removeAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0) const;
		void removeAction(jint arg0) const;
		jboolean removeChild(android::view::View arg0) const;
		jboolean removeChild(android::view::View arg0, jint arg1) const;
		void setAccessibilityFocused(jboolean arg0) const;
		void setAvailableExtraData(JObject arg0) const;
		void setBoundsInParent(android::graphics::Rect arg0) const;
		void setBoundsInScreen(android::graphics::Rect arg0) const;
		void setCanOpenPopup(jboolean arg0) const;
		void setCheckable(jboolean arg0) const;
		void setChecked(jboolean arg0) const;
		void setClassName(JString arg0) const;
		void setClickable(jboolean arg0) const;
		void setCollectionInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionInfo arg0) const;
		void setCollectionItemInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo arg0) const;
		void setContentDescription(JString arg0) const;
		void setContentInvalid(jboolean arg0) const;
		void setContextClickable(jboolean arg0) const;
		void setDismissable(jboolean arg0) const;
		void setDrawingOrder(jint arg0) const;
		void setEditable(jboolean arg0) const;
		void setEnabled(jboolean arg0) const;
		void setError(JString arg0) const;
		void setFocusable(jboolean arg0) const;
		void setFocused(jboolean arg0) const;
		void setHeading(jboolean arg0) const;
		void setHintText(JString arg0) const;
		void setImportantForAccessibility(jboolean arg0) const;
		void setInputType(jint arg0) const;
		void setLabelFor(android::view::View arg0) const;
		void setLabelFor(android::view::View arg0, jint arg1) const;
		void setLabeledBy(android::view::View arg0) const;
		void setLabeledBy(android::view::View arg0, jint arg1) const;
		void setLiveRegion(jint arg0) const;
		void setLongClickable(jboolean arg0) const;
		void setMaxTextLength(jint arg0) const;
		void setMovementGranularities(jint arg0) const;
		void setMultiLine(jboolean arg0) const;
		void setPackageName(JString arg0) const;
		void setPaneTitle(JString arg0) const;
		void setParent(android::view::View arg0) const;
		void setParent(android::view::View arg0, jint arg1) const;
		void setPassword(jboolean arg0) const;
		void setRangeInfo(android::view::accessibility::AccessibilityNodeInfo_RangeInfo arg0) const;
		void setScreenReaderFocusable(jboolean arg0) const;
		void setScrollable(jboolean arg0) const;
		void setSelected(jboolean arg0) const;
		void setShowingHintText(jboolean arg0) const;
		void setSource(android::view::View arg0) const;
		void setSource(android::view::View arg0, jint arg1) const;
		void setText(JString arg0) const;
		void setTextEntryKey(jboolean arg0) const;
		void setTextSelection(jint arg0, jint arg1) const;
		void setTooltipText(JString arg0) const;
		void setTouchDelegateInfo(android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo arg0) const;
		void setTraversalAfter(android::view::View arg0) const;
		void setTraversalAfter(android::view::View arg0, jint arg1) const;
		void setTraversalBefore(android::view::View arg0) const;
		void setTraversalBefore(android::view::View arg0, jint arg1) const;
		void setViewIdResourceName(JString arg0) const;
		void setVisibleToUser(jboolean arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::accessibility


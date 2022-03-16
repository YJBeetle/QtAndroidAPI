#pragma once

#include "./AdapterView.def.hpp"

class JLongArray;
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::util
{
	class SparseBooleanArray;
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
	class PointerIcon;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace android::widget
{
	class AbsListView_LayoutParams;
}
class JString;
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::widget
{
	class AbsListView : public android::widget::AdapterView
	{
	public:
		// Fields
		static jint CHOICE_MODE_MULTIPLE();
		static jint CHOICE_MODE_MULTIPLE_MODAL();
		static jint CHOICE_MODE_NONE();
		static jint CHOICE_MODE_SINGLE();
		static jint TRANSCRIPT_MODE_ALWAYS_SCROLL();
		static jint TRANSCRIPT_MODE_DISABLED();
		static jint TRANSCRIPT_MODE_NORMAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsListView(const char *className, const char *sig, Ts...agv) : android::widget::AdapterView(className, sig, std::forward<Ts>(agv)...) {}
		AbsListView(QJniObject obj) : android::widget::AdapterView(obj) {}
		
		// Constructors
		AbsListView(android::content::Context arg0);
		AbsListView(android::content::Context arg0, JObject arg1);
		AbsListView(android::content::Context arg0, JObject arg1, jint arg2);
		AbsListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addTouchables(java::util::ArrayList arg0) const;
		void afterTextChanged(JObject arg0) const;
		void beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean canScrollList(jint arg0) const;
		jboolean checkInputConnectionProxy(android::view::View arg0) const;
		void clearChoices() const;
		void clearTextFilter() const;
		void deferNotifyDataSetChanged() const;
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		void draw(android::graphics::Canvas arg0) const;
		void fling(jint arg0) const;
		android::widget::AbsListView_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		jint getCacheColorHint() const;
		jint getCheckedItemCount() const;
		JLongArray getCheckedItemIds() const;
		jint getCheckedItemPosition() const;
		android::util::SparseBooleanArray getCheckedItemPositions() const;
		jint getChoiceMode() const;
		void getFocusedRect(android::graphics::Rect arg0) const;
		jint getListPaddingBottom() const;
		jint getListPaddingLeft() const;
		jint getListPaddingRight() const;
		jint getListPaddingTop() const;
		android::view::View getSelectedView() const;
		android::graphics::drawable::Drawable getSelector() const;
		jint getSolidColor() const;
		JString getTextFilter() const;
		jint getTranscriptMode() const;
		jint getVerticalScrollbarWidth() const;
		jboolean hasTextFilter() const;
		void invalidateViews() const;
		jboolean isFastScrollAlwaysVisible() const;
		jboolean isFastScrollEnabled() const;
		jboolean isItemChecked(jint arg0) const;
		jboolean isScrollingCacheEnabled() const;
		jboolean isSmoothScrollbarEnabled() const;
		jboolean isStackFromBottom() const;
		jboolean isTextFilterEnabled() const;
		void jumpDrawablesToCurrentState() const;
		void onCancelPendingInputEvents() const;
		JObject onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const;
		void onFilterComplete(jint arg0) const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		void onGlobalLayout() const;
		void onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2) const;
		jboolean onInterceptHoverEvent(android::view::MotionEvent arg0) const;
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3) const;
		void onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2) const;
		jboolean onRemoteAdapterConnected() const;
		void onRemoteAdapterDisconnected() const;
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const;
		void onRestoreInstanceState(JObject arg0) const;
		void onRtlPropertiesChanged(jint arg0) const;
		JObject onSaveInstanceState() const;
		jboolean onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2) const;
		void onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void onTouchModeChanged(jboolean arg0) const;
		void onWindowFocusChanged(jboolean arg0) const;
		jboolean performItemClick(android::view::View arg0, jint arg1, jlong arg2) const;
		jint pointToPosition(jint arg0, jint arg1) const;
		jlong pointToRowId(jint arg0, jint arg1) const;
		void reclaimViews(JObject arg0) const;
		void requestDisallowInterceptTouchEvent(jboolean arg0) const;
		void requestLayout() const;
		void scrollListBy(jint arg0) const;
		void sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0) const;
		void setAdapter(JObject arg0) const;
		void setCacheColorHint(jint arg0) const;
		void setChoiceMode(jint arg0) const;
		void setDrawSelectorOnTop(jboolean arg0) const;
		void setFastScrollAlwaysVisible(jboolean arg0) const;
		void setFastScrollEnabled(jboolean arg0) const;
		void setFastScrollStyle(jint arg0) const;
		void setFilterText(JString arg0) const;
		void setFriction(jfloat arg0) const;
		void setItemChecked(jint arg0, jboolean arg1) const;
		void setMultiChoiceModeListener(JObject arg0) const;
		void setOnScrollListener(JObject arg0) const;
		void setOverScrollMode(jint arg0) const;
		void setRecyclerListener(JObject arg0) const;
		void setRemoteViewsAdapter(android::content::Intent arg0) const;
		void setScrollBarStyle(jint arg0) const;
		void setScrollIndicators(android::view::View arg0, android::view::View arg1) const;
		void setScrollingCacheEnabled(jboolean arg0) const;
		void setSelectionFromTop(jint arg0, jint arg1) const;
		void setSelector(android::graphics::drawable::Drawable arg0) const;
		void setSelector(jint arg0) const;
		void setSmoothScrollbarEnabled(jboolean arg0) const;
		void setStackFromBottom(jboolean arg0) const;
		void setTextFilterEnabled(jboolean arg0) const;
		void setTranscriptMode(jint arg0) const;
		void setVelocityScale(jfloat arg0) const;
		void setVerticalScrollbarPosition(jint arg0) const;
		jboolean showContextMenu() const;
		jboolean showContextMenu(jfloat arg0, jfloat arg1) const;
		jboolean showContextMenuForChild(android::view::View arg0) const;
		jboolean showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2) const;
		void smoothScrollBy(jint arg0, jint arg1) const;
		void smoothScrollToPosition(jint arg0) const;
		void smoothScrollToPosition(jint arg0, jint arg1) const;
		void smoothScrollToPositionFromTop(jint arg0, jint arg1) const;
		void smoothScrollToPositionFromTop(jint arg0, jint arg1, jint arg2) const;
		jboolean verifyDrawable(android::graphics::drawable::Drawable arg0) const;
	};
} // namespace android::widget


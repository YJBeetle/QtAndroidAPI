#pragma once

#include "./AdapterView.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbsListView(const char *className, const char *sig, Ts...agv) : android::widget::AdapterView(className, sig, std::forward<Ts>(agv)...) {}
		AbsListView(QAndroidJniObject obj);
		
		// Constructors
		AbsListView(android::content::Context arg0);
		AbsListView(android::content::Context arg0, JObject arg1);
		AbsListView(android::content::Context arg0, JObject arg1, jint arg2);
		AbsListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addTouchables(java::util::ArrayList arg0);
		void afterTextChanged(JObject arg0);
		void beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3);
		jboolean canScrollList(jint arg0);
		jboolean checkInputConnectionProxy(android::view::View arg0);
		void clearChoices();
		void clearTextFilter();
		void deferNotifyDataSetChanged();
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1);
		void draw(android::graphics::Canvas arg0);
		void fling(jint arg0);
		android::widget::AbsListView_LayoutParams generateLayoutParams(JObject arg0);
		JString getAccessibilityClassName();
		jint getBottomEdgeEffectColor();
		jint getCacheColorHint();
		jint getCheckedItemCount();
		JLongArray getCheckedItemIds();
		jint getCheckedItemPosition();
		android::util::SparseBooleanArray getCheckedItemPositions();
		jint getChoiceMode();
		void getFocusedRect(android::graphics::Rect arg0);
		jint getListPaddingBottom();
		jint getListPaddingLeft();
		jint getListPaddingRight();
		jint getListPaddingTop();
		android::view::View getSelectedView();
		android::graphics::drawable::Drawable getSelector();
		jint getSolidColor();
		JString getTextFilter();
		jint getTopEdgeEffectColor();
		jint getTranscriptMode();
		jint getVerticalScrollbarWidth();
		jboolean hasTextFilter();
		void invalidateViews();
		jboolean isDrawSelectorOnTop();
		jboolean isFastScrollAlwaysVisible();
		jboolean isFastScrollEnabled();
		jboolean isItemChecked(jint arg0);
		jboolean isScrollingCacheEnabled();
		jboolean isSmoothScrollbarEnabled();
		jboolean isStackFromBottom();
		jboolean isTextFilterEnabled();
		void jumpDrawablesToCurrentState();
		void onCancelPendingInputEvents();
		JObject onCreateInputConnection(android::view::inputmethod::EditorInfo arg0);
		void onFilterComplete(jint arg0);
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		void onGlobalLayout();
		void onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2);
		jboolean onInterceptHoverEvent(android::view::MotionEvent arg0);
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		jboolean onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		void onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2);
		jboolean onRemoteAdapterConnected();
		void onRemoteAdapterDisconnected();
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
		void onRestoreInstanceState(JObject arg0);
		void onRtlPropertiesChanged(jint arg0);
		JObject onSaveInstanceState();
		jboolean onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2);
		void onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void onTouchModeChanged(jboolean arg0);
		void onWindowFocusChanged(jboolean arg0);
		jboolean performItemClick(android::view::View arg0, jint arg1, jlong arg2);
		jint pointToPosition(jint arg0, jint arg1);
		jlong pointToRowId(jint arg0, jint arg1);
		void reclaimViews(JObject arg0);
		void requestDisallowInterceptTouchEvent(jboolean arg0);
		void requestLayout();
		void scrollListBy(jint arg0);
		void sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0);
		void setAdapter(JObject arg0);
		void setBottomEdgeEffectColor(jint arg0);
		void setCacheColorHint(jint arg0);
		void setChoiceMode(jint arg0);
		void setDrawSelectorOnTop(jboolean arg0);
		void setEdgeEffectColor(jint arg0);
		void setFastScrollAlwaysVisible(jboolean arg0);
		void setFastScrollEnabled(jboolean arg0);
		void setFastScrollStyle(jint arg0);
		void setFilterText(JString arg0);
		void setFriction(jfloat arg0);
		void setItemChecked(jint arg0, jboolean arg1);
		void setMultiChoiceModeListener(JObject arg0);
		void setOnScrollListener(JObject arg0);
		void setRecyclerListener(JObject arg0);
		void setRemoteViewsAdapter(android::content::Intent arg0);
		void setScrollBarStyle(jint arg0);
		void setScrollIndicators(android::view::View arg0, android::view::View arg1);
		void setScrollingCacheEnabled(jboolean arg0);
		void setSelectionFromTop(jint arg0, jint arg1);
		void setSelector(android::graphics::drawable::Drawable arg0);
		void setSelector(jint arg0);
		void setSmoothScrollbarEnabled(jboolean arg0);
		void setStackFromBottom(jboolean arg0);
		void setTextFilterEnabled(jboolean arg0);
		void setTopEdgeEffectColor(jint arg0);
		void setTranscriptMode(jint arg0);
		void setVelocityScale(jfloat arg0);
		void setVerticalScrollbarPosition(jint arg0);
		jboolean showContextMenu();
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
		jboolean showContextMenuForChild(android::view::View arg0);
		jboolean showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2);
		void smoothScrollBy(jint arg0, jint arg1);
		void smoothScrollToPosition(jint arg0);
		void smoothScrollToPosition(jint arg0, jint arg1);
		void smoothScrollToPositionFromTop(jint arg0, jint arg1);
		void smoothScrollToPositionFromTop(jint arg0, jint arg1, jint arg2);
		jboolean verifyDrawable(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::widget


#pragma once

#include "./View.def.hpp"

class JIntArray;
namespace android::animation
{
	class LayoutTransition;
}
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
}
namespace android::os
{
	class Bundle;
}
namespace android::util
{
	class SparseArray;
}
namespace android::view
{
	class ActionMode;
}
namespace android::view
{
	class DragEvent;
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
namespace android::view
{
	class ViewGroupOverlay;
}
namespace android::view
{
	class ViewOverlay;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view
{
	class WindowInsets;
}
namespace android::view
{
	class WindowInsetsAnimation;
}
namespace android::view
{
	class WindowInsetsAnimation_Bounds;
}
namespace android::view
{
	class WindowInsetsAnimation_Callback;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace android::view::animation
{
	class LayoutAnimationController;
}
namespace android::view::animation
{
	class Transformation;
}
namespace android::view::translation
{
	class TranslationCapability;
}
class JString;
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::view
{
	class ViewGroup : public android::view::View
	{
	public:
		// Fields
		static jint FOCUS_AFTER_DESCENDANTS();
		static jint FOCUS_BEFORE_DESCENDANTS();
		static jint FOCUS_BLOCK_DESCENDANTS();
		static jint LAYOUT_MODE_CLIP_BOUNDS();
		static jint LAYOUT_MODE_OPTICAL_BOUNDS();
		static jint PERSISTENT_ALL_CACHES();
		static jint PERSISTENT_ANIMATION_CACHE();
		static jint PERSISTENT_NO_CACHE();
		static jint PERSISTENT_SCROLLING_CACHE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewGroup(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		ViewGroup(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		ViewGroup(android::content::Context arg0);
		ViewGroup(android::content::Context arg0, JObject arg1);
		ViewGroup(android::content::Context arg0, JObject arg1, jint arg2);
		ViewGroup(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		static jint getChildMeasureSpec(jint arg0, jint arg1, jint arg2);
		void addChildrenForAccessibility(java::util::ArrayList arg0) const;
		void addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2) const;
		void addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2) const;
		void addKeyboardNavigationClusters(JObject arg0, jint arg1) const;
		jboolean addStatesFromChildren() const;
		void addTouchables(java::util::ArrayList arg0) const;
		void addView(android::view::View arg0) const;
		void addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void addView(android::view::View arg0, jint arg1) const;
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const;
		void addView(android::view::View arg0, jint arg1, jint arg2) const;
		void bringChildToFront(android::view::View arg0) const;
		void childDrawableStateChanged(android::view::View arg0) const;
		void childHasTransientStateChanged(android::view::View arg0, jboolean arg1) const;
		void clearChildFocus(android::view::View arg0) const;
		void clearDisappearingChildren() const;
		void clearFocus() const;
		android::view::WindowInsets dispatchApplyWindowInsets(android::view::WindowInsets arg0) const;
		jboolean dispatchCapturedPointerEvent(android::view::MotionEvent arg0) const;
		void dispatchConfigurationChanged(android::content::res::Configuration arg0) const;
		void dispatchCreateViewTranslationRequest(JObject arg0, JIntArray arg1, android::view::translation::TranslationCapability arg2, JObject arg3) const;
		void dispatchDisplayHint(jint arg0) const;
		jboolean dispatchDragEvent(android::view::DragEvent arg0) const;
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		void dispatchFinishTemporaryDetach() const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchKeyEventPreIme(android::view::KeyEvent arg0) const;
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const;
		void dispatchPointerCaptureChanged(jboolean arg0) const;
		void dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const;
		void dispatchProvideStructure(android::view::ViewStructure arg0) const;
		void dispatchScrollCaptureSearch(android::graphics::Rect arg0, android::graphics::Point arg1, JObject arg2) const;
		void dispatchSetActivated(jboolean arg0) const;
		void dispatchSetSelected(jboolean arg0) const;
		void dispatchStartTemporaryDetach() const;
		void dispatchSystemUiVisibilityChanged(jint arg0) const;
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchUnhandledMove(android::view::View arg0, jint arg1) const;
		void dispatchWindowFocusChanged(jboolean arg0) const;
		void dispatchWindowInsetsAnimationEnd(android::view::WindowInsetsAnimation arg0) const;
		void dispatchWindowInsetsAnimationPrepare(android::view::WindowInsetsAnimation arg0) const;
		android::view::WindowInsets dispatchWindowInsetsAnimationProgress(android::view::WindowInsets arg0, JObject arg1) const;
		android::view::WindowInsetsAnimation_Bounds dispatchWindowInsetsAnimationStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1) const;
		void dispatchWindowSystemUiVisiblityChanged(jint arg0) const;
		void dispatchWindowVisibilityChanged(jint arg0) const;
		void endViewTransition(android::view::View arg0) const;
		android::view::View findFocus() const;
		void findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const;
		android::view::View focusSearch(android::view::View arg0, jint arg1) const;
		void focusableViewAvailable(android::view::View arg0) const;
		jboolean gatherTransparentRegion(android::graphics::Region arg0) const;
		android::view::ViewGroup_LayoutParams generateLayoutParams(JObject arg0) const;
		JString getAccessibilityClassName() const;
		android::view::View getChildAt(jint arg0) const;
		jint getChildCount() const;
		jint getChildDrawingOrder(jint arg0) const;
		jboolean getChildVisibleRect(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2) const;
		jboolean getClipChildren() const;
		jboolean getClipToPadding() const;
		jint getDescendantFocusability() const;
		android::view::View getFocusedChild() const;
		android::view::animation::LayoutAnimationController getLayoutAnimation() const;
		JObject getLayoutAnimationListener() const;
		jint getLayoutMode() const;
		android::animation::LayoutTransition getLayoutTransition() const;
		jint getNestedScrollAxes() const;
		android::view::ViewGroupOverlay getOverlay() const;
		jint getPersistentDrawingCache() const;
		jboolean getTouchscreenBlocksFocus() const;
		jboolean hasFocus() const;
		jboolean hasTransientState() const;
		jint indexOfChild(android::view::View arg0) const;
		void invalidateChild(android::view::View arg0, android::graphics::Rect arg1) const;
		JObject invalidateChildInParent(JIntArray arg0, android::graphics::Rect arg1) const;
		jboolean isAlwaysDrawnWithCacheEnabled() const;
		jboolean isAnimationCacheEnabled() const;
		jboolean isLayoutSuppressed() const;
		jboolean isMotionEventSplittingEnabled() const;
		jboolean isTransitionGroup() const;
		void jumpDrawablesToCurrentState() const;
		void layout(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void notifySubtreeAccessibilityStateChanged(android::view::View arg0, android::view::View arg1, jint arg2) const;
		void offsetDescendantRectToMyCoords(android::view::View arg0, android::graphics::Rect arg1) const;
		void offsetRectIntoDescendantCoords(android::view::View arg0, android::graphics::Rect arg1) const;
		void onDescendantInvalidated(android::view::View arg0, android::view::View arg1) const;
		jboolean onInterceptHoverEvent(android::view::MotionEvent arg0) const;
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3) const;
		jboolean onNestedPreFling(android::view::View arg0, jfloat arg1, jfloat arg2) const;
		jboolean onNestedPrePerformAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2) const;
		void onNestedPreScroll(android::view::View arg0, jint arg1, jint arg2, JIntArray arg3) const;
		void onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2) const;
		jboolean onRequestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const;
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const;
		jboolean onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2) const;
		void onStopNestedScroll(android::view::View arg0) const;
		void onViewAdded(android::view::View arg0) const;
		void onViewRemoved(android::view::View arg0) const;
		void recomputeViewAttributes(android::view::View arg0) const;
		void removeAllViews() const;
		void removeAllViewsInLayout() const;
		void removeView(android::view::View arg0) const;
		void removeViewAt(jint arg0) const;
		void removeViewInLayout(android::view::View arg0) const;
		void removeViews(jint arg0, jint arg1) const;
		void removeViewsInLayout(jint arg0, jint arg1) const;
		void requestChildFocus(android::view::View arg0, android::view::View arg1) const;
		jboolean requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const;
		void requestDisallowInterceptTouchEvent(jboolean arg0) const;
		jboolean requestFocus(jint arg0, android::graphics::Rect arg1) const;
		jboolean requestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const;
		void requestTransparentRegion(android::view::View arg0) const;
		jboolean restoreDefaultFocus() const;
		void scheduleLayoutAnimation() const;
		void setAddStatesFromChildren(jboolean arg0) const;
		void setAlwaysDrawnWithCacheEnabled(jboolean arg0) const;
		void setAnimationCacheEnabled(jboolean arg0) const;
		void setClipChildren(jboolean arg0) const;
		void setClipToPadding(jboolean arg0) const;
		void setDescendantFocusability(jint arg0) const;
		void setLayoutAnimation(android::view::animation::LayoutAnimationController arg0) const;
		void setLayoutAnimationListener(JObject arg0) const;
		void setLayoutMode(jint arg0) const;
		void setLayoutTransition(android::animation::LayoutTransition arg0) const;
		void setMotionEventSplittingEnabled(jboolean arg0) const;
		void setOnHierarchyChangeListener(JObject arg0) const;
		void setPersistentDrawingCache(jint arg0) const;
		void setTouchscreenBlocksFocus(jboolean arg0) const;
		void setTransitionGroup(jboolean arg0) const;
		void setWindowInsetsAnimationCallback(android::view::WindowInsetsAnimation_Callback arg0) const;
		jboolean shouldDelayChildPressedState() const;
		jboolean showContextMenuForChild(android::view::View arg0) const;
		jboolean showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2) const;
		android::view::ActionMode startActionModeForChild(android::view::View arg0, JObject arg1) const;
		android::view::ActionMode startActionModeForChild(android::view::View arg0, JObject arg1, jint arg2) const;
		void startLayoutAnimation() const;
		void startViewTransition(android::view::View arg0) const;
		void suppressLayout(jboolean arg0) const;
		void updateViewLayout(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
	};
} // namespace android::view


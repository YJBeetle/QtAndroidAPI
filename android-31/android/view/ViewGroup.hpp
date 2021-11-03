#pragma once

#include "../../JObject.hpp"
#include "./View.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewGroup(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		ViewGroup(QAndroidJniObject obj);
		
		// Constructors
		ViewGroup(android::content::Context arg0);
		ViewGroup(android::content::Context arg0, JObject arg1);
		ViewGroup(android::content::Context arg0, JObject arg1, jint arg2);
		ViewGroup(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		static jint getChildMeasureSpec(jint arg0, jint arg1, jint arg2);
		void addChildrenForAccessibility(java::util::ArrayList arg0);
		void addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, android::os::Bundle arg2);
		void addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2);
		void addKeyboardNavigationClusters(JObject arg0, jint arg1);
		jboolean addStatesFromChildren();
		void addTouchables(java::util::ArrayList arg0);
		void addView(android::view::View arg0);
		void addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void addView(android::view::View arg0, jint arg1);
		void addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2);
		void addView(android::view::View arg0, jint arg1, jint arg2);
		void bringChildToFront(android::view::View arg0);
		void childDrawableStateChanged(android::view::View arg0);
		void childHasTransientStateChanged(android::view::View arg0, jboolean arg1);
		void clearChildFocus(android::view::View arg0);
		void clearDisappearingChildren();
		void clearFocus();
		android::view::WindowInsets dispatchApplyWindowInsets(android::view::WindowInsets arg0);
		jboolean dispatchCapturedPointerEvent(android::view::MotionEvent arg0);
		void dispatchConfigurationChanged(android::content::res::Configuration arg0);
		void dispatchCreateViewTranslationRequest(JObject arg0, jintArray arg1, android::view::translation::TranslationCapability arg2, JObject arg3);
		void dispatchDisplayHint(jint arg0);
		jboolean dispatchDragEvent(android::view::DragEvent arg0);
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1);
		void dispatchFinishTemporaryDetach();
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jboolean dispatchKeyEventPreIme(android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0);
		void dispatchPointerCaptureChanged(jboolean arg0);
		void dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		void dispatchProvideStructure(android::view::ViewStructure arg0);
		void dispatchScrollCaptureSearch(android::graphics::Rect arg0, android::graphics::Point arg1, JObject arg2);
		void dispatchSetActivated(jboolean arg0);
		void dispatchSetSelected(jboolean arg0);
		void dispatchStartTemporaryDetach();
		void dispatchSystemUiVisibilityChanged(jint arg0);
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0);
		jboolean dispatchUnhandledMove(android::view::View arg0, jint arg1);
		void dispatchWindowFocusChanged(jboolean arg0);
		void dispatchWindowInsetsAnimationEnd(android::view::WindowInsetsAnimation arg0);
		void dispatchWindowInsetsAnimationPrepare(android::view::WindowInsetsAnimation arg0);
		android::view::WindowInsets dispatchWindowInsetsAnimationProgress(android::view::WindowInsets arg0, JObject arg1);
		android::view::WindowInsetsAnimation_Bounds dispatchWindowInsetsAnimationStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1);
		void dispatchWindowSystemUiVisiblityChanged(jint arg0);
		void dispatchWindowVisibilityChanged(jint arg0);
		void endViewTransition(android::view::View arg0);
		android::view::View findFocus();
		void findViewsWithText(java::util::ArrayList arg0, jstring arg1, jint arg2);
		android::view::View focusSearch(android::view::View arg0, jint arg1);
		void focusableViewAvailable(android::view::View arg0);
		jboolean gatherTransparentRegion(android::graphics::Region arg0);
		android::view::ViewGroup_LayoutParams generateLayoutParams(JObject arg0);
		jstring getAccessibilityClassName();
		android::view::View getChildAt(jint arg0);
		jint getChildCount();
		jint getChildDrawingOrder(jint arg0);
		jboolean getChildVisibleRect(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2);
		jboolean getClipChildren();
		jboolean getClipToPadding();
		jint getDescendantFocusability();
		android::view::View getFocusedChild();
		android::view::animation::LayoutAnimationController getLayoutAnimation();
		JObject getLayoutAnimationListener();
		jint getLayoutMode();
		android::animation::LayoutTransition getLayoutTransition();
		jint getNestedScrollAxes();
		android::view::ViewGroupOverlay getOverlay();
		jint getPersistentDrawingCache();
		jboolean getTouchscreenBlocksFocus();
		jboolean hasFocus();
		jboolean hasTransientState();
		jint indexOfChild(android::view::View arg0);
		void invalidateChild(android::view::View arg0, android::graphics::Rect arg1);
		JObject invalidateChildInParent(jintArray arg0, android::graphics::Rect arg1);
		jboolean isAlwaysDrawnWithCacheEnabled();
		jboolean isAnimationCacheEnabled();
		jboolean isLayoutSuppressed();
		jboolean isMotionEventSplittingEnabled();
		jboolean isTransitionGroup();
		void jumpDrawablesToCurrentState();
		void layout(jint arg0, jint arg1, jint arg2, jint arg3);
		void notifySubtreeAccessibilityStateChanged(android::view::View arg0, android::view::View arg1, jint arg2);
		void offsetDescendantRectToMyCoords(android::view::View arg0, android::graphics::Rect arg1);
		void offsetRectIntoDescendantCoords(android::view::View arg0, android::graphics::Rect arg1);
		void onDescendantInvalidated(android::view::View arg0, android::view::View arg1);
		jboolean onInterceptHoverEvent(android::view::MotionEvent arg0);
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0);
		jboolean onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		jboolean onNestedPreFling(android::view::View arg0, jfloat arg1, jfloat arg2);
		jboolean onNestedPrePerformAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2);
		void onNestedPreScroll(android::view::View arg0, jint arg1, jint arg2, jintArray arg3);
		void onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2);
		jboolean onRequestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1);
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
		jboolean onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2);
		void onStopNestedScroll(android::view::View arg0);
		void onViewAdded(android::view::View arg0);
		void onViewRemoved(android::view::View arg0);
		void recomputeViewAttributes(android::view::View arg0);
		void removeAllViews();
		void removeAllViewsInLayout();
		void removeView(android::view::View arg0);
		void removeViewAt(jint arg0);
		void removeViewInLayout(android::view::View arg0);
		void removeViews(jint arg0, jint arg1);
		void removeViewsInLayout(jint arg0, jint arg1);
		void requestChildFocus(android::view::View arg0, android::view::View arg1);
		jboolean requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2);
		void requestDisallowInterceptTouchEvent(jboolean arg0);
		jboolean requestFocus(jint arg0, android::graphics::Rect arg1);
		jboolean requestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1);
		void requestTransparentRegion(android::view::View arg0);
		jboolean restoreDefaultFocus();
		void scheduleLayoutAnimation();
		void setAddStatesFromChildren(jboolean arg0);
		void setAlwaysDrawnWithCacheEnabled(jboolean arg0);
		void setAnimationCacheEnabled(jboolean arg0);
		void setClipChildren(jboolean arg0);
		void setClipToPadding(jboolean arg0);
		void setDescendantFocusability(jint arg0);
		void setLayoutAnimation(android::view::animation::LayoutAnimationController arg0);
		void setLayoutAnimationListener(JObject arg0);
		void setLayoutMode(jint arg0);
		void setLayoutTransition(android::animation::LayoutTransition arg0);
		void setMotionEventSplittingEnabled(jboolean arg0);
		void setOnHierarchyChangeListener(JObject arg0);
		void setPersistentDrawingCache(jint arg0);
		void setTouchscreenBlocksFocus(jboolean arg0);
		void setTransitionGroup(jboolean arg0);
		void setWindowInsetsAnimationCallback(android::view::WindowInsetsAnimation_Callback arg0);
		jboolean shouldDelayChildPressedState();
		jboolean showContextMenuForChild(android::view::View arg0);
		jboolean showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2);
		android::view::ActionMode startActionModeForChild(android::view::View arg0, JObject arg1);
		android::view::ActionMode startActionModeForChild(android::view::View arg0, JObject arg1, jint arg2);
		void startLayoutAnimation();
		void startViewTransition(android::view::View arg0);
		void suppressLayout(jboolean arg0);
		void updateViewLayout(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
	};
} // namespace android::view


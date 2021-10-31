#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::animation
{
	class StateListAnimator;
}
namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::content::res
{
	class Resources;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::util
{
	class Property;
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
	class Display;
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
	class KeyEvent_DispatcherState;
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
	class TouchDelegate;
}
namespace android::view
{
	class View_AccessibilityDelegate;
}
namespace android::view
{
	class View_DragShadowBuilder;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class ViewOutlineProvider;
}
namespace android::view
{
	class ViewOverlay;
}
namespace android::view
{
	class ViewPropertyAnimator;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view
{
	class ViewTreeObserver;
}
namespace android::view
{
	class WindowId;
}
namespace android::view
{
	class WindowInsets;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace android::view::accessibility
{
	class AccessibilityNodeProvider;
}
namespace android::view::animation
{
	class Animation;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace java::util
{
	class ArrayList;
}

namespace android::view
{
	class View : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACCESSIBILITY_LIVE_REGION_ASSERTIVE();
		static jint ACCESSIBILITY_LIVE_REGION_NONE();
		static jint ACCESSIBILITY_LIVE_REGION_POLITE();
		static android::util::Property ALPHA();
		static jint AUTOFILL_FLAG_INCLUDE_NOT_IMPORTANT_VIEWS();
		static jstring AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DATE();
		static jstring AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DAY();
		static jstring AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_MONTH();
		static jstring AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_YEAR();
		static jstring AUTOFILL_HINT_CREDIT_CARD_NUMBER();
		static jstring AUTOFILL_HINT_CREDIT_CARD_SECURITY_CODE();
		static jstring AUTOFILL_HINT_EMAIL_ADDRESS();
		static jstring AUTOFILL_HINT_NAME();
		static jstring AUTOFILL_HINT_PASSWORD();
		static jstring AUTOFILL_HINT_PHONE();
		static jstring AUTOFILL_HINT_POSTAL_ADDRESS();
		static jstring AUTOFILL_HINT_POSTAL_CODE();
		static jstring AUTOFILL_HINT_USERNAME();
		static jint AUTOFILL_TYPE_DATE();
		static jint AUTOFILL_TYPE_LIST();
		static jint AUTOFILL_TYPE_NONE();
		static jint AUTOFILL_TYPE_TEXT();
		static jint AUTOFILL_TYPE_TOGGLE();
		static jint DRAG_FLAG_GLOBAL();
		static jint DRAG_FLAG_GLOBAL_PERSISTABLE_URI_PERMISSION();
		static jint DRAG_FLAG_GLOBAL_PREFIX_URI_PERMISSION();
		static jint DRAG_FLAG_GLOBAL_URI_READ();
		static jint DRAG_FLAG_GLOBAL_URI_WRITE();
		static jint DRAG_FLAG_OPAQUE();
		static jint DRAWING_CACHE_QUALITY_AUTO();
		static jint DRAWING_CACHE_QUALITY_HIGH();
		static jint DRAWING_CACHE_QUALITY_LOW();
		static jint FIND_VIEWS_WITH_CONTENT_DESCRIPTION();
		static jint FIND_VIEWS_WITH_TEXT();
		static jint FOCUSABLE();
		static jint FOCUSABLES_ALL();
		static jint FOCUSABLES_TOUCH_MODE();
		static jint FOCUSABLE_AUTO();
		static jint FOCUS_BACKWARD();
		static jint FOCUS_DOWN();
		static jint FOCUS_FORWARD();
		static jint FOCUS_LEFT();
		static jint FOCUS_RIGHT();
		static jint FOCUS_UP();
		static jint GONE();
		static jint HAPTIC_FEEDBACK_ENABLED();
		static jint IMPORTANT_FOR_ACCESSIBILITY_AUTO();
		static jint IMPORTANT_FOR_ACCESSIBILITY_NO();
		static jint IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS();
		static jint IMPORTANT_FOR_ACCESSIBILITY_YES();
		static jint IMPORTANT_FOR_AUTOFILL_AUTO();
		static jint IMPORTANT_FOR_AUTOFILL_NO();
		static jint IMPORTANT_FOR_AUTOFILL_NO_EXCLUDE_DESCENDANTS();
		static jint IMPORTANT_FOR_AUTOFILL_YES();
		static jint IMPORTANT_FOR_AUTOFILL_YES_EXCLUDE_DESCENDANTS();
		static jint INVISIBLE();
		static jint KEEP_SCREEN_ON();
		static jint LAYER_TYPE_HARDWARE();
		static jint LAYER_TYPE_NONE();
		static jint LAYER_TYPE_SOFTWARE();
		static jint LAYOUT_DIRECTION_INHERIT();
		static jint LAYOUT_DIRECTION_LOCALE();
		static jint LAYOUT_DIRECTION_LTR();
		static jint LAYOUT_DIRECTION_RTL();
		static jint MEASURED_HEIGHT_STATE_SHIFT();
		static jint MEASURED_SIZE_MASK();
		static jint MEASURED_STATE_MASK();
		static jint MEASURED_STATE_TOO_SMALL();
		static jint NOT_FOCUSABLE();
		static jint NO_ID();
		static jint OVER_SCROLL_ALWAYS();
		static jint OVER_SCROLL_IF_CONTENT_SCROLLS();
		static jint OVER_SCROLL_NEVER();
		static android::util::Property ROTATION();
		static android::util::Property ROTATION_X();
		static android::util::Property ROTATION_Y();
		static android::util::Property SCALE_X();
		static android::util::Property SCALE_Y();
		static jint SCREEN_STATE_OFF();
		static jint SCREEN_STATE_ON();
		static jint SCROLLBARS_INSIDE_INSET();
		static jint SCROLLBARS_INSIDE_OVERLAY();
		static jint SCROLLBARS_OUTSIDE_INSET();
		static jint SCROLLBARS_OUTSIDE_OVERLAY();
		static jint SCROLLBAR_POSITION_DEFAULT();
		static jint SCROLLBAR_POSITION_LEFT();
		static jint SCROLLBAR_POSITION_RIGHT();
		static jint SCROLL_AXIS_HORIZONTAL();
		static jint SCROLL_AXIS_NONE();
		static jint SCROLL_AXIS_VERTICAL();
		static jint SCROLL_INDICATOR_BOTTOM();
		static jint SCROLL_INDICATOR_END();
		static jint SCROLL_INDICATOR_LEFT();
		static jint SCROLL_INDICATOR_RIGHT();
		static jint SCROLL_INDICATOR_START();
		static jint SCROLL_INDICATOR_TOP();
		static jint SOUND_EFFECTS_ENABLED();
		static jint STATUS_BAR_HIDDEN();
		static jint STATUS_BAR_VISIBLE();
		static jint SYSTEM_UI_FLAG_FULLSCREEN();
		static jint SYSTEM_UI_FLAG_HIDE_NAVIGATION();
		static jint SYSTEM_UI_FLAG_IMMERSIVE();
		static jint SYSTEM_UI_FLAG_IMMERSIVE_STICKY();
		static jint SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN();
		static jint SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION();
		static jint SYSTEM_UI_FLAG_LAYOUT_STABLE();
		static jint SYSTEM_UI_FLAG_LIGHT_NAVIGATION_BAR();
		static jint SYSTEM_UI_FLAG_LIGHT_STATUS_BAR();
		static jint SYSTEM_UI_FLAG_LOW_PROFILE();
		static jint SYSTEM_UI_FLAG_VISIBLE();
		static jint SYSTEM_UI_LAYOUT_FLAGS();
		static jint TEXT_ALIGNMENT_CENTER();
		static jint TEXT_ALIGNMENT_GRAVITY();
		static jint TEXT_ALIGNMENT_INHERIT();
		static jint TEXT_ALIGNMENT_TEXT_END();
		static jint TEXT_ALIGNMENT_TEXT_START();
		static jint TEXT_ALIGNMENT_VIEW_END();
		static jint TEXT_ALIGNMENT_VIEW_START();
		static jint TEXT_DIRECTION_ANY_RTL();
		static jint TEXT_DIRECTION_FIRST_STRONG();
		static jint TEXT_DIRECTION_FIRST_STRONG_LTR();
		static jint TEXT_DIRECTION_FIRST_STRONG_RTL();
		static jint TEXT_DIRECTION_INHERIT();
		static jint TEXT_DIRECTION_LOCALE();
		static jint TEXT_DIRECTION_LTR();
		static jint TEXT_DIRECTION_RTL();
		static android::util::Property TRANSLATION_X();
		static android::util::Property TRANSLATION_Y();
		static android::util::Property TRANSLATION_Z();
		static jint VISIBLE();
		static android::util::Property X();
		static android::util::Property Y();
		static android::util::Property Z();
		
		// QJniObject forward
		template<typename ...Ts> explicit View(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		View(QJniObject obj);
		
		// Constructors
		View(android::content::Context arg0);
		View(android::content::Context arg0, __JniBaseClass arg1);
		View(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		View(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		static jint combineMeasuredStates(jint arg0, jint arg1);
		static jint generateViewId();
		static jint getDefaultSize(jint arg0, jint arg1);
		static android::view::View inflate(android::content::Context arg0, jint arg1, android::view::ViewGroup arg2);
		static jint resolveSize(jint arg0, jint arg1);
		static jint resolveSizeAndState(jint arg0, jint arg1, jint arg2);
		void addChildrenForAccessibility(java::util::ArrayList arg0);
		void addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, android::os::Bundle arg2);
		void addFocusables(java::util::ArrayList arg0, jint arg1);
		void addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2);
		void addKeyboardNavigationClusters(__JniBaseClass arg0, jint arg1);
		void addOnAttachStateChangeListener(__JniBaseClass arg0);
		void addOnLayoutChangeListener(__JniBaseClass arg0);
		void addOnUnhandledKeyEventListener(__JniBaseClass arg0);
		void addTouchables(java::util::ArrayList arg0);
		android::view::ViewPropertyAnimator animate();
		void announceForAccessibility(jstring arg0);
		void autofill(android::util::SparseArray arg0);
		void autofill(android::view::autofill::AutofillValue arg0);
		void bringToFront();
		void buildDrawingCache();
		void buildDrawingCache(jboolean arg0);
		void buildLayer();
		jboolean callOnClick();
		jboolean canResolveLayoutDirection();
		jboolean canResolveTextAlignment();
		jboolean canResolveTextDirection();
		jboolean canScrollHorizontally(jint arg0);
		jboolean canScrollVertically(jint arg0);
		void cancelDragAndDrop();
		void cancelLongPress();
		void cancelPendingInputEvents();
		jboolean checkInputConnectionProxy(android::view::View arg0);
		void clearAnimation();
		void clearFocus();
		void computeScroll();
		android::view::WindowInsets computeSystemWindowInsets(android::view::WindowInsets arg0, android::graphics::Rect arg1);
		android::view::accessibility::AccessibilityNodeInfo createAccessibilityNodeInfo();
		void createContextMenu(__JniBaseClass arg0);
		void destroyDrawingCache();
		android::view::WindowInsets dispatchApplyWindowInsets(android::view::WindowInsets arg0);
		jboolean dispatchCapturedPointerEvent(android::view::MotionEvent arg0);
		void dispatchConfigurationChanged(android::content::res::Configuration arg0);
		void dispatchDisplayHint(jint arg0);
		jboolean dispatchDragEvent(android::view::DragEvent arg0);
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1);
		void dispatchFinishTemporaryDetach();
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jboolean dispatchKeyEventPreIme(android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0);
		jboolean dispatchNestedFling(jfloat arg0, jfloat arg1, jboolean arg2);
		jboolean dispatchNestedPreFling(jfloat arg0, jfloat arg1);
		jboolean dispatchNestedPrePerformAccessibilityAction(jint arg0, android::os::Bundle arg1);
		jboolean dispatchNestedPreScroll(jint arg0, jint arg1, jintArray arg2, jintArray arg3);
		jboolean dispatchNestedScroll(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		void dispatchPointerCaptureChanged(jboolean arg0);
		jboolean dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
		void dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		void dispatchProvideStructure(android::view::ViewStructure arg0);
		void dispatchStartTemporaryDetach();
		void dispatchSystemUiVisibilityChanged(jint arg0);
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0);
		jboolean dispatchUnhandledMove(android::view::View arg0, jint arg1);
		void dispatchWindowFocusChanged(jboolean arg0);
		void dispatchWindowSystemUiVisiblityChanged(jint arg0);
		void dispatchWindowVisibilityChanged(jint arg0);
		void draw(android::graphics::Canvas arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		android::view::View findFocus();
		android::view::View findViewById(jint arg0);
		android::view::View findViewWithTag(jobject arg0);
		void findViewsWithText(java::util::ArrayList arg0, jstring arg1, jint arg2);
		android::view::View focusSearch(jint arg0);
		void forceHasOverlappingRendering(jboolean arg0);
		void forceLayout();
		jstring getAccessibilityClassName();
		jint getAccessibilityLiveRegion();
		android::view::accessibility::AccessibilityNodeProvider getAccessibilityNodeProvider();
		jstring getAccessibilityPaneTitle();
		jint getAccessibilityTraversalAfter();
		jint getAccessibilityTraversalBefore();
		jfloat getAlpha();
		android::view::animation::Animation getAnimation();
		__JniBaseClass getApplicationWindowToken();
		jarray getAutofillHints();
		android::view::autofill::AutofillId getAutofillId();
		jint getAutofillType();
		android::view::autofill::AutofillValue getAutofillValue();
		android::graphics::drawable::Drawable getBackground();
		android::content::res::ColorStateList getBackgroundTintList();
		android::graphics::PorterDuff_Mode getBackgroundTintMode();
		jint getBaseline();
		jint getBottom();
		jfloat getCameraDistance();
		android::graphics::Rect getClipBounds();
		jboolean getClipBounds(android::graphics::Rect arg0);
		jboolean getClipToOutline();
		jstring getContentDescription();
		android::content::Context getContext();
		jboolean getDefaultFocusHighlightEnabled();
		android::view::Display getDisplay();
		jintArray getDrawableState();
		android::graphics::Bitmap getDrawingCache();
		android::graphics::Bitmap getDrawingCache(jboolean arg0);
		jint getDrawingCacheBackgroundColor();
		jint getDrawingCacheQuality();
		void getDrawingRect(android::graphics::Rect arg0);
		jlong getDrawingTime();
		jfloat getElevation();
		jboolean getFilterTouchesWhenObscured();
		jboolean getFitsSystemWindows();
		jint getFocusable();
		java::util::ArrayList getFocusables(jint arg0);
		void getFocusedRect(android::graphics::Rect arg0);
		android::graphics::drawable::Drawable getForeground();
		jint getForegroundGravity();
		android::content::res::ColorStateList getForegroundTintList();
		android::graphics::PorterDuff_Mode getForegroundTintMode();
		jboolean getGlobalVisibleRect(android::graphics::Rect arg0);
		jboolean getGlobalVisibleRect(android::graphics::Rect arg0, android::graphics::Point arg1);
		android::os::Handler getHandler();
		jboolean getHasOverlappingRendering();
		jint getHeight();
		void getHitRect(android::graphics::Rect arg0);
		jint getHorizontalFadingEdgeLength();
		jint getId();
		jint getImportantForAccessibility();
		jint getImportantForAutofill();
		jboolean getKeepScreenOn();
		android::view::KeyEvent_DispatcherState getKeyDispatcherState();
		jint getLabelFor();
		jint getLayerType();
		jint getLayoutDirection();
		android::view::ViewGroup_LayoutParams getLayoutParams();
		jint getLeft();
		jboolean getLocalVisibleRect(android::graphics::Rect arg0);
		void getLocationInWindow(jintArray arg0);
		void getLocationOnScreen(jintArray arg0);
		android::graphics::Matrix getMatrix();
		jint getMeasuredHeight();
		jint getMeasuredHeightAndState();
		jint getMeasuredState();
		jint getMeasuredWidth();
		jint getMeasuredWidthAndState();
		jint getMinimumHeight();
		jint getMinimumWidth();
		jint getNextClusterForwardId();
		jint getNextFocusDownId();
		jint getNextFocusForwardId();
		jint getNextFocusLeftId();
		jint getNextFocusRightId();
		jint getNextFocusUpId();
		__JniBaseClass getOnFocusChangeListener();
		jint getOutlineAmbientShadowColor();
		android::view::ViewOutlineProvider getOutlineProvider();
		jint getOutlineSpotShadowColor();
		jint getOverScrollMode();
		android::view::ViewOverlay getOverlay();
		jint getPaddingBottom();
		jint getPaddingEnd();
		jint getPaddingLeft();
		jint getPaddingRight();
		jint getPaddingStart();
		jint getPaddingTop();
		__JniBaseClass getParent();
		__JniBaseClass getParentForAccessibility();
		jfloat getPivotX();
		jfloat getPivotY();
		android::view::PointerIcon getPointerIcon();
		android::content::res::Resources getResources();
		jboolean getRevealOnFocusHint();
		jint getRight();
		android::view::View getRootView();
		android::view::WindowInsets getRootWindowInsets();
		jfloat getRotation();
		jfloat getRotationX();
		jfloat getRotationY();
		jfloat getScaleX();
		jfloat getScaleY();
		jint getScrollBarDefaultDelayBeforeFade();
		jint getScrollBarFadeDuration();
		jint getScrollBarSize();
		jint getScrollBarStyle();
		jint getScrollIndicators();
		jint getScrollX();
		jint getScrollY();
		jint getSolidColor();
		android::animation::StateListAnimator getStateListAnimator();
		jint getSystemUiVisibility();
		jobject getTag();
		jobject getTag(jint arg0);
		jint getTextAlignment();
		jint getTextDirection();
		jstring getTooltipText();
		jint getTop();
		android::view::TouchDelegate getTouchDelegate();
		java::util::ArrayList getTouchables();
		jstring getTransitionName();
		jfloat getTranslationX();
		jfloat getTranslationY();
		jfloat getTranslationZ();
		jint getVerticalFadingEdgeLength();
		jint getVerticalScrollbarPosition();
		jint getVerticalScrollbarWidth();
		android::view::ViewTreeObserver getViewTreeObserver();
		jint getVisibility();
		jint getWidth();
		android::view::WindowId getWindowId();
		jint getWindowSystemUiVisibility();
		__JniBaseClass getWindowToken();
		jint getWindowVisibility();
		void getWindowVisibleDisplayFrame(android::graphics::Rect arg0);
		jfloat getX();
		jfloat getY();
		jfloat getZ();
		jboolean hasExplicitFocusable();
		jboolean hasFocus();
		jboolean hasFocusable();
		jboolean hasNestedScrollingParent();
		jboolean hasOnClickListeners();
		jboolean hasOverlappingRendering();
		jboolean hasPointerCapture();
		jboolean hasTransientState();
		jboolean hasWindowFocus();
		void invalidate();
		void invalidate(android::graphics::Rect arg0);
		void invalidate(jint arg0, jint arg1, jint arg2, jint arg3);
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		void invalidateOutline();
		jboolean isAccessibilityFocused();
		jboolean isAccessibilityHeading();
		jboolean isActivated();
		jboolean isAttachedToWindow();
		jboolean isClickable();
		jboolean isContextClickable();
		jboolean isDirty();
		jboolean isDrawingCacheEnabled();
		jboolean isDuplicateParentStateEnabled();
		jboolean isEnabled();
		jboolean isFocusable();
		jboolean isFocusableInTouchMode();
		jboolean isFocused();
		jboolean isFocusedByDefault();
		jboolean isHapticFeedbackEnabled();
		jboolean isHardwareAccelerated();
		jboolean isHorizontalFadingEdgeEnabled();
		jboolean isHorizontalScrollBarEnabled();
		jboolean isHovered();
		jboolean isImportantForAccessibility();
		jboolean isImportantForAutofill();
		jboolean isInEditMode();
		jboolean isInLayout();
		jboolean isInTouchMode();
		jboolean isKeyboardNavigationCluster();
		jboolean isLaidOut();
		jboolean isLayoutDirectionResolved();
		jboolean isLayoutRequested();
		jboolean isLongClickable();
		jboolean isNestedScrollingEnabled();
		jboolean isOpaque();
		jboolean isPaddingRelative();
		jboolean isPivotSet();
		jboolean isPressed();
		jboolean isSaveEnabled();
		jboolean isSaveFromParentEnabled();
		jboolean isScreenReaderFocusable();
		jboolean isScrollContainer();
		jboolean isScrollbarFadingEnabled();
		jboolean isSelected();
		jboolean isShown();
		jboolean isSoundEffectsEnabled();
		jboolean isTemporarilyDetached();
		jboolean isTextAlignmentResolved();
		jboolean isTextDirectionResolved();
		jboolean isVerticalFadingEdgeEnabled();
		jboolean isVerticalScrollBarEnabled();
		jboolean isVisibleToUserForAutofill(jint arg0);
		void jumpDrawablesToCurrentState();
		android::view::View keyboardNavigationClusterSearch(android::view::View arg0, jint arg1);
		void layout(jint arg0, jint arg1, jint arg2, jint arg3);
		void measure(jint arg0, jint arg1);
		void offsetLeftAndRight(jint arg0);
		void offsetTopAndBottom(jint arg0);
		android::view::WindowInsets onApplyWindowInsets(android::view::WindowInsets arg0);
		void onCancelPendingInputEvents();
		jboolean onCapturedPointerEvent(android::view::MotionEvent arg0);
		jboolean onCheckIsTextEditor();
		__JniBaseClass onCreateInputConnection(android::view::inputmethod::EditorInfo arg0);
		jboolean onDragEvent(android::view::DragEvent arg0);
		void onDrawForeground(android::graphics::Canvas arg0);
		jboolean onFilterTouchEventForSecurity(android::view::MotionEvent arg0);
		void onFinishTemporaryDetach();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		void onHoverChanged(jboolean arg0);
		jboolean onHoverEvent(android::view::MotionEvent arg0);
		void onInitializeAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
		void onInitializeAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void onPointerCaptureChange(jboolean arg0);
		void onPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
		void onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		void onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1);
		void onProvideStructure(android::view::ViewStructure arg0);
		void onProvideVirtualStructure(android::view::ViewStructure arg0);
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
		void onRtlPropertiesChanged(jint arg0);
		void onScreenStateChanged(jint arg0);
		void onStartTemporaryDetach();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void onVisibilityAggregated(jboolean arg0);
		void onWindowFocusChanged(jboolean arg0);
		void onWindowSystemUiVisibilityChanged(jint arg0);
		jboolean performAccessibilityAction(jint arg0, android::os::Bundle arg1);
		jboolean performClick();
		jboolean performContextClick();
		jboolean performContextClick(jfloat arg0, jfloat arg1);
		jboolean performHapticFeedback(jint arg0);
		jboolean performHapticFeedback(jint arg0, jint arg1);
		jboolean performLongClick();
		jboolean performLongClick(jfloat arg0, jfloat arg1);
		void playSoundEffect(jint arg0);
		jboolean post(__JniBaseClass arg0);
		jboolean postDelayed(__JniBaseClass arg0, jlong arg1);
		void postInvalidate();
		void postInvalidate(jint arg0, jint arg1, jint arg2, jint arg3);
		void postInvalidateDelayed(jlong arg0);
		void postInvalidateDelayed(jlong arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void postInvalidateOnAnimation();
		void postInvalidateOnAnimation(jint arg0, jint arg1, jint arg2, jint arg3);
		void postOnAnimation(__JniBaseClass arg0);
		void postOnAnimationDelayed(__JniBaseClass arg0, jlong arg1);
		void refreshDrawableState();
		void releasePointerCapture();
		jboolean removeCallbacks(__JniBaseClass arg0);
		void removeOnAttachStateChangeListener(__JniBaseClass arg0);
		void removeOnLayoutChangeListener(__JniBaseClass arg0);
		void removeOnUnhandledKeyEventListener(__JniBaseClass arg0);
		void requestApplyInsets();
		void requestFitSystemWindows();
		jboolean requestFocus();
		jboolean requestFocus(jint arg0);
		jboolean requestFocus(jint arg0, android::graphics::Rect arg1);
		jboolean requestFocusFromTouch();
		void requestLayout();
		void requestPointerCapture();
		jboolean requestRectangleOnScreen(android::graphics::Rect arg0);
		jboolean requestRectangleOnScreen(android::graphics::Rect arg0, jboolean arg1);
		void requestUnbufferedDispatch(android::view::MotionEvent arg0);
		android::view::View requireViewById(jint arg0);
		void resetPivot();
		jboolean restoreDefaultFocus();
		void restoreHierarchyState(android::util::SparseArray arg0);
		void saveHierarchyState(android::util::SparseArray arg0);
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1, jlong arg2);
		void scrollBy(jint arg0, jint arg1);
		void scrollTo(jint arg0, jint arg1);
		void sendAccessibilityEvent(jint arg0);
		void sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0);
		void setAccessibilityDelegate(android::view::View_AccessibilityDelegate arg0);
		void setAccessibilityHeading(jboolean arg0);
		void setAccessibilityLiveRegion(jint arg0);
		void setAccessibilityPaneTitle(jstring arg0);
		void setAccessibilityTraversalAfter(jint arg0);
		void setAccessibilityTraversalBefore(jint arg0);
		void setActivated(jboolean arg0);
		void setAlpha(jfloat arg0);
		void setAnimation(android::view::animation::Animation arg0);
		void setAutofillHints(jarray arg0);
		void setAutofillId(android::view::autofill::AutofillId arg0);
		void setBackground(android::graphics::drawable::Drawable arg0);
		void setBackgroundColor(jint arg0);
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setBackgroundResource(jint arg0);
		void setBackgroundTintList(android::content::res::ColorStateList arg0);
		void setBackgroundTintMode(android::graphics::PorterDuff_Mode arg0);
		void setBottom(jint arg0);
		void setCameraDistance(jfloat arg0);
		void setClickable(jboolean arg0);
		void setClipBounds(android::graphics::Rect arg0);
		void setClipToOutline(jboolean arg0);
		void setContentDescription(jstring arg0);
		void setContextClickable(jboolean arg0);
		void setDefaultFocusHighlightEnabled(jboolean arg0);
		void setDrawingCacheBackgroundColor(jint arg0);
		void setDrawingCacheEnabled(jboolean arg0);
		void setDrawingCacheQuality(jint arg0);
		void setDuplicateParentStateEnabled(jboolean arg0);
		void setElevation(jfloat arg0);
		void setEnabled(jboolean arg0);
		void setFadingEdgeLength(jint arg0);
		void setFilterTouchesWhenObscured(jboolean arg0);
		void setFitsSystemWindows(jboolean arg0);
		void setFocusable(jboolean arg0);
		void setFocusable(jint arg0);
		void setFocusableInTouchMode(jboolean arg0);
		void setFocusedByDefault(jboolean arg0);
		void setForeground(android::graphics::drawable::Drawable arg0);
		void setForegroundGravity(jint arg0);
		void setForegroundTintList(android::content::res::ColorStateList arg0);
		void setForegroundTintMode(android::graphics::PorterDuff_Mode arg0);
		void setHapticFeedbackEnabled(jboolean arg0);
		void setHasTransientState(jboolean arg0);
		void setHorizontalFadingEdgeEnabled(jboolean arg0);
		void setHorizontalScrollBarEnabled(jboolean arg0);
		void setHovered(jboolean arg0);
		void setId(jint arg0);
		void setImportantForAccessibility(jint arg0);
		void setImportantForAutofill(jint arg0);
		void setKeepScreenOn(jboolean arg0);
		void setKeyboardNavigationCluster(jboolean arg0);
		void setLabelFor(jint arg0);
		void setLayerPaint(android::graphics::Paint arg0);
		void setLayerType(jint arg0, android::graphics::Paint arg1);
		void setLayoutDirection(jint arg0);
		void setLayoutParams(android::view::ViewGroup_LayoutParams arg0);
		void setLeft(jint arg0);
		void setLongClickable(jboolean arg0);
		void setMinimumHeight(jint arg0);
		void setMinimumWidth(jint arg0);
		void setNestedScrollingEnabled(jboolean arg0);
		void setNextClusterForwardId(jint arg0);
		void setNextFocusDownId(jint arg0);
		void setNextFocusForwardId(jint arg0);
		void setNextFocusLeftId(jint arg0);
		void setNextFocusRightId(jint arg0);
		void setNextFocusUpId(jint arg0);
		void setOnApplyWindowInsetsListener(__JniBaseClass arg0);
		void setOnCapturedPointerListener(__JniBaseClass arg0);
		void setOnClickListener(__JniBaseClass arg0);
		void setOnContextClickListener(__JniBaseClass arg0);
		void setOnCreateContextMenuListener(__JniBaseClass arg0);
		void setOnDragListener(__JniBaseClass arg0);
		void setOnFocusChangeListener(__JniBaseClass arg0);
		void setOnGenericMotionListener(__JniBaseClass arg0);
		void setOnHoverListener(__JniBaseClass arg0);
		void setOnKeyListener(__JniBaseClass arg0);
		void setOnLongClickListener(__JniBaseClass arg0);
		void setOnScrollChangeListener(__JniBaseClass arg0);
		void setOnSystemUiVisibilityChangeListener(__JniBaseClass arg0);
		void setOnTouchListener(__JniBaseClass arg0);
		void setOutlineAmbientShadowColor(jint arg0);
		void setOutlineProvider(android::view::ViewOutlineProvider arg0);
		void setOutlineSpotShadowColor(jint arg0);
		void setOverScrollMode(jint arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPivotX(jfloat arg0);
		void setPivotY(jfloat arg0);
		void setPointerIcon(android::view::PointerIcon arg0);
		void setPressed(jboolean arg0);
		void setRevealOnFocusHint(jboolean arg0);
		void setRight(jint arg0);
		void setRotation(jfloat arg0);
		void setRotationX(jfloat arg0);
		void setRotationY(jfloat arg0);
		void setSaveEnabled(jboolean arg0);
		void setSaveFromParentEnabled(jboolean arg0);
		void setScaleX(jfloat arg0);
		void setScaleY(jfloat arg0);
		void setScreenReaderFocusable(jboolean arg0);
		void setScrollBarDefaultDelayBeforeFade(jint arg0);
		void setScrollBarFadeDuration(jint arg0);
		void setScrollBarSize(jint arg0);
		void setScrollBarStyle(jint arg0);
		void setScrollContainer(jboolean arg0);
		void setScrollIndicators(jint arg0);
		void setScrollIndicators(jint arg0, jint arg1);
		void setScrollX(jint arg0);
		void setScrollY(jint arg0);
		void setScrollbarFadingEnabled(jboolean arg0);
		void setSelected(jboolean arg0);
		void setSoundEffectsEnabled(jboolean arg0);
		void setStateListAnimator(android::animation::StateListAnimator arg0);
		void setSystemUiVisibility(jint arg0);
		void setTag(jobject arg0);
		void setTag(jint arg0, jobject arg1);
		void setTextAlignment(jint arg0);
		void setTextDirection(jint arg0);
		void setTooltipText(jstring arg0);
		void setTop(jint arg0);
		void setTouchDelegate(android::view::TouchDelegate arg0);
		void setTransitionName(jstring arg0);
		void setTranslationX(jfloat arg0);
		void setTranslationY(jfloat arg0);
		void setTranslationZ(jfloat arg0);
		void setVerticalFadingEdgeEnabled(jboolean arg0);
		void setVerticalScrollBarEnabled(jboolean arg0);
		void setVerticalScrollbarPosition(jint arg0);
		void setVisibility(jint arg0);
		void setWillNotCacheDrawing(jboolean arg0);
		void setWillNotDraw(jboolean arg0);
		void setX(jfloat arg0);
		void setY(jfloat arg0);
		void setZ(jfloat arg0);
		jboolean showContextMenu();
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
		android::view::ActionMode startActionMode(__JniBaseClass arg0);
		android::view::ActionMode startActionMode(__JniBaseClass arg0, jint arg1);
		void startAnimation(android::view::animation::Animation arg0);
		jboolean startDrag(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, jobject arg2, jint arg3);
		jboolean startDragAndDrop(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, jobject arg2, jint arg3);
		jboolean startNestedScroll(jint arg0);
		void stopNestedScroll();
		jstring toString();
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0);
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1);
		void updateDragShadow(android::view::View_DragShadowBuilder arg0);
		jboolean willNotCacheDrawing();
		jboolean willNotDraw();
	};
} // namespace android::view


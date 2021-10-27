#pragma once

#ifndef ANDROID_VIEW_VIEW
#define ANDROID_VIEW_VIEW

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::animation
{
	class StateListAnimator;
}
namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::util
{
	class Property;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::view
{
	class ActionMode;
}
namespace __jni_impl::android::view
{
	class Display;
}
namespace __jni_impl::android::view
{
	class DragEvent;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class KeyEvent_DispatcherState;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}
namespace __jni_impl::android::view
{
	class TouchDelegate;
}
namespace __jni_impl::android::view
{
	class View_AccessibilityDelegate;
}
namespace __jni_impl::android::view
{
	class View_DragShadowBuilder;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view
{
	class ViewOutlineProvider;
}
namespace __jni_impl::android::view
{
	class ViewOverlay;
}
namespace __jni_impl::android::view
{
	class ViewPropertyAnimator;
}
namespace __jni_impl::android::view
{
	class ViewStructure;
}
namespace __jni_impl::android::view
{
	class ViewTreeObserver;
}
namespace __jni_impl::android::view
{
	class WindowId;
}
namespace __jni_impl::android::view
{
	class WindowInsets;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeProvider;
}
namespace __jni_impl::android::view::animation
{
	class Animation;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureSession;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::view
{
	class View : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACCESSIBILITY_LIVE_REGION_ASSERTIVE();
		static jint ACCESSIBILITY_LIVE_REGION_NONE();
		static jint ACCESSIBILITY_LIVE_REGION_POLITE();
		static QAndroidJniObject ALPHA();
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
		static QAndroidJniObject ROTATION();
		static QAndroidJniObject ROTATION_X();
		static QAndroidJniObject ROTATION_Y();
		static QAndroidJniObject SCALE_X();
		static QAndroidJniObject SCALE_Y();
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
		static QAndroidJniObject TRANSLATION_X();
		static QAndroidJniObject TRANSLATION_Y();
		static QAndroidJniObject TRANSLATION_Z();
		static jint VISIBLE();
		static QAndroidJniObject X();
		static QAndroidJniObject Y();
		static QAndroidJniObject Z();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		static jint combineMeasuredStates(jint arg0, jint arg1);
		static jint generateViewId();
		static jint getDefaultSize(jint arg0, jint arg1);
		static QAndroidJniObject inflate(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::view::ViewGroup arg2);
		static jint resolveSize(jint arg0, jint arg1);
		static jint resolveSizeAndState(jint arg0, jint arg1, jint arg2);
		void addChildrenForAccessibility(__jni_impl::java::util::ArrayList arg0);
		void addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		void addFocusables(__jni_impl::java::util::ArrayList arg0, jint arg1);
		void addFocusables(__jni_impl::java::util::ArrayList arg0, jint arg1, jint arg2);
		void addKeyboardNavigationClusters(__jni_impl::__JniBaseClass arg0, jint arg1);
		void addOnAttachStateChangeListener(__jni_impl::__JniBaseClass arg0);
		void addOnLayoutChangeListener(__jni_impl::__JniBaseClass arg0);
		void addOnUnhandledKeyEventListener(__jni_impl::__JniBaseClass arg0);
		void addTouchables(__jni_impl::java::util::ArrayList arg0);
		QAndroidJniObject animate();
		void announceForAccessibility(jstring arg0);
		void announceForAccessibility(const QString &arg0);
		void autofill(__jni_impl::android::util::SparseArray arg0);
		void autofill(__jni_impl::android::view::autofill::AutofillValue arg0);
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
		jboolean checkInputConnectionProxy(__jni_impl::android::view::View arg0);
		void clearAnimation();
		void clearFocus();
		void computeScroll();
		QAndroidJniObject computeSystemWindowInsets(__jni_impl::android::view::WindowInsets arg0, __jni_impl::android::graphics::Rect arg1);
		QAndroidJniObject createAccessibilityNodeInfo();
		void createContextMenu(__jni_impl::__JniBaseClass arg0);
		void destroyDrawingCache();
		QAndroidJniObject dispatchApplyWindowInsets(__jni_impl::android::view::WindowInsets arg0);
		jboolean dispatchCapturedPointerEvent(__jni_impl::android::view::MotionEvent arg0);
		void dispatchConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void dispatchDisplayHint(jint arg0);
		jboolean dispatchDragEvent(__jni_impl::android::view::DragEvent arg0);
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1);
		void dispatchFinishTemporaryDetach();
		jboolean dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchKeyEventPreIme(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchNestedFling(jfloat arg0, jfloat arg1, jboolean arg2);
		jboolean dispatchNestedPreFling(jfloat arg0, jfloat arg1);
		jboolean dispatchNestedPrePerformAccessibilityAction(jint arg0, __jni_impl::android::os::Bundle arg1);
		jboolean dispatchNestedPreScroll(jint arg0, jint arg1, jintArray arg2, jintArray arg3);
		jboolean dispatchNestedScroll(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		void dispatchPointerCaptureChanged(jboolean arg0);
		jboolean dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		void dispatchProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		void dispatchProvideStructure(__jni_impl::android::view::ViewStructure arg0);
		void dispatchStartTemporaryDetach();
		void dispatchSystemUiVisibilityChanged(jint arg0);
		jboolean dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchUnhandledMove(__jni_impl::android::view::View arg0, jint arg1);
		void dispatchWindowFocusChanged(jboolean arg0);
		void dispatchWindowSystemUiVisiblityChanged(jint arg0);
		void dispatchWindowVisibilityChanged(jint arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		QAndroidJniObject findFocus();
		QAndroidJniObject findViewById(jint arg0);
		QAndroidJniObject findViewWithTag(jobject arg0);
		void findViewsWithText(__jni_impl::java::util::ArrayList arg0, jstring arg1, jint arg2);
		void findViewsWithText(__jni_impl::java::util::ArrayList arg0, const QString &arg1, jint arg2);
		QAndroidJniObject focusSearch(jint arg0);
		void forceHasOverlappingRendering(jboolean arg0);
		void forceLayout();
		jstring getAccessibilityClassName();
		QAndroidJniObject getAccessibilityDelegate();
		jint getAccessibilityLiveRegion();
		QAndroidJniObject getAccessibilityNodeProvider();
		jstring getAccessibilityPaneTitle();
		jint getAccessibilityTraversalAfter();
		jint getAccessibilityTraversalBefore();
		jfloat getAlpha();
		QAndroidJniObject getAnimation();
		QAndroidJniObject getAnimationMatrix();
		QAndroidJniObject getApplicationWindowToken();
		jintArray getAttributeResolutionStack(jint arg0);
		QAndroidJniObject getAttributeSourceResourceMap();
		jarray getAutofillHints();
		QAndroidJniObject getAutofillId();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		QAndroidJniObject getBackground();
		QAndroidJniObject getBackgroundTintBlendMode();
		QAndroidJniObject getBackgroundTintList();
		QAndroidJniObject getBackgroundTintMode();
		jint getBaseline();
		jint getBottom();
		jfloat getCameraDistance();
		QAndroidJniObject getClipBounds();
		jboolean getClipBounds(__jni_impl::android::graphics::Rect arg0);
		jboolean getClipToOutline();
		QAndroidJniObject getContentCaptureSession();
		jstring getContentDescription();
		QAndroidJniObject getContext();
		jboolean getDefaultFocusHighlightEnabled();
		QAndroidJniObject getDisplay();
		jintArray getDrawableState();
		QAndroidJniObject getDrawingCache();
		QAndroidJniObject getDrawingCache(jboolean arg0);
		jint getDrawingCacheBackgroundColor();
		jint getDrawingCacheQuality();
		void getDrawingRect(__jni_impl::android::graphics::Rect arg0);
		jlong getDrawingTime();
		jfloat getElevation();
		jint getExplicitStyle();
		jboolean getFilterTouchesWhenObscured();
		jboolean getFitsSystemWindows();
		jint getFocusable();
		QAndroidJniObject getFocusables(jint arg0);
		void getFocusedRect(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getForeground();
		jint getForegroundGravity();
		QAndroidJniObject getForegroundTintBlendMode();
		QAndroidJniObject getForegroundTintList();
		QAndroidJniObject getForegroundTintMode();
		jboolean getGlobalVisibleRect(__jni_impl::android::graphics::Rect arg0);
		jboolean getGlobalVisibleRect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Point arg1);
		QAndroidJniObject getHandler();
		jboolean getHasOverlappingRendering();
		jint getHeight();
		void getHitRect(__jni_impl::android::graphics::Rect arg0);
		jint getHorizontalFadingEdgeLength();
		QAndroidJniObject getHorizontalScrollbarThumbDrawable();
		QAndroidJniObject getHorizontalScrollbarTrackDrawable();
		jint getId();
		jint getImportantForAccessibility();
		jint getImportantForAutofill();
		jboolean getKeepScreenOn();
		QAndroidJniObject getKeyDispatcherState();
		jint getLabelFor();
		jint getLayerType();
		jint getLayoutDirection();
		QAndroidJniObject getLayoutParams();
		jint getLeft();
		jboolean getLocalVisibleRect(__jni_impl::android::graphics::Rect arg0);
		void getLocationInSurface(jintArray arg0);
		void getLocationInWindow(jintArray arg0);
		void getLocationOnScreen(jintArray arg0);
		QAndroidJniObject getMatrix();
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
		QAndroidJniObject getOnFocusChangeListener();
		jint getOutlineAmbientShadowColor();
		QAndroidJniObject getOutlineProvider();
		jint getOutlineSpotShadowColor();
		jint getOverScrollMode();
		QAndroidJniObject getOverlay();
		jint getPaddingBottom();
		jint getPaddingEnd();
		jint getPaddingLeft();
		jint getPaddingRight();
		jint getPaddingStart();
		jint getPaddingTop();
		QAndroidJniObject getParent();
		QAndroidJniObject getParentForAccessibility();
		jfloat getPivotX();
		jfloat getPivotY();
		QAndroidJniObject getPointerIcon();
		QAndroidJniObject getResources();
		jboolean getRevealOnFocusHint();
		jint getRight();
		QAndroidJniObject getRootView();
		QAndroidJniObject getRootWindowInsets();
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
		jint getSourceLayoutResId();
		QAndroidJniObject getStateListAnimator();
		QAndroidJniObject getSystemGestureExclusionRects();
		jint getSystemUiVisibility();
		jobject getTag();
		jobject getTag(jint arg0);
		jint getTextAlignment();
		jint getTextDirection();
		jstring getTooltipText();
		jint getTop();
		QAndroidJniObject getTouchDelegate();
		QAndroidJniObject getTouchables();
		jfloat getTransitionAlpha();
		jstring getTransitionName();
		jfloat getTranslationX();
		jfloat getTranslationY();
		jfloat getTranslationZ();
		jlong getUniqueDrawingId();
		jint getVerticalFadingEdgeLength();
		jint getVerticalScrollbarPosition();
		QAndroidJniObject getVerticalScrollbarThumbDrawable();
		QAndroidJniObject getVerticalScrollbarTrackDrawable();
		jint getVerticalScrollbarWidth();
		QAndroidJniObject getViewTreeObserver();
		jint getVisibility();
		jint getWidth();
		QAndroidJniObject getWindowId();
		jint getWindowSystemUiVisibility();
		QAndroidJniObject getWindowToken();
		jint getWindowVisibility();
		void getWindowVisibleDisplayFrame(__jni_impl::android::graphics::Rect arg0);
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
		void invalidate(__jni_impl::android::graphics::Rect arg0);
		void invalidate(jint arg0, jint arg1, jint arg2, jint arg3);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
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
		jboolean isForceDarkAllowed();
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
		QAndroidJniObject keyboardNavigationClusterSearch(__jni_impl::android::view::View arg0, jint arg1);
		void layout(jint arg0, jint arg1, jint arg2, jint arg3);
		void measure(jint arg0, jint arg1);
		void offsetLeftAndRight(jint arg0);
		void offsetTopAndBottom(jint arg0);
		QAndroidJniObject onApplyWindowInsets(__jni_impl::android::view::WindowInsets arg0);
		void onCancelPendingInputEvents();
		jboolean onCapturedPointerEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onCheckIsTextEditor();
		QAndroidJniObject onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		jboolean onDragEvent(__jni_impl::android::view::DragEvent arg0);
		void onDrawForeground(__jni_impl::android::graphics::Canvas arg0);
		jboolean onFilterTouchEventForSecurity(__jni_impl::android::view::MotionEvent arg0);
		void onFinishTemporaryDetach();
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onHoverChanged(jboolean arg0);
		jboolean onHoverEvent(__jni_impl::android::view::MotionEvent arg0);
		void onInitializeAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		void onInitializeAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void onPointerCaptureChange(jboolean arg0);
		void onPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		void onProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		void onProvideAutofillVirtualStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		void onProvideStructure(__jni_impl::android::view::ViewStructure arg0);
		void onProvideVirtualStructure(__jni_impl::android::view::ViewStructure arg0);
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		void onRtlPropertiesChanged(jint arg0);
		void onScreenStateChanged(jint arg0);
		void onStartTemporaryDetach();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		void onVisibilityAggregated(jboolean arg0);
		void onWindowFocusChanged(jboolean arg0);
		void onWindowSystemUiVisibilityChanged(jint arg0);
		jboolean performAccessibilityAction(jint arg0, __jni_impl::android::os::Bundle arg1);
		jboolean performClick();
		jboolean performContextClick();
		jboolean performContextClick(jfloat arg0, jfloat arg1);
		jboolean performHapticFeedback(jint arg0);
		jboolean performHapticFeedback(jint arg0, jint arg1);
		jboolean performLongClick();
		jboolean performLongClick(jfloat arg0, jfloat arg1);
		void playSoundEffect(jint arg0);
		jboolean post(__jni_impl::__JniBaseClass arg0);
		jboolean postDelayed(__jni_impl::__JniBaseClass arg0, jlong arg1);
		void postInvalidate();
		void postInvalidate(jint arg0, jint arg1, jint arg2, jint arg3);
		void postInvalidateDelayed(jlong arg0);
		void postInvalidateDelayed(jlong arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void postInvalidateOnAnimation();
		void postInvalidateOnAnimation(jint arg0, jint arg1, jint arg2, jint arg3);
		void postOnAnimation(__jni_impl::__JniBaseClass arg0);
		void postOnAnimationDelayed(__jni_impl::__JniBaseClass arg0, jlong arg1);
		void refreshDrawableState();
		void releasePointerCapture();
		jboolean removeCallbacks(__jni_impl::__JniBaseClass arg0);
		void removeOnAttachStateChangeListener(__jni_impl::__JniBaseClass arg0);
		void removeOnLayoutChangeListener(__jni_impl::__JniBaseClass arg0);
		void removeOnUnhandledKeyEventListener(__jni_impl::__JniBaseClass arg0);
		void requestApplyInsets();
		void requestFitSystemWindows();
		jboolean requestFocus();
		jboolean requestFocus(jint arg0);
		jboolean requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1);
		jboolean requestFocusFromTouch();
		void requestLayout();
		void requestPointerCapture();
		jboolean requestRectangleOnScreen(__jni_impl::android::graphics::Rect arg0);
		jboolean requestRectangleOnScreen(__jni_impl::android::graphics::Rect arg0, jboolean arg1);
		void requestUnbufferedDispatch(__jni_impl::android::view::MotionEvent arg0);
		QAndroidJniObject requireViewById(jint arg0);
		void resetPivot();
		jboolean restoreDefaultFocus();
		void restoreHierarchyState(__jni_impl::android::util::SparseArray arg0);
		void saveAttributeDataForStyleable(__jni_impl::android::content::Context arg0, jintArray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::TypedArray arg3, jint arg4, jint arg5);
		void saveHierarchyState(__jni_impl::android::util::SparseArray arg0);
		void scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2);
		void scrollBy(jint arg0, jint arg1);
		void scrollTo(jint arg0, jint arg1);
		void sendAccessibilityEvent(jint arg0);
		void sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		void setAccessibilityDelegate(__jni_impl::android::view::View_AccessibilityDelegate arg0);
		void setAccessibilityHeading(jboolean arg0);
		void setAccessibilityLiveRegion(jint arg0);
		void setAccessibilityPaneTitle(jstring arg0);
		void setAccessibilityPaneTitle(const QString &arg0);
		void setAccessibilityTraversalAfter(jint arg0);
		void setAccessibilityTraversalBefore(jint arg0);
		void setActivated(jboolean arg0);
		void setAlpha(jfloat arg0);
		void setAnimation(__jni_impl::android::view::animation::Animation arg0);
		void setAnimationMatrix(__jni_impl::android::graphics::Matrix arg0);
		void setAutofillHints(jarray arg0);
		void setAutofillId(__jni_impl::android::view::autofill::AutofillId arg0);
		void setBackground(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setBackgroundColor(jint arg0);
		void setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setBackgroundResource(jint arg0);
		void setBackgroundTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setBackgroundTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setBackgroundTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setBottom(jint arg0);
		void setCameraDistance(jfloat arg0);
		void setClickable(jboolean arg0);
		void setClipBounds(__jni_impl::android::graphics::Rect arg0);
		void setClipToOutline(jboolean arg0);
		void setContentCaptureSession(__jni_impl::android::view::contentcapture::ContentCaptureSession arg0);
		void setContentDescription(jstring arg0);
		void setContentDescription(const QString &arg0);
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
		void setForceDarkAllowed(jboolean arg0);
		void setForeground(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setForegroundGravity(jint arg0);
		void setForegroundTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setForegroundTintList(__jni_impl::android::content::res::ColorStateList arg0);
		void setForegroundTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setHapticFeedbackEnabled(jboolean arg0);
		void setHasTransientState(jboolean arg0);
		void setHorizontalFadingEdgeEnabled(jboolean arg0);
		void setHorizontalScrollBarEnabled(jboolean arg0);
		void setHorizontalScrollbarThumbDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setHorizontalScrollbarTrackDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setHovered(jboolean arg0);
		void setId(jint arg0);
		void setImportantForAccessibility(jint arg0);
		void setImportantForAutofill(jint arg0);
		void setKeepScreenOn(jboolean arg0);
		void setKeyboardNavigationCluster(jboolean arg0);
		void setLabelFor(jint arg0);
		void setLayerPaint(__jni_impl::android::graphics::Paint arg0);
		void setLayerType(jint arg0, __jni_impl::android::graphics::Paint arg1);
		void setLayoutDirection(jint arg0);
		void setLayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void setLeft(jint arg0);
		void setLeftTopRightBottom(jint arg0, jint arg1, jint arg2, jint arg3);
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
		void setOnApplyWindowInsetsListener(__jni_impl::__JniBaseClass arg0);
		void setOnCapturedPointerListener(__jni_impl::__JniBaseClass arg0);
		void setOnClickListener(__jni_impl::__JniBaseClass arg0);
		void setOnContextClickListener(__jni_impl::__JniBaseClass arg0);
		void setOnCreateContextMenuListener(__jni_impl::__JniBaseClass arg0);
		void setOnDragListener(__jni_impl::__JniBaseClass arg0);
		void setOnFocusChangeListener(__jni_impl::__JniBaseClass arg0);
		void setOnGenericMotionListener(__jni_impl::__JniBaseClass arg0);
		void setOnHoverListener(__jni_impl::__JniBaseClass arg0);
		void setOnKeyListener(__jni_impl::__JniBaseClass arg0);
		void setOnLongClickListener(__jni_impl::__JniBaseClass arg0);
		void setOnScrollChangeListener(__jni_impl::__JniBaseClass arg0);
		void setOnSystemUiVisibilityChangeListener(__jni_impl::__JniBaseClass arg0);
		void setOnTouchListener(__jni_impl::__JniBaseClass arg0);
		void setOutlineAmbientShadowColor(jint arg0);
		void setOutlineProvider(__jni_impl::android::view::ViewOutlineProvider arg0);
		void setOutlineSpotShadowColor(jint arg0);
		void setOverScrollMode(jint arg0);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPivotX(jfloat arg0);
		void setPivotY(jfloat arg0);
		void setPointerIcon(__jni_impl::android::view::PointerIcon arg0);
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
		void setStateListAnimator(__jni_impl::android::animation::StateListAnimator arg0);
		void setSystemGestureExclusionRects(__jni_impl::__JniBaseClass arg0);
		void setSystemUiVisibility(jint arg0);
		void setTag(jobject arg0);
		void setTag(jint arg0, jobject arg1);
		void setTextAlignment(jint arg0);
		void setTextDirection(jint arg0);
		void setTooltipText(jstring arg0);
		void setTooltipText(const QString &arg0);
		void setTop(jint arg0);
		void setTouchDelegate(__jni_impl::android::view::TouchDelegate arg0);
		void setTransitionAlpha(jfloat arg0);
		void setTransitionName(jstring arg0);
		void setTransitionName(const QString &arg0);
		void setTransitionVisibility(jint arg0);
		void setTranslationX(jfloat arg0);
		void setTranslationY(jfloat arg0);
		void setTranslationZ(jfloat arg0);
		void setVerticalFadingEdgeEnabled(jboolean arg0);
		void setVerticalScrollBarEnabled(jboolean arg0);
		void setVerticalScrollbarPosition(jint arg0);
		void setVerticalScrollbarThumbDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setVerticalScrollbarTrackDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setVisibility(jint arg0);
		void setWillNotCacheDrawing(jboolean arg0);
		void setWillNotDraw(jboolean arg0);
		void setX(jfloat arg0);
		void setY(jfloat arg0);
		void setZ(jfloat arg0);
		jboolean showContextMenu();
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
		QAndroidJniObject startActionMode(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject startActionMode(__jni_impl::__JniBaseClass arg0, jint arg1);
		void startAnimation(__jni_impl::android::view::animation::Animation arg0);
		jboolean startDrag(__jni_impl::android::content::ClipData arg0, __jni_impl::android::view::View_DragShadowBuilder arg1, jobject arg2, jint arg3);
		jboolean startDragAndDrop(__jni_impl::android::content::ClipData arg0, __jni_impl::android::view::View_DragShadowBuilder arg1, jobject arg2, jint arg3);
		jboolean startNestedScroll(jint arg0);
		void stopNestedScroll();
		jstring toString();
		void transformMatrixToGlobal(__jni_impl::android::graphics::Matrix arg0);
		void transformMatrixToLocal(__jni_impl::android::graphics::Matrix arg0);
		void unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1);
		void updateDragShadow(__jni_impl::android::view::View_DragShadowBuilder arg0);
		jboolean willNotCacheDrawing();
		jboolean willNotDraw();
	};
} // namespace __jni_impl::android::view

#include "../animation/StateListAnimator.hpp"
#include "../content/ClipData.hpp"
#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../content/res/TypedArray.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/Point.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../util/Property.hpp"
#include "../util/SparseArray.hpp"
#include "ActionMode.hpp"
#include "Display.hpp"
#include "DragEvent.hpp"
#include "KeyEvent.hpp"
#include "KeyEvent_DispatcherState.hpp"
#include "MotionEvent.hpp"
#include "PointerIcon.hpp"
#include "TouchDelegate.hpp"
#include "View_AccessibilityDelegate.hpp"
#include "View_DragShadowBuilder.hpp"
#include "ViewGroup.hpp"
#include "ViewGroup_LayoutParams.hpp"
#include "ViewOutlineProvider.hpp"
#include "ViewOverlay.hpp"
#include "ViewPropertyAnimator.hpp"
#include "ViewStructure.hpp"
#include "ViewTreeObserver.hpp"
#include "WindowId.hpp"
#include "WindowInsets.hpp"
#include "accessibility/AccessibilityEvent.hpp"
#include "accessibility/AccessibilityNodeInfo.hpp"
#include "accessibility/AccessibilityNodeProvider.hpp"
#include "animation/Animation.hpp"
#include "autofill/AutofillId.hpp"
#include "autofill/AutofillValue.hpp"
#include "contentcapture/ContentCaptureSession.hpp"
#include "inputmethod/EditorInfo.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint View::ACCESSIBILITY_LIVE_REGION_ASSERTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_ASSERTIVE"
		);
	}
	jint View::ACCESSIBILITY_LIVE_REGION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_NONE"
		);
	}
	jint View::ACCESSIBILITY_LIVE_REGION_POLITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_POLITE"
		);
	}
	QAndroidJniObject View::ALPHA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"ALPHA",
			"Landroid/util/Property;"
		);
	}
	jint View::AUTOFILL_FLAG_INCLUDE_NOT_IMPORTANT_VIEWS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_FLAG_INCLUDE_NOT_IMPORTANT_VIEWS"
		);
	}
	jstring View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_MONTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_YEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_CREDIT_CARD_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_CREDIT_CARD_SECURITY_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_SECURITY_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_EMAIL_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_EMAIL_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_POSTAL_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_POSTAL_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_POSTAL_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_POSTAL_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring View::AUTOFILL_HINT_USERNAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_USERNAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint View::AUTOFILL_TYPE_DATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_DATE"
		);
	}
	jint View::AUTOFILL_TYPE_LIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_LIST"
		);
	}
	jint View::AUTOFILL_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_NONE"
		);
	}
	jint View::AUTOFILL_TYPE_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_TEXT"
		);
	}
	jint View::AUTOFILL_TYPE_TOGGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_TOGGLE"
		);
	}
	jint View::DRAG_FLAG_GLOBAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL"
		);
	}
	jint View::DRAG_FLAG_GLOBAL_PERSISTABLE_URI_PERMISSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_PERSISTABLE_URI_PERMISSION"
		);
	}
	jint View::DRAG_FLAG_GLOBAL_PREFIX_URI_PERMISSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_PREFIX_URI_PERMISSION"
		);
	}
	jint View::DRAG_FLAG_GLOBAL_URI_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_URI_READ"
		);
	}
	jint View::DRAG_FLAG_GLOBAL_URI_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_URI_WRITE"
		);
	}
	jint View::DRAG_FLAG_OPAQUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_OPAQUE"
		);
	}
	jint View::DRAWING_CACHE_QUALITY_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_AUTO"
		);
	}
	jint View::DRAWING_CACHE_QUALITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_HIGH"
		);
	}
	jint View::DRAWING_CACHE_QUALITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_LOW"
		);
	}
	jint View::FIND_VIEWS_WITH_CONTENT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FIND_VIEWS_WITH_CONTENT_DESCRIPTION"
		);
	}
	jint View::FIND_VIEWS_WITH_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FIND_VIEWS_WITH_TEXT"
		);
	}
	jint View::FOCUSABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUSABLE"
		);
	}
	jint View::FOCUSABLES_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUSABLES_ALL"
		);
	}
	jint View::FOCUSABLES_TOUCH_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUSABLES_TOUCH_MODE"
		);
	}
	jint View::FOCUSABLE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUSABLE_AUTO"
		);
	}
	jint View::FOCUS_BACKWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUS_BACKWARD"
		);
	}
	jint View::FOCUS_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUS_DOWN"
		);
	}
	jint View::FOCUS_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUS_FORWARD"
		);
	}
	jint View::FOCUS_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUS_LEFT"
		);
	}
	jint View::FOCUS_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUS_RIGHT"
		);
	}
	jint View::FOCUS_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"FOCUS_UP"
		);
	}
	jint View::GONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"GONE"
		);
	}
	jint View::HAPTIC_FEEDBACK_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"HAPTIC_FEEDBACK_ENABLED"
		);
	}
	jint View::IMPORTANT_FOR_ACCESSIBILITY_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_AUTO"
		);
	}
	jint View::IMPORTANT_FOR_ACCESSIBILITY_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_NO"
		);
	}
	jint View::IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS"
		);
	}
	jint View::IMPORTANT_FOR_ACCESSIBILITY_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_YES"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_AUTO"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_NO"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_NO_EXCLUDE_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_NO_EXCLUDE_DESCENDANTS"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_YES"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_YES_EXCLUDE_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_YES_EXCLUDE_DESCENDANTS"
		);
	}
	jint View::INVISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"INVISIBLE"
		);
	}
	jint View::KEEP_SCREEN_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"KEEP_SCREEN_ON"
		);
	}
	jint View::LAYER_TYPE_HARDWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_HARDWARE"
		);
	}
	jint View::LAYER_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_NONE"
		);
	}
	jint View::LAYER_TYPE_SOFTWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_SOFTWARE"
		);
	}
	jint View::LAYOUT_DIRECTION_INHERIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_INHERIT"
		);
	}
	jint View::LAYOUT_DIRECTION_LOCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_LOCALE"
		);
	}
	jint View::LAYOUT_DIRECTION_LTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_LTR"
		);
	}
	jint View::LAYOUT_DIRECTION_RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_RTL"
		);
	}
	jint View::MEASURED_HEIGHT_STATE_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"MEASURED_HEIGHT_STATE_SHIFT"
		);
	}
	jint View::MEASURED_SIZE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"MEASURED_SIZE_MASK"
		);
	}
	jint View::MEASURED_STATE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"MEASURED_STATE_MASK"
		);
	}
	jint View::MEASURED_STATE_TOO_SMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"MEASURED_STATE_TOO_SMALL"
		);
	}
	jint View::NOT_FOCUSABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"NOT_FOCUSABLE"
		);
	}
	jint View::NO_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"NO_ID"
		);
	}
	jint View::OVER_SCROLL_ALWAYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_ALWAYS"
		);
	}
	jint View::OVER_SCROLL_IF_CONTENT_SCROLLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_IF_CONTENT_SCROLLS"
		);
	}
	jint View::OVER_SCROLL_NEVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_NEVER"
		);
	}
	QAndroidJniObject View::ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"ROTATION",
			"Landroid/util/Property;"
		);
	}
	QAndroidJniObject View::ROTATION_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"ROTATION_X",
			"Landroid/util/Property;"
		);
	}
	QAndroidJniObject View::ROTATION_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"ROTATION_Y",
			"Landroid/util/Property;"
		);
	}
	QAndroidJniObject View::SCALE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"SCALE_X",
			"Landroid/util/Property;"
		);
	}
	QAndroidJniObject View::SCALE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"SCALE_Y",
			"Landroid/util/Property;"
		);
	}
	jint View::SCREEN_STATE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCREEN_STATE_OFF"
		);
	}
	jint View::SCREEN_STATE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCREEN_STATE_ON"
		);
	}
	jint View::SCROLLBARS_INSIDE_INSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_INSIDE_INSET"
		);
	}
	jint View::SCROLLBARS_INSIDE_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_INSIDE_OVERLAY"
		);
	}
	jint View::SCROLLBARS_OUTSIDE_INSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_OUTSIDE_INSET"
		);
	}
	jint View::SCROLLBARS_OUTSIDE_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_OUTSIDE_OVERLAY"
		);
	}
	jint View::SCROLLBAR_POSITION_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_DEFAULT"
		);
	}
	jint View::SCROLLBAR_POSITION_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_LEFT"
		);
	}
	jint View::SCROLLBAR_POSITION_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_RIGHT"
		);
	}
	jint View::SCROLL_AXIS_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_HORIZONTAL"
		);
	}
	jint View::SCROLL_AXIS_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_NONE"
		);
	}
	jint View::SCROLL_AXIS_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_VERTICAL"
		);
	}
	jint View::SCROLL_INDICATOR_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_BOTTOM"
		);
	}
	jint View::SCROLL_INDICATOR_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_END"
		);
	}
	jint View::SCROLL_INDICATOR_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_LEFT"
		);
	}
	jint View::SCROLL_INDICATOR_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_RIGHT"
		);
	}
	jint View::SCROLL_INDICATOR_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_START"
		);
	}
	jint View::SCROLL_INDICATOR_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_TOP"
		);
	}
	jint View::SOUND_EFFECTS_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SOUND_EFFECTS_ENABLED"
		);
	}
	jint View::STATUS_BAR_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"STATUS_BAR_HIDDEN"
		);
	}
	jint View::STATUS_BAR_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"STATUS_BAR_VISIBLE"
		);
	}
	jint View::SYSTEM_UI_FLAG_FULLSCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_FULLSCREEN"
		);
	}
	jint View::SYSTEM_UI_FLAG_HIDE_NAVIGATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_HIDE_NAVIGATION"
		);
	}
	jint View::SYSTEM_UI_FLAG_IMMERSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_IMMERSIVE"
		);
	}
	jint View::SYSTEM_UI_FLAG_IMMERSIVE_STICKY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_IMMERSIVE_STICKY"
		);
	}
	jint View::SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN"
		);
	}
	jint View::SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION"
		);
	}
	jint View::SYSTEM_UI_FLAG_LAYOUT_STABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_STABLE"
		);
	}
	jint View::SYSTEM_UI_FLAG_LIGHT_NAVIGATION_BAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LIGHT_NAVIGATION_BAR"
		);
	}
	jint View::SYSTEM_UI_FLAG_LIGHT_STATUS_BAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LIGHT_STATUS_BAR"
		);
	}
	jint View::SYSTEM_UI_FLAG_LOW_PROFILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LOW_PROFILE"
		);
	}
	jint View::SYSTEM_UI_FLAG_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_VISIBLE"
		);
	}
	jint View::SYSTEM_UI_LAYOUT_FLAGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_LAYOUT_FLAGS"
		);
	}
	jint View::TEXT_ALIGNMENT_CENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_CENTER"
		);
	}
	jint View::TEXT_ALIGNMENT_GRAVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_GRAVITY"
		);
	}
	jint View::TEXT_ALIGNMENT_INHERIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_INHERIT"
		);
	}
	jint View::TEXT_ALIGNMENT_TEXT_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_TEXT_END"
		);
	}
	jint View::TEXT_ALIGNMENT_TEXT_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_TEXT_START"
		);
	}
	jint View::TEXT_ALIGNMENT_VIEW_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_VIEW_END"
		);
	}
	jint View::TEXT_ALIGNMENT_VIEW_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_VIEW_START"
		);
	}
	jint View::TEXT_DIRECTION_ANY_RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_ANY_RTL"
		);
	}
	jint View::TEXT_DIRECTION_FIRST_STRONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG"
		);
	}
	jint View::TEXT_DIRECTION_FIRST_STRONG_LTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG_LTR"
		);
	}
	jint View::TEXT_DIRECTION_FIRST_STRONG_RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG_RTL"
		);
	}
	jint View::TEXT_DIRECTION_INHERIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_INHERIT"
		);
	}
	jint View::TEXT_DIRECTION_LOCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_LOCALE"
		);
	}
	jint View::TEXT_DIRECTION_LTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_LTR"
		);
	}
	jint View::TEXT_DIRECTION_RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_RTL"
		);
	}
	QAndroidJniObject View::TRANSLATION_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"TRANSLATION_X",
			"Landroid/util/Property;"
		);
	}
	QAndroidJniObject View::TRANSLATION_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"TRANSLATION_Y",
			"Landroid/util/Property;"
		);
	}
	QAndroidJniObject View::TRANSLATION_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"TRANSLATION_Z",
			"Landroid/util/Property;"
		);
	}
	jint View::VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View",
			"VISIBLE"
		);
	}
	QAndroidJniObject View::X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"X",
			"Landroid/util/Property;"
		);
	}
	QAndroidJniObject View::Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"Y",
			"Landroid/util/Property;"
		);
	}
	QAndroidJniObject View::Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View",
			"Z",
			"Landroid/util/Property;"
		);
	}
	
	// Constructors
	void View::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.View",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void View::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void View::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void View::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint View::combineMeasuredStates(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.View",
			"combineMeasuredStates",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint View::generateViewId()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.View",
			"generateViewId",
			"()I"
		);
	}
	jint View::getDefaultSize(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.View",
			"getDefaultSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject View::inflate(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.View",
			"inflate",
			"(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint View::resolveSize(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.View",
			"resolveSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint View::resolveSizeAndState(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.View",
			"resolveSizeAndState",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	void View::addChildrenForAccessibility(__jni_impl::java::util::ArrayList arg0)
	{
		__thiz.callMethod<void>(
			"addChildrenForAccessibility",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object()
		);
	}
	void View::addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void View::addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void View::addFocusables(__jni_impl::java::util::ArrayList arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::addFocusables(__jni_impl::java::util::ArrayList arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void View::addKeyboardNavigationClusters(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addKeyboardNavigationClusters",
			"(Ljava/util/Collection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::addOnAttachStateChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnAttachStateChangeListener",
			"(Landroid/view/View$OnAttachStateChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::addOnLayoutChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnLayoutChangeListener",
			"(Landroid/view/View$OnLayoutChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::addOnUnhandledKeyEventListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addOnUnhandledKeyEventListener",
			"(Landroid/view/View$OnUnhandledKeyEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::addTouchables(__jni_impl::java::util::ArrayList arg0)
	{
		__thiz.callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject View::animate()
	{
		return __thiz.callObjectMethod(
			"animate",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	void View::announceForAccessibility(jstring arg0)
	{
		__thiz.callMethod<void>(
			"announceForAccessibility",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void View::announceForAccessibility(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"announceForAccessibility",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void View::autofill(__jni_impl::android::util::SparseArray arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/util/SparseArray;)V",
			arg0.__jniObject().object()
		);
	}
	void View::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	void View::bringToFront()
	{
		__thiz.callMethod<void>(
			"bringToFront",
			"()V"
		);
	}
	void View::buildDrawingCache()
	{
		__thiz.callMethod<void>(
			"buildDrawingCache",
			"()V"
		);
	}
	void View::buildDrawingCache(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"buildDrawingCache",
			"(Z)V",
			arg0
		);
	}
	void View::buildLayer()
	{
		__thiz.callMethod<void>(
			"buildLayer",
			"()V"
		);
	}
	jboolean View::callOnClick()
	{
		return __thiz.callMethod<jboolean>(
			"callOnClick",
			"()Z"
		);
	}
	jboolean View::canResolveLayoutDirection()
	{
		return __thiz.callMethod<jboolean>(
			"canResolveLayoutDirection",
			"()Z"
		);
	}
	jboolean View::canResolveTextAlignment()
	{
		return __thiz.callMethod<jboolean>(
			"canResolveTextAlignment",
			"()Z"
		);
	}
	jboolean View::canResolveTextDirection()
	{
		return __thiz.callMethod<jboolean>(
			"canResolveTextDirection",
			"()Z"
		);
	}
	jboolean View::canScrollHorizontally(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canScrollHorizontally",
			"(I)Z",
			arg0
		);
	}
	jboolean View::canScrollVertically(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canScrollVertically",
			"(I)Z",
			arg0
		);
	}
	void View::cancelDragAndDrop()
	{
		__thiz.callMethod<void>(
			"cancelDragAndDrop",
			"()V"
		);
	}
	void View::cancelLongPress()
	{
		__thiz.callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	void View::cancelPendingInputEvents()
	{
		__thiz.callMethod<void>(
			"cancelPendingInputEvents",
			"()V"
		);
	}
	jboolean View::checkInputConnectionProxy(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"checkInputConnectionProxy",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::clearAnimation()
	{
		__thiz.callMethod<void>(
			"clearAnimation",
			"()V"
		);
	}
	void View::clearFocus()
	{
		__thiz.callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	void View::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	QAndroidJniObject View::computeSystemWindowInsets(__jni_impl::android::view::WindowInsets arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callObjectMethod(
			"computeSystemWindowInsets",
			"(Landroid/view/WindowInsets;Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject View::createAccessibilityNodeInfo()
	{
		return __thiz.callObjectMethod(
			"createAccessibilityNodeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void View::createContextMenu(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"createContextMenu",
			"(Landroid/view/ContextMenu;)V",
			arg0.__jniObject().object()
		);
	}
	void View::destroyDrawingCache()
	{
		__thiz.callMethod<void>(
			"destroyDrawingCache",
			"()V"
		);
	}
	QAndroidJniObject View::dispatchApplyWindowInsets(__jni_impl::android::view::WindowInsets arg0)
	{
		return __thiz.callObjectMethod(
			"dispatchApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.__jniObject().object()
		);
	}
	jboolean View::dispatchCapturedPointerEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::dispatchConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void View::dispatchDisplayHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchDisplayHint",
			"(I)V",
			arg0
		);
	}
	jboolean View::dispatchDragEvent(__jni_impl::android::view::DragEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void View::dispatchFinishTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"dispatchFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean View::dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::dispatchKeyEventPreIme(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEventPreIme",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::dispatchNestedFling(jfloat arg0, jfloat arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchNestedFling",
			"(FFZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean View::dispatchNestedPreFling(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchNestedPreFling",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean View::dispatchNestedPrePerformAccessibilityAction(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchNestedPrePerformAccessibilityAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean View::dispatchNestedPreScroll(jint arg0, jint arg1, jintArray arg2, jintArray arg3)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchNestedPreScroll",
			"(II[I[I)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean View::dispatchNestedScroll(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchNestedScroll",
			"(IIII[I)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void View::dispatchPointerCaptureChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchPointerCaptureChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean View::dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::dispatchProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::dispatchProvideStructure(__jni_impl::android::view::ViewStructure arg0)
	{
		__thiz.callMethod<void>(
			"dispatchProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.__jniObject().object()
		);
	}
	void View::dispatchStartTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"dispatchStartTemporaryDetach",
			"()V"
		);
	}
	void View::dispatchSystemUiVisibilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	jboolean View::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::dispatchUnhandledMove(__jni_impl::android::view::View arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::dispatchWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void View::dispatchWindowSystemUiVisiblityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowSystemUiVisiblityChanged",
			"(I)V",
			arg0
		);
	}
	void View::dispatchWindowVisibilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	void View::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void View::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject View::findFocus()
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject View::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	QAndroidJniObject View::findViewWithTag(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"findViewWithTag",
			"(Ljava/lang/Object;)Landroid/view/View;",
			arg0
		);
	}
	void View::findViewsWithText(__jni_impl::java::util::ArrayList arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void View::findViewsWithText(__jni_impl::java::util::ArrayList arg0, const QString &arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject View::focusSearch(jint arg0)
	{
		return __thiz.callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void View::forceHasOverlappingRendering(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"forceHasOverlappingRendering",
			"(Z)V",
			arg0
		);
	}
	void View::forceLayout()
	{
		__thiz.callMethod<void>(
			"forceLayout",
			"()V"
		);
	}
	jstring View::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject View::getAccessibilityDelegate()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityDelegate",
			"()Landroid/view/View$AccessibilityDelegate;"
		);
	}
	jint View::getAccessibilityLiveRegion()
	{
		return __thiz.callMethod<jint>(
			"getAccessibilityLiveRegion",
			"()I"
		);
	}
	QAndroidJniObject View::getAccessibilityNodeProvider()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	jstring View::getAccessibilityPaneTitle()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityPaneTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint View::getAccessibilityTraversalAfter()
	{
		return __thiz.callMethod<jint>(
			"getAccessibilityTraversalAfter",
			"()I"
		);
	}
	jint View::getAccessibilityTraversalBefore()
	{
		return __thiz.callMethod<jint>(
			"getAccessibilityTraversalBefore",
			"()I"
		);
	}
	jfloat View::getAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	QAndroidJniObject View::getAnimation()
	{
		return __thiz.callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	QAndroidJniObject View::getAnimationMatrix()
	{
		return __thiz.callObjectMethod(
			"getAnimationMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	QAndroidJniObject View::getApplicationWindowToken()
	{
		return __thiz.callObjectMethod(
			"getApplicationWindowToken",
			"()Landroid/os/IBinder;"
		);
	}
	jintArray View::getAttributeResolutionStack(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAttributeResolutionStack",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	QAndroidJniObject View::getAttributeSourceResourceMap()
	{
		return __thiz.callObjectMethod(
			"getAttributeSourceResourceMap",
			"()Ljava/util/Map;"
		);
	}
	jarray View::getAutofillHints()
	{
		return __thiz.callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject View::getAutofillId()
	{
		return __thiz.callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint View::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject View::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	QAndroidJniObject View::getBackground()
	{
		return __thiz.callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject View::getBackgroundTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getBackgroundTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject View::getBackgroundTintList()
	{
		return __thiz.callObjectMethod(
			"getBackgroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject View::getBackgroundTintMode()
	{
		return __thiz.callObjectMethod(
			"getBackgroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint View::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint View::getBottom()
	{
		return __thiz.callMethod<jint>(
			"getBottom",
			"()I"
		);
	}
	jfloat View::getCameraDistance()
	{
		return __thiz.callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	QAndroidJniObject View::getClipBounds()
	{
		return __thiz.callObjectMethod(
			"getClipBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jboolean View::getClipBounds(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getClipBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::getClipToOutline()
	{
		return __thiz.callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	QAndroidJniObject View::getContentCaptureSession()
	{
		return __thiz.callObjectMethod(
			"getContentCaptureSession",
			"()Landroid/view/contentcapture/ContentCaptureSession;"
		);
	}
	jstring View::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject View::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jboolean View::getDefaultFocusHighlightEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getDefaultFocusHighlightEnabled",
			"()Z"
		);
	}
	QAndroidJniObject View::getDisplay()
	{
		return __thiz.callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	jintArray View::getDrawableState()
	{
		return __thiz.callObjectMethod(
			"getDrawableState",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject View::getDrawingCache()
	{
		return __thiz.callObjectMethod(
			"getDrawingCache",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject View::getDrawingCache(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"getDrawingCache",
			"(Z)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	jint View::getDrawingCacheBackgroundColor()
	{
		return __thiz.callMethod<jint>(
			"getDrawingCacheBackgroundColor",
			"()I"
		);
	}
	jint View::getDrawingCacheQuality()
	{
		return __thiz.callMethod<jint>(
			"getDrawingCacheQuality",
			"()I"
		);
	}
	void View::getDrawingRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getDrawingRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jlong View::getDrawingTime()
	{
		return __thiz.callMethod<jlong>(
			"getDrawingTime",
			"()J"
		);
	}
	jfloat View::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint View::getExplicitStyle()
	{
		return __thiz.callMethod<jint>(
			"getExplicitStyle",
			"()I"
		);
	}
	jboolean View::getFilterTouchesWhenObscured()
	{
		return __thiz.callMethod<jboolean>(
			"getFilterTouchesWhenObscured",
			"()Z"
		);
	}
	jboolean View::getFitsSystemWindows()
	{
		return __thiz.callMethod<jboolean>(
			"getFitsSystemWindows",
			"()Z"
		);
	}
	jint View::getFocusable()
	{
		return __thiz.callMethod<jint>(
			"getFocusable",
			"()I"
		);
	}
	QAndroidJniObject View::getFocusables(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getFocusables",
			"(I)Ljava/util/ArrayList;",
			arg0
		);
	}
	void View::getFocusedRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject View::getForeground()
	{
		return __thiz.callObjectMethod(
			"getForeground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint View::getForegroundGravity()
	{
		return __thiz.callMethod<jint>(
			"getForegroundGravity",
			"()I"
		);
	}
	QAndroidJniObject View::getForegroundTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getForegroundTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject View::getForegroundTintList()
	{
		return __thiz.callObjectMethod(
			"getForegroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject View::getForegroundTintMode()
	{
		return __thiz.callObjectMethod(
			"getForegroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jboolean View::getGlobalVisibleRect(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getGlobalVisibleRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::getGlobalVisibleRect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Point arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getGlobalVisibleRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Point;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject View::getHandler()
	{
		return __thiz.callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	jboolean View::getHasOverlappingRendering()
	{
		return __thiz.callMethod<jboolean>(
			"getHasOverlappingRendering",
			"()Z"
		);
	}
	jint View::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	void View::getHitRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getHitRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jint View::getHorizontalFadingEdgeLength()
	{
		return __thiz.callMethod<jint>(
			"getHorizontalFadingEdgeLength",
			"()I"
		);
	}
	QAndroidJniObject View::getHorizontalScrollbarThumbDrawable()
	{
		return __thiz.callObjectMethod(
			"getHorizontalScrollbarThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject View::getHorizontalScrollbarTrackDrawable()
	{
		return __thiz.callObjectMethod(
			"getHorizontalScrollbarTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint View::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint View::getImportantForAccessibility()
	{
		return __thiz.callMethod<jint>(
			"getImportantForAccessibility",
			"()I"
		);
	}
	jint View::getImportantForAutofill()
	{
		return __thiz.callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	jboolean View::getKeepScreenOn()
	{
		return __thiz.callMethod<jboolean>(
			"getKeepScreenOn",
			"()Z"
		);
	}
	QAndroidJniObject View::getKeyDispatcherState()
	{
		return __thiz.callObjectMethod(
			"getKeyDispatcherState",
			"()Landroid/view/KeyEvent$DispatcherState;"
		);
	}
	jint View::getLabelFor()
	{
		return __thiz.callMethod<jint>(
			"getLabelFor",
			"()I"
		);
	}
	jint View::getLayerType()
	{
		return __thiz.callMethod<jint>(
			"getLayerType",
			"()I"
		);
	}
	jint View::getLayoutDirection()
	{
		return __thiz.callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	QAndroidJniObject View::getLayoutParams()
	{
		return __thiz.callObjectMethod(
			"getLayoutParams",
			"()Landroid/view/ViewGroup$LayoutParams;"
		);
	}
	jint View::getLeft()
	{
		return __thiz.callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	jboolean View::getLocalVisibleRect(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getLocalVisibleRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::getLocationInSurface(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"getLocationInSurface",
			"([I)V",
			arg0
		);
	}
	void View::getLocationInWindow(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"getLocationInWindow",
			"([I)V",
			arg0
		);
	}
	void View::getLocationOnScreen(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"getLocationOnScreen",
			"([I)V",
			arg0
		);
	}
	QAndroidJniObject View::getMatrix()
	{
		return __thiz.callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint View::getMeasuredHeight()
	{
		return __thiz.callMethod<jint>(
			"getMeasuredHeight",
			"()I"
		);
	}
	jint View::getMeasuredHeightAndState()
	{
		return __thiz.callMethod<jint>(
			"getMeasuredHeightAndState",
			"()I"
		);
	}
	jint View::getMeasuredState()
	{
		return __thiz.callMethod<jint>(
			"getMeasuredState",
			"()I"
		);
	}
	jint View::getMeasuredWidth()
	{
		return __thiz.callMethod<jint>(
			"getMeasuredWidth",
			"()I"
		);
	}
	jint View::getMeasuredWidthAndState()
	{
		return __thiz.callMethod<jint>(
			"getMeasuredWidthAndState",
			"()I"
		);
	}
	jint View::getMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	jint View::getMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	jint View::getNextClusterForwardId()
	{
		return __thiz.callMethod<jint>(
			"getNextClusterForwardId",
			"()I"
		);
	}
	jint View::getNextFocusDownId()
	{
		return __thiz.callMethod<jint>(
			"getNextFocusDownId",
			"()I"
		);
	}
	jint View::getNextFocusForwardId()
	{
		return __thiz.callMethod<jint>(
			"getNextFocusForwardId",
			"()I"
		);
	}
	jint View::getNextFocusLeftId()
	{
		return __thiz.callMethod<jint>(
			"getNextFocusLeftId",
			"()I"
		);
	}
	jint View::getNextFocusRightId()
	{
		return __thiz.callMethod<jint>(
			"getNextFocusRightId",
			"()I"
		);
	}
	jint View::getNextFocusUpId()
	{
		return __thiz.callMethod<jint>(
			"getNextFocusUpId",
			"()I"
		);
	}
	QAndroidJniObject View::getOnFocusChangeListener()
	{
		return __thiz.callObjectMethod(
			"getOnFocusChangeListener",
			"()Landroid/view/View$OnFocusChangeListener;"
		);
	}
	jint View::getOutlineAmbientShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getOutlineAmbientShadowColor",
			"()I"
		);
	}
	QAndroidJniObject View::getOutlineProvider()
	{
		return __thiz.callObjectMethod(
			"getOutlineProvider",
			"()Landroid/view/ViewOutlineProvider;"
		);
	}
	jint View::getOutlineSpotShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getOutlineSpotShadowColor",
			"()I"
		);
	}
	jint View::getOverScrollMode()
	{
		return __thiz.callMethod<jint>(
			"getOverScrollMode",
			"()I"
		);
	}
	QAndroidJniObject View::getOverlay()
	{
		return __thiz.callObjectMethod(
			"getOverlay",
			"()Landroid/view/ViewOverlay;"
		);
	}
	jint View::getPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getPaddingBottom",
			"()I"
		);
	}
	jint View::getPaddingEnd()
	{
		return __thiz.callMethod<jint>(
			"getPaddingEnd",
			"()I"
		);
	}
	jint View::getPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getPaddingLeft",
			"()I"
		);
	}
	jint View::getPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getPaddingRight",
			"()I"
		);
	}
	jint View::getPaddingStart()
	{
		return __thiz.callMethod<jint>(
			"getPaddingStart",
			"()I"
		);
	}
	jint View::getPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getPaddingTop",
			"()I"
		);
	}
	QAndroidJniObject View::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/view/ViewParent;"
		);
	}
	QAndroidJniObject View::getParentForAccessibility()
	{
		return __thiz.callObjectMethod(
			"getParentForAccessibility",
			"()Landroid/view/ViewParent;"
		);
	}
	jfloat View::getPivotX()
	{
		return __thiz.callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat View::getPivotY()
	{
		return __thiz.callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	QAndroidJniObject View::getPointerIcon()
	{
		return __thiz.callObjectMethod(
			"getPointerIcon",
			"()Landroid/view/PointerIcon;"
		);
	}
	QAndroidJniObject View::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jboolean View::getRevealOnFocusHint()
	{
		return __thiz.callMethod<jboolean>(
			"getRevealOnFocusHint",
			"()Z"
		);
	}
	jint View::getRight()
	{
		return __thiz.callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	QAndroidJniObject View::getRootView()
	{
		return __thiz.callObjectMethod(
			"getRootView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject View::getRootWindowInsets()
	{
		return __thiz.callObjectMethod(
			"getRootWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	jfloat View::getRotation()
	{
		return __thiz.callMethod<jfloat>(
			"getRotation",
			"()F"
		);
	}
	jfloat View::getRotationX()
	{
		return __thiz.callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	jfloat View::getRotationY()
	{
		return __thiz.callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	jfloat View::getScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jfloat View::getScaleY()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	jint View::getScrollBarDefaultDelayBeforeFade()
	{
		return __thiz.callMethod<jint>(
			"getScrollBarDefaultDelayBeforeFade",
			"()I"
		);
	}
	jint View::getScrollBarFadeDuration()
	{
		return __thiz.callMethod<jint>(
			"getScrollBarFadeDuration",
			"()I"
		);
	}
	jint View::getScrollBarSize()
	{
		return __thiz.callMethod<jint>(
			"getScrollBarSize",
			"()I"
		);
	}
	jint View::getScrollBarStyle()
	{
		return __thiz.callMethod<jint>(
			"getScrollBarStyle",
			"()I"
		);
	}
	jint View::getScrollIndicators()
	{
		return __thiz.callMethod<jint>(
			"getScrollIndicators",
			"()I"
		);
	}
	jint View::getScrollX()
	{
		return __thiz.callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint View::getScrollY()
	{
		return __thiz.callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	jint View::getSolidColor()
	{
		return __thiz.callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	jint View::getSourceLayoutResId()
	{
		return __thiz.callMethod<jint>(
			"getSourceLayoutResId",
			"()I"
		);
	}
	QAndroidJniObject View::getStateListAnimator()
	{
		return __thiz.callObjectMethod(
			"getStateListAnimator",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	QAndroidJniObject View::getSystemGestureExclusionRects()
	{
		return __thiz.callObjectMethod(
			"getSystemGestureExclusionRects",
			"()Ljava/util/List;"
		);
	}
	jint View::getSystemUiVisibility()
	{
		return __thiz.callMethod<jint>(
			"getSystemUiVisibility",
			"()I"
		);
	}
	jobject View::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject View::getTag(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTag",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint View::getTextAlignment()
	{
		return __thiz.callMethod<jint>(
			"getTextAlignment",
			"()I"
		);
	}
	jint View::getTextDirection()
	{
		return __thiz.callMethod<jint>(
			"getTextDirection",
			"()I"
		);
	}
	jstring View::getTooltipText()
	{
		return __thiz.callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint View::getTop()
	{
		return __thiz.callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	QAndroidJniObject View::getTouchDelegate()
	{
		return __thiz.callObjectMethod(
			"getTouchDelegate",
			"()Landroid/view/TouchDelegate;"
		);
	}
	QAndroidJniObject View::getTouchables()
	{
		return __thiz.callObjectMethod(
			"getTouchables",
			"()Ljava/util/ArrayList;"
		);
	}
	jfloat View::getTransitionAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getTransitionAlpha",
			"()F"
		);
	}
	jstring View::getTransitionName()
	{
		return __thiz.callObjectMethod(
			"getTransitionName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat View::getTranslationX()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	jfloat View::getTranslationY()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	jfloat View::getTranslationZ()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	jlong View::getUniqueDrawingId()
	{
		return __thiz.callMethod<jlong>(
			"getUniqueDrawingId",
			"()J"
		);
	}
	jint View::getVerticalFadingEdgeLength()
	{
		return __thiz.callMethod<jint>(
			"getVerticalFadingEdgeLength",
			"()I"
		);
	}
	jint View::getVerticalScrollbarPosition()
	{
		return __thiz.callMethod<jint>(
			"getVerticalScrollbarPosition",
			"()I"
		);
	}
	QAndroidJniObject View::getVerticalScrollbarThumbDrawable()
	{
		return __thiz.callObjectMethod(
			"getVerticalScrollbarThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject View::getVerticalScrollbarTrackDrawable()
	{
		return __thiz.callObjectMethod(
			"getVerticalScrollbarTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint View::getVerticalScrollbarWidth()
	{
		return __thiz.callMethod<jint>(
			"getVerticalScrollbarWidth",
			"()I"
		);
	}
	QAndroidJniObject View::getViewTreeObserver()
	{
		return __thiz.callObjectMethod(
			"getViewTreeObserver",
			"()Landroid/view/ViewTreeObserver;"
		);
	}
	jint View::getVisibility()
	{
		return __thiz.callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	jint View::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	QAndroidJniObject View::getWindowId()
	{
		return __thiz.callObjectMethod(
			"getWindowId",
			"()Landroid/view/WindowId;"
		);
	}
	jint View::getWindowSystemUiVisibility()
	{
		return __thiz.callMethod<jint>(
			"getWindowSystemUiVisibility",
			"()I"
		);
	}
	QAndroidJniObject View::getWindowToken()
	{
		return __thiz.callObjectMethod(
			"getWindowToken",
			"()Landroid/os/IBinder;"
		);
	}
	jint View::getWindowVisibility()
	{
		return __thiz.callMethod<jint>(
			"getWindowVisibility",
			"()I"
		);
	}
	void View::getWindowVisibleDisplayFrame(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getWindowVisibleDisplayFrame",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat View::getX()
	{
		return __thiz.callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat View::getY()
	{
		return __thiz.callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jfloat View::getZ()
	{
		return __thiz.callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
	jboolean View::hasExplicitFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"hasExplicitFocusable",
			"()Z"
		);
	}
	jboolean View::hasFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	jboolean View::hasFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocusable",
			"()Z"
		);
	}
	jboolean View::hasNestedScrollingParent()
	{
		return __thiz.callMethod<jboolean>(
			"hasNestedScrollingParent",
			"()Z"
		);
	}
	jboolean View::hasOnClickListeners()
	{
		return __thiz.callMethod<jboolean>(
			"hasOnClickListeners",
			"()Z"
		);
	}
	jboolean View::hasOverlappingRendering()
	{
		return __thiz.callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean View::hasPointerCapture()
	{
		return __thiz.callMethod<jboolean>(
			"hasPointerCapture",
			"()Z"
		);
	}
	jboolean View::hasTransientState()
	{
		return __thiz.callMethod<jboolean>(
			"hasTransientState",
			"()Z"
		);
	}
	jboolean View::hasWindowFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	void View::invalidate()
	{
		__thiz.callMethod<void>(
			"invalidate",
			"()V"
		);
	}
	void View::invalidate(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"invalidate",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void View::invalidate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"invalidate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void View::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::invalidateOutline()
	{
		__thiz.callMethod<void>(
			"invalidateOutline",
			"()V"
		);
	}
	jboolean View::isAccessibilityFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean View::isAccessibilityHeading()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityHeading",
			"()Z"
		);
	}
	jboolean View::isActivated()
	{
		return __thiz.callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	jboolean View::isAttachedToWindow()
	{
		return __thiz.callMethod<jboolean>(
			"isAttachedToWindow",
			"()Z"
		);
	}
	jboolean View::isClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean View::isContextClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean View::isDirty()
	{
		return __thiz.callMethod<jboolean>(
			"isDirty",
			"()Z"
		);
	}
	jboolean View::isDrawingCacheEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isDrawingCacheEnabled",
			"()Z"
		);
	}
	jboolean View::isDuplicateParentStateEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isDuplicateParentStateEnabled",
			"()Z"
		);
	}
	jboolean View::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean View::isFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean View::isFocusableInTouchMode()
	{
		return __thiz.callMethod<jboolean>(
			"isFocusableInTouchMode",
			"()Z"
		);
	}
	jboolean View::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean View::isFocusedByDefault()
	{
		return __thiz.callMethod<jboolean>(
			"isFocusedByDefault",
			"()Z"
		);
	}
	jboolean View::isForceDarkAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isForceDarkAllowed",
			"()Z"
		);
	}
	jboolean View::isHapticFeedbackEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isHapticFeedbackEnabled",
			"()Z"
		);
	}
	jboolean View::isHardwareAccelerated()
	{
		return __thiz.callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean View::isHorizontalFadingEdgeEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isHorizontalFadingEdgeEnabled",
			"()Z"
		);
	}
	jboolean View::isHorizontalScrollBarEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isHorizontalScrollBarEnabled",
			"()Z"
		);
	}
	jboolean View::isHovered()
	{
		return __thiz.callMethod<jboolean>(
			"isHovered",
			"()Z"
		);
	}
	jboolean View::isImportantForAccessibility()
	{
		return __thiz.callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	jboolean View::isImportantForAutofill()
	{
		return __thiz.callMethod<jboolean>(
			"isImportantForAutofill",
			"()Z"
		);
	}
	jboolean View::isInEditMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInEditMode",
			"()Z"
		);
	}
	jboolean View::isInLayout()
	{
		return __thiz.callMethod<jboolean>(
			"isInLayout",
			"()Z"
		);
	}
	jboolean View::isInTouchMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInTouchMode",
			"()Z"
		);
	}
	jboolean View::isKeyboardNavigationCluster()
	{
		return __thiz.callMethod<jboolean>(
			"isKeyboardNavigationCluster",
			"()Z"
		);
	}
	jboolean View::isLaidOut()
	{
		return __thiz.callMethod<jboolean>(
			"isLaidOut",
			"()Z"
		);
	}
	jboolean View::isLayoutDirectionResolved()
	{
		return __thiz.callMethod<jboolean>(
			"isLayoutDirectionResolved",
			"()Z"
		);
	}
	jboolean View::isLayoutRequested()
	{
		return __thiz.callMethod<jboolean>(
			"isLayoutRequested",
			"()Z"
		);
	}
	jboolean View::isLongClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean View::isNestedScrollingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isNestedScrollingEnabled",
			"()Z"
		);
	}
	jboolean View::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean View::isPaddingRelative()
	{
		return __thiz.callMethod<jboolean>(
			"isPaddingRelative",
			"()Z"
		);
	}
	jboolean View::isPivotSet()
	{
		return __thiz.callMethod<jboolean>(
			"isPivotSet",
			"()Z"
		);
	}
	jboolean View::isPressed()
	{
		return __thiz.callMethod<jboolean>(
			"isPressed",
			"()Z"
		);
	}
	jboolean View::isSaveEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSaveEnabled",
			"()Z"
		);
	}
	jboolean View::isSaveFromParentEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSaveFromParentEnabled",
			"()Z"
		);
	}
	jboolean View::isScreenReaderFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	jboolean View::isScrollContainer()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollContainer",
			"()Z"
		);
	}
	jboolean View::isScrollbarFadingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollbarFadingEnabled",
			"()Z"
		);
	}
	jboolean View::isSelected()
	{
		return __thiz.callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	jboolean View::isShown()
	{
		return __thiz.callMethod<jboolean>(
			"isShown",
			"()Z"
		);
	}
	jboolean View::isSoundEffectsEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSoundEffectsEnabled",
			"()Z"
		);
	}
	jboolean View::isTemporarilyDetached()
	{
		return __thiz.callMethod<jboolean>(
			"isTemporarilyDetached",
			"()Z"
		);
	}
	jboolean View::isTextAlignmentResolved()
	{
		return __thiz.callMethod<jboolean>(
			"isTextAlignmentResolved",
			"()Z"
		);
	}
	jboolean View::isTextDirectionResolved()
	{
		return __thiz.callMethod<jboolean>(
			"isTextDirectionResolved",
			"()Z"
		);
	}
	jboolean View::isVerticalFadingEdgeEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isVerticalFadingEdgeEnabled",
			"()Z"
		);
	}
	jboolean View::isVerticalScrollBarEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isVerticalScrollBarEnabled",
			"()Z"
		);
	}
	jboolean View::isVisibleToUserForAutofill(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	void View::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	QAndroidJniObject View::keyboardNavigationClusterSearch(__jni_impl::android::view::View arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"keyboardNavigationClusterSearch",
			"(Landroid/view/View;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::layout(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"layout",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void View::measure(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"measure",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::offsetLeftAndRight(jint arg0)
	{
		__thiz.callMethod<void>(
			"offsetLeftAndRight",
			"(I)V",
			arg0
		);
	}
	void View::offsetTopAndBottom(jint arg0)
	{
		__thiz.callMethod<void>(
			"offsetTopAndBottom",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject View::onApplyWindowInsets(__jni_impl::android::view::WindowInsets arg0)
	{
		return __thiz.callObjectMethod(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.__jniObject().object()
		);
	}
	void View::onCancelPendingInputEvents()
	{
		__thiz.callMethod<void>(
			"onCancelPendingInputEvents",
			"()V"
		);
	}
	jboolean View::onCapturedPointerEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::onCheckIsTextEditor()
	{
		return __thiz.callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	QAndroidJniObject View::onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.__jniObject().object()
		);
	}
	jboolean View::onDragEvent(__jni_impl::android::view::DragEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::onDrawForeground(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"onDrawForeground",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean View::onFilterTouchEventForSecurity(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onFilterTouchEventForSecurity",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::onFinishTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean View::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::onHoverChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onHoverChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean View::onHoverEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::onInitializeAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void View::onInitializeAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean View::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean View::onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean View::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean View::onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean View::onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean View::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void View::onPointerCaptureChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onPointerCaptureChange",
			"(Z)V",
			arg0
		);
	}
	void View::onPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"onPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void View::onProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::onProvideAutofillVirtualStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::onProvideStructure(__jni_impl::android::view::ViewStructure arg0)
	{
		__thiz.callMethod<void>(
			"onProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.__jniObject().object()
		);
	}
	void View::onProvideVirtualStructure(__jni_impl::android::view::ViewStructure arg0)
	{
		__thiz.callMethod<void>(
			"onProvideVirtualStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject View::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void View::onScreenStateChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	void View::onStartTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	jboolean View::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::onVisibilityAggregated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void View::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void View::onWindowSystemUiVisibilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onWindowSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	jboolean View::performAccessibilityAction(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performAccessibilityAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean View::performClick()
	{
		return __thiz.callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	jboolean View::performContextClick()
	{
		return __thiz.callMethod<jboolean>(
			"performContextClick",
			"()Z"
		);
	}
	jboolean View::performContextClick(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performContextClick",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean View::performHapticFeedback(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performHapticFeedback",
			"(I)Z",
			arg0
		);
	}
	jboolean View::performHapticFeedback(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performHapticFeedback",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean View::performLongClick()
	{
		return __thiz.callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	jboolean View::performLongClick(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performLongClick",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	void View::playSoundEffect(jint arg0)
	{
		__thiz.callMethod<void>(
			"playSoundEffect",
			"(I)V",
			arg0
		);
	}
	jboolean View::post(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"post",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::postDelayed(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;J)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::postInvalidate()
	{
		__thiz.callMethod<void>(
			"postInvalidate",
			"()V"
		);
	}
	void View::postInvalidate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"postInvalidate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void View::postInvalidateDelayed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"postInvalidateDelayed",
			"(J)V",
			arg0
		);
	}
	void View::postInvalidateDelayed(jlong arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"postInvalidateDelayed",
			"(JIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void View::postInvalidateOnAnimation()
	{
		__thiz.callMethod<void>(
			"postInvalidateOnAnimation",
			"()V"
		);
	}
	void View::postInvalidateOnAnimation(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"postInvalidateOnAnimation",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void View::postOnAnimation(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"postOnAnimation",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::postOnAnimationDelayed(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"postOnAnimationDelayed",
			"(Ljava/lang/Runnable;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::refreshDrawableState()
	{
		__thiz.callMethod<void>(
			"refreshDrawableState",
			"()V"
		);
	}
	void View::releasePointerCapture()
	{
		__thiz.callMethod<void>(
			"releasePointerCapture",
			"()V"
		);
	}
	jboolean View::removeCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
	void View::removeOnAttachStateChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnAttachStateChangeListener",
			"(Landroid/view/View$OnAttachStateChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::removeOnLayoutChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnLayoutChangeListener",
			"(Landroid/view/View$OnLayoutChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::removeOnUnhandledKeyEventListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnUnhandledKeyEventListener",
			"(Landroid/view/View$OnUnhandledKeyEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::requestApplyInsets()
	{
		__thiz.callMethod<void>(
			"requestApplyInsets",
			"()V"
		);
	}
	void View::requestFitSystemWindows()
	{
		__thiz.callMethod<void>(
			"requestFitSystemWindows",
			"()V"
		);
	}
	jboolean View::requestFocus()
	{
		return __thiz.callMethod<jboolean>(
			"requestFocus",
			"()Z"
		);
	}
	jboolean View::requestFocus(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestFocus",
			"(I)Z",
			arg0
		);
	}
	jboolean View::requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean View::requestFocusFromTouch()
	{
		return __thiz.callMethod<jboolean>(
			"requestFocusFromTouch",
			"()Z"
		);
	}
	void View::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void View::requestPointerCapture()
	{
		__thiz.callMethod<void>(
			"requestPointerCapture",
			"()V"
		);
	}
	jboolean View::requestRectangleOnScreen(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestRectangleOnScreen",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean View::requestRectangleOnScreen(__jni_impl::android::graphics::Rect arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestRectangleOnScreen",
			"(Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::requestUnbufferedDispatch(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"requestUnbufferedDispatch",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject View::requireViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void View::resetPivot()
	{
		__thiz.callMethod<void>(
			"resetPivot",
			"()V"
		);
	}
	jboolean View::restoreDefaultFocus()
	{
		return __thiz.callMethod<jboolean>(
			"restoreDefaultFocus",
			"()Z"
		);
	}
	void View::restoreHierarchyState(__jni_impl::android::util::SparseArray arg0)
	{
		__thiz.callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/util/SparseArray;)V",
			arg0.__jniObject().object()
		);
	}
	void View::saveAttributeDataForStyleable(__jni_impl::android::content::Context arg0, jintArray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::TypedArray arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"saveAttributeDataForStyleable",
			"(Landroid/content/Context;[ILandroid/util/AttributeSet;Landroid/content/res/TypedArray;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5
		);
	}
	void View::saveHierarchyState(__jni_impl::android::util::SparseArray arg0)
	{
		__thiz.callMethod<void>(
			"saveHierarchyState",
			"(Landroid/util/SparseArray;)V",
			arg0.__jniObject().object()
		);
	}
	void View::scheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void View::scrollBy(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"scrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::scrollTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::sendAccessibilityEvent(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEvent",
			"(I)V",
			arg0
		);
	}
	void View::sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setAccessibilityDelegate(__jni_impl::android::view::View_AccessibilityDelegate arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityDelegate",
			"(Landroid/view/View$AccessibilityDelegate;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setAccessibilityHeading(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityHeading",
			"(Z)V",
			arg0
		);
	}
	void View::setAccessibilityLiveRegion(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityLiveRegion",
			"(I)V",
			arg0
		);
	}
	void View::setAccessibilityPaneTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void View::setAccessibilityPaneTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void View::setAccessibilityTraversalAfter(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityTraversalAfter",
			"(I)V",
			arg0
		);
	}
	void View::setAccessibilityTraversalBefore(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityTraversalBefore",
			"(I)V",
			arg0
		);
	}
	void View::setActivated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setActivated",
			"(Z)V",
			arg0
		);
	}
	void View::setAlpha(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void View::setAnimation(__jni_impl::android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setAnimationMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setAutofillHints(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAutofillHints",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void View::setAutofillId(__jni_impl::android::view::autofill::AutofillId arg0)
	{
		__thiz.callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setBackground(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setBackgroundColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void View::setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setBackgroundResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void View::setBackgroundTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setBackgroundTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setBackgroundTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setBottom(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBottom",
			"(I)V",
			arg0
		);
	}
	void View::setCameraDistance(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setCameraDistance",
			"(F)V",
			arg0
		);
	}
	void View::setClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setClipBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setClipBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setClipToOutline(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClipToOutline",
			"(Z)V",
			arg0
		);
	}
	void View::setContentCaptureSession(__jni_impl::android::view::contentcapture::ContentCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"setContentCaptureSession",
			"(Landroid/view/contentcapture/ContentCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void View::setContentDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void View::setContextClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setDefaultFocusHighlightEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultFocusHighlightEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setDrawingCacheBackgroundColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDrawingCacheBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void View::setDrawingCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDrawingCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setDrawingCacheQuality(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDrawingCacheQuality",
			"(I)V",
			arg0
		);
	}
	void View::setDuplicateParentStateEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDuplicateParentStateEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setElevation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void View::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setFadingEdgeLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFadingEdgeLength",
			"(I)V",
			arg0
		);
	}
	void View::setFilterTouchesWhenObscured(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFilterTouchesWhenObscured",
			"(Z)V",
			arg0
		);
	}
	void View::setFitsSystemWindows(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFitsSystemWindows",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(I)V",
			arg0
		);
	}
	void View::setFocusableInTouchMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusableInTouchMode",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusedByDefault(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusedByDefault",
			"(Z)V",
			arg0
		);
	}
	void View::setForceDarkAllowed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setForceDarkAllowed",
			"(Z)V",
			arg0
		);
	}
	void View::setForeground(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setForeground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setForegroundGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setForegroundGravity",
			"(I)V",
			arg0
		);
	}
	void View::setForegroundTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setForegroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setForegroundTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setForegroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setForegroundTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setForegroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setHapticFeedbackEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHapticFeedbackEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHasTransientState(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHasTransientState",
			"(Z)V",
			arg0
		);
	}
	void View::setHorizontalFadingEdgeEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalFadingEdgeEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHorizontalScrollBarEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalScrollBarEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHorizontalScrollbarThumbDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalScrollbarThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setHorizontalScrollbarTrackDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalScrollbarTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setHovered(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHovered",
			"(Z)V",
			arg0
		);
	}
	void View::setId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setId",
			"(I)V",
			arg0
		);
	}
	void View::setImportantForAccessibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImportantForAccessibility",
			"(I)V",
			arg0
		);
	}
	void View::setImportantForAutofill(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImportantForAutofill",
			"(I)V",
			arg0
		);
	}
	void View::setKeepScreenOn(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setKeepScreenOn",
			"(Z)V",
			arg0
		);
	}
	void View::setKeyboardNavigationCluster(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setKeyboardNavigationCluster",
			"(Z)V",
			arg0
		);
	}
	void View::setLabelFor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLabelFor",
			"(I)V",
			arg0
		);
	}
	void View::setLayerPaint(__jni_impl::android::graphics::Paint arg0)
	{
		__thiz.callMethod<void>(
			"setLayerPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setLayerType(jint arg0, __jni_impl::android::graphics::Paint arg1)
	{
		__thiz.callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void View::setLayoutDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void View::setLayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setLeft(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLeft",
			"(I)V",
			arg0
		);
	}
	void View::setLeftTopRightBottom(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setLeftTopRightBottom",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void View::setLongClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setMinimumHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumHeight",
			"(I)V",
			arg0
		);
	}
	void View::setMinimumWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumWidth",
			"(I)V",
			arg0
		);
	}
	void View::setNestedScrollingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNestedScrollingEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setNextClusterForwardId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNextClusterForwardId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusDownId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNextFocusDownId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusForwardId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNextFocusForwardId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusLeftId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNextFocusLeftId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusRightId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNextFocusRightId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusUpId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNextFocusUpId",
			"(I)V",
			arg0
		);
	}
	void View::setOnApplyWindowInsetsListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnApplyWindowInsetsListener",
			"(Landroid/view/View$OnApplyWindowInsetsListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnCapturedPointerListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCapturedPointerListener",
			"(Landroid/view/View$OnCapturedPointerListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnContextClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnContextClickListener",
			"(Landroid/view/View$OnContextClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnCreateContextMenuListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCreateContextMenuListener",
			"(Landroid/view/View$OnCreateContextMenuListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnDragListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDragListener",
			"(Landroid/view/View$OnDragListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnFocusChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnFocusChangeListener",
			"(Landroid/view/View$OnFocusChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnGenericMotionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnGenericMotionListener",
			"(Landroid/view/View$OnGenericMotionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnHoverListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHoverListener",
			"(Landroid/view/View$OnHoverListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnKeyListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnKeyListener",
			"(Landroid/view/View$OnKeyListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnLongClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnLongClickListener",
			"(Landroid/view/View$OnLongClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnScrollChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnScrollChangeListener",
			"(Landroid/view/View$OnScrollChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnSystemUiVisibilityChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSystemUiVisibilityChangeListener",
			"(Landroid/view/View$OnSystemUiVisibilityChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOnTouchListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTouchListener",
			"(Landroid/view/View$OnTouchListener;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOutlineAmbientShadowColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOutlineAmbientShadowColor",
			"(I)V",
			arg0
		);
	}
	void View::setOutlineProvider(__jni_impl::android::view::ViewOutlineProvider arg0)
	{
		__thiz.callMethod<void>(
			"setOutlineProvider",
			"(Landroid/view/ViewOutlineProvider;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setOutlineSpotShadowColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOutlineSpotShadowColor",
			"(I)V",
			arg0
		);
	}
	void View::setOverScrollMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	void View::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPadding",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void View::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPaddingRelative",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void View::setPivotX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPivotX",
			"(F)V",
			arg0
		);
	}
	void View::setPivotY(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPivotY",
			"(F)V",
			arg0
		);
	}
	void View::setPointerIcon(__jni_impl::android::view::PointerIcon arg0)
	{
		__thiz.callMethod<void>(
			"setPointerIcon",
			"(Landroid/view/PointerIcon;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setPressed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPressed",
			"(Z)V",
			arg0
		);
	}
	void View::setRevealOnFocusHint(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRevealOnFocusHint",
			"(Z)V",
			arg0
		);
	}
	void View::setRight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRight",
			"(I)V",
			arg0
		);
	}
	void View::setRotation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRotation",
			"(F)V",
			arg0
		);
	}
	void View::setRotationX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRotationX",
			"(F)V",
			arg0
		);
	}
	void View::setRotationY(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRotationY",
			"(F)V",
			arg0
		);
	}
	void View::setSaveEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSaveEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setSaveFromParentEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSaveFromParentEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setScaleX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setScaleX",
			"(F)V",
			arg0
		);
	}
	void View::setScaleY(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setScaleY",
			"(F)V",
			arg0
		);
	}
	void View::setScreenReaderFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	void View::setScrollBarDefaultDelayBeforeFade(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollBarDefaultDelayBeforeFade",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarFadeDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollBarFadeDuration",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollBarSize",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	void View::setScrollContainer(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollContainer",
			"(Z)V",
			arg0
		);
	}
	void View::setScrollIndicators(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollIndicators",
			"(I)V",
			arg0
		);
	}
	void View::setScrollIndicators(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setScrollIndicators",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::setScrollX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	void View::setScrollY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	void View::setScrollbarFadingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollbarFadingEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void View::setSoundEffectsEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSoundEffectsEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setStateListAnimator(__jni_impl::android::animation::StateListAnimator arg0)
	{
		__thiz.callMethod<void>(
			"setStateListAnimator",
			"(Landroid/animation/StateListAnimator;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setSystemGestureExclusionRects(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setSystemUiVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSystemUiVisibility",
			"(I)V",
			arg0
		);
	}
	void View::setTag(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void View::setTag(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setTag",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void View::setTextAlignment(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextAlignment",
			"(I)V",
			arg0
		);
	}
	void View::setTextDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextDirection",
			"(I)V",
			arg0
		);
	}
	void View::setTooltipText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void View::setTooltipText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void View::setTop(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTop",
			"(I)V",
			arg0
		);
	}
	void View::setTouchDelegate(__jni_impl::android::view::TouchDelegate arg0)
	{
		__thiz.callMethod<void>(
			"setTouchDelegate",
			"(Landroid/view/TouchDelegate;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setTransitionAlpha(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionAlpha",
			"(F)V",
			arg0
		);
	}
	void View::setTransitionName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void View::setTransitionName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void View::setTransitionVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionVisibility",
			"(I)V",
			arg0
		);
	}
	void View::setTranslationX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTranslationX",
			"(F)V",
			arg0
		);
	}
	void View::setTranslationY(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTranslationY",
			"(F)V",
			arg0
		);
	}
	void View::setTranslationZ(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTranslationZ",
			"(F)V",
			arg0
		);
	}
	void View::setVerticalFadingEdgeEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalFadingEdgeEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setVerticalScrollBarEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalScrollBarEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setVerticalScrollbarPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalScrollbarPosition",
			"(I)V",
			arg0
		);
	}
	void View::setVerticalScrollbarThumbDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalScrollbarThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setVerticalScrollbarTrackDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalScrollbarTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void View::setWillNotCacheDrawing(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWillNotCacheDrawing",
			"(Z)V",
			arg0
		);
	}
	void View::setWillNotDraw(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWillNotDraw",
			"(Z)V",
			arg0
		);
	}
	void View::setX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setX",
			"(F)V",
			arg0
		);
	}
	void View::setY(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setY",
			"(F)V",
			arg0
		);
	}
	void View::setZ(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setZ",
			"(F)V",
			arg0
		);
	}
	jboolean View::showContextMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean View::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	QAndroidJniObject View::startActionMode(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject View::startActionMode(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void View::startAnimation(__jni_impl::android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"startAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean View::startDrag(__jni_impl::android::content::ClipData arg0, __jni_impl::android::view::View_DragShadowBuilder arg1, jobject arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"startDrag",
			"(Landroid/content/ClipData;Landroid/view/View$DragShadowBuilder;Ljava/lang/Object;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jboolean View::startDragAndDrop(__jni_impl::android::content::ClipData arg0, __jni_impl::android::view::View_DragShadowBuilder arg1, jobject arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"startDragAndDrop",
			"(Landroid/content/ClipData;Landroid/view/View$DragShadowBuilder;Ljava/lang/Object;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jboolean View::startNestedScroll(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"startNestedScroll",
			"(I)Z",
			arg0
		);
	}
	void View::stopNestedScroll()
	{
		__thiz.callMethod<void>(
			"stopNestedScroll",
			"()V"
		);
	}
	jstring View::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void View::transformMatrixToGlobal(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"transformMatrixToGlobal",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void View::transformMatrixToLocal(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"transformMatrixToLocal",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void View::unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void View::unscheduleDrawable(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void View::updateDragShadow(__jni_impl::android::view::View_DragShadowBuilder arg0)
	{
		__thiz.callMethod<void>(
			"updateDragShadow",
			"(Landroid/view/View$DragShadowBuilder;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean View::willNotCacheDrawing()
	{
		return __thiz.callMethod<jboolean>(
			"willNotCacheDrawing",
			"()Z"
		);
	}
	jboolean View::willNotDraw()
	{
		return __thiz.callMethod<jboolean>(
			"willNotDraw",
			"()Z"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class View : public __jni_impl::android::view::View
	{
	public:
		View(QAndroidJniObject obj) { __thiz = obj; }
		View(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		View(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		View(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		View(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEW


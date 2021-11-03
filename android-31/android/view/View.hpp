#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JLongArray;
class JArray;
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
namespace android::content::res
{
	class TypedArray;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BlendMode;
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
namespace android::graphics
{
	class Region;
}
namespace android::graphics
{
	class RenderEffect;
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
	class LongSparseArray;
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
	class ContentInfo;
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
namespace android::view::contentcapture
{
	class ContentCaptureSession;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace android::view::translation
{
	class TranslationCapability;
}
namespace android::view::translation
{
	class ViewTranslationResponse;
}
class JString;
class JObject;
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::view
{
	class View : public JObject
	{
	public:
		// Fields
		static jint ACCESSIBILITY_LIVE_REGION_ASSERTIVE();
		static jint ACCESSIBILITY_LIVE_REGION_NONE();
		static jint ACCESSIBILITY_LIVE_REGION_POLITE();
		static android::util::Property ALPHA();
		static jint AUTOFILL_FLAG_INCLUDE_NOT_IMPORTANT_VIEWS();
		static JString AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DATE();
		static JString AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DAY();
		static JString AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_MONTH();
		static JString AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_YEAR();
		static JString AUTOFILL_HINT_CREDIT_CARD_NUMBER();
		static JString AUTOFILL_HINT_CREDIT_CARD_SECURITY_CODE();
		static JString AUTOFILL_HINT_EMAIL_ADDRESS();
		static JString AUTOFILL_HINT_NAME();
		static JString AUTOFILL_HINT_PASSWORD();
		static JString AUTOFILL_HINT_PHONE();
		static JString AUTOFILL_HINT_POSTAL_ADDRESS();
		static JString AUTOFILL_HINT_POSTAL_CODE();
		static JString AUTOFILL_HINT_USERNAME();
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
		static jint IMPORTANT_FOR_CONTENT_CAPTURE_AUTO();
		static jint IMPORTANT_FOR_CONTENT_CAPTURE_NO();
		static jint IMPORTANT_FOR_CONTENT_CAPTURE_NO_EXCLUDE_DESCENDANTS();
		static jint IMPORTANT_FOR_CONTENT_CAPTURE_YES();
		static jint IMPORTANT_FOR_CONTENT_CAPTURE_YES_EXCLUDE_DESCENDANTS();
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
		static jint SCROLL_CAPTURE_HINT_AUTO();
		static jint SCROLL_CAPTURE_HINT_EXCLUDE();
		static jint SCROLL_CAPTURE_HINT_EXCLUDE_DESCENDANTS();
		static jint SCROLL_CAPTURE_HINT_INCLUDE();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit View(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		View(QAndroidJniObject obj);
		
		// Constructors
		View(android::content::Context arg0);
		View(android::content::Context arg0, JObject arg1);
		View(android::content::Context arg0, JObject arg1, jint arg2);
		View(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		static jint combineMeasuredStates(jint arg0, jint arg1);
		static jint generateViewId();
		static jint getDefaultSize(jint arg0, jint arg1);
		static android::view::View inflate(android::content::Context arg0, jint arg1, android::view::ViewGroup arg2);
		static jint resolveSize(jint arg0, jint arg1);
		static jint resolveSizeAndState(jint arg0, jint arg1, jint arg2);
		void addChildrenForAccessibility(java::util::ArrayList arg0) const;
		void addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2) const;
		void addFocusables(java::util::ArrayList arg0, jint arg1) const;
		void addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2) const;
		void addKeyboardNavigationClusters(JObject arg0, jint arg1) const;
		void addOnAttachStateChangeListener(JObject arg0) const;
		void addOnLayoutChangeListener(JObject arg0) const;
		void addOnUnhandledKeyEventListener(JObject arg0) const;
		void addTouchables(java::util::ArrayList arg0) const;
		android::view::ViewPropertyAnimator animate() const;
		void announceForAccessibility(JString arg0) const;
		void autofill(android::util::SparseArray arg0) const;
		void autofill(android::view::autofill::AutofillValue arg0) const;
		void bringToFront() const;
		void buildDrawingCache() const;
		void buildDrawingCache(jboolean arg0) const;
		void buildLayer() const;
		jboolean callOnClick() const;
		jboolean canResolveLayoutDirection() const;
		jboolean canResolveTextAlignment() const;
		jboolean canResolveTextDirection() const;
		jboolean canScrollHorizontally(jint arg0) const;
		jboolean canScrollVertically(jint arg0) const;
		void cancelDragAndDrop() const;
		void cancelLongPress() const;
		void cancelPendingInputEvents() const;
		jboolean checkInputConnectionProxy(android::view::View arg0) const;
		void clearAnimation() const;
		void clearFocus() const;
		void clearViewTranslationCallback() const;
		void computeScroll() const;
		android::view::WindowInsets computeSystemWindowInsets(android::view::WindowInsets arg0, android::graphics::Rect arg1) const;
		android::view::accessibility::AccessibilityNodeInfo createAccessibilityNodeInfo() const;
		void createContextMenu(JObject arg0) const;
		void destroyDrawingCache() const;
		android::view::WindowInsets dispatchApplyWindowInsets(android::view::WindowInsets arg0) const;
		jboolean dispatchCapturedPointerEvent(android::view::MotionEvent arg0) const;
		void dispatchConfigurationChanged(android::content::res::Configuration arg0) const;
		void dispatchCreateViewTranslationRequest(JObject arg0, JIntArray arg1, android::view::translation::TranslationCapability arg2, JObject arg3) const;
		void dispatchDisplayHint(jint arg0) const;
		jboolean dispatchDragEvent(android::view::DragEvent arg0) const;
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		void dispatchFinishTemporaryDetach() const;
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchKeyEventPreIme(android::view::KeyEvent arg0) const;
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchNestedFling(jfloat arg0, jfloat arg1, jboolean arg2) const;
		jboolean dispatchNestedPreFling(jfloat arg0, jfloat arg1) const;
		jboolean dispatchNestedPrePerformAccessibilityAction(jint arg0, android::os::Bundle arg1) const;
		jboolean dispatchNestedPreScroll(jint arg0, jint arg1, JIntArray arg2, JIntArray arg3) const;
		jboolean dispatchNestedScroll(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4) const;
		void dispatchPointerCaptureChanged(jboolean arg0) const;
		jboolean dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
		void dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const;
		void dispatchProvideStructure(android::view::ViewStructure arg0) const;
		void dispatchScrollCaptureSearch(android::graphics::Rect arg0, android::graphics::Point arg1, JObject arg2) const;
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
		void draw(android::graphics::Canvas arg0) const;
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		android::view::View findFocus() const;
		android::view::View findViewById(jint arg0) const;
		android::view::View findViewWithTag(JObject arg0) const;
		void findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const;
		android::view::View focusSearch(jint arg0) const;
		void forceHasOverlappingRendering(jboolean arg0) const;
		void forceLayout() const;
		jboolean gatherTransparentRegion(android::graphics::Region arg0) const;
		void generateDisplayHash(JString arg0, android::graphics::Rect arg1, JObject arg2, JObject arg3) const;
		JString getAccessibilityClassName() const;
		android::view::View_AccessibilityDelegate getAccessibilityDelegate() const;
		jint getAccessibilityLiveRegion() const;
		android::view::accessibility::AccessibilityNodeProvider getAccessibilityNodeProvider() const;
		JString getAccessibilityPaneTitle() const;
		jint getAccessibilityTraversalAfter() const;
		jint getAccessibilityTraversalBefore() const;
		jfloat getAlpha() const;
		android::view::animation::Animation getAnimation() const;
		android::graphics::Matrix getAnimationMatrix() const;
		JObject getApplicationWindowToken() const;
		JIntArray getAttributeResolutionStack(jint arg0) const;
		JObject getAttributeSourceResourceMap() const;
		JArray getAutofillHints() const;
		android::view::autofill::AutofillId getAutofillId() const;
		jint getAutofillType() const;
		android::view::autofill::AutofillValue getAutofillValue() const;
		android::graphics::drawable::Drawable getBackground() const;
		android::graphics::BlendMode getBackgroundTintBlendMode() const;
		android::content::res::ColorStateList getBackgroundTintList() const;
		android::graphics::PorterDuff_Mode getBackgroundTintMode() const;
		jint getBaseline() const;
		jint getBottom() const;
		jfloat getCameraDistance() const;
		android::graphics::Rect getClipBounds() const;
		jboolean getClipBounds(android::graphics::Rect arg0) const;
		jboolean getClipToOutline() const;
		android::view::contentcapture::ContentCaptureSession getContentCaptureSession() const;
		JString getContentDescription() const;
		android::content::Context getContext() const;
		jboolean getDefaultFocusHighlightEnabled() const;
		android::view::Display getDisplay() const;
		JIntArray getDrawableState() const;
		android::graphics::Bitmap getDrawingCache() const;
		android::graphics::Bitmap getDrawingCache(jboolean arg0) const;
		jint getDrawingCacheBackgroundColor() const;
		jint getDrawingCacheQuality() const;
		void getDrawingRect(android::graphics::Rect arg0) const;
		jlong getDrawingTime() const;
		jfloat getElevation() const;
		jint getExplicitStyle() const;
		jboolean getFilterTouchesWhenObscured() const;
		jboolean getFitsSystemWindows() const;
		jint getFocusable() const;
		java::util::ArrayList getFocusables(jint arg0) const;
		void getFocusedRect(android::graphics::Rect arg0) const;
		android::graphics::drawable::Drawable getForeground() const;
		jint getForegroundGravity() const;
		android::graphics::BlendMode getForegroundTintBlendMode() const;
		android::content::res::ColorStateList getForegroundTintList() const;
		android::graphics::PorterDuff_Mode getForegroundTintMode() const;
		jboolean getGlobalVisibleRect(android::graphics::Rect arg0) const;
		jboolean getGlobalVisibleRect(android::graphics::Rect arg0, android::graphics::Point arg1) const;
		android::os::Handler getHandler() const;
		jboolean getHasOverlappingRendering() const;
		jint getHeight() const;
		void getHitRect(android::graphics::Rect arg0) const;
		jint getHorizontalFadingEdgeLength() const;
		android::graphics::drawable::Drawable getHorizontalScrollbarThumbDrawable() const;
		android::graphics::drawable::Drawable getHorizontalScrollbarTrackDrawable() const;
		jint getId() const;
		jint getImportantForAccessibility() const;
		jint getImportantForAutofill() const;
		jint getImportantForContentCapture() const;
		jboolean getKeepScreenOn() const;
		android::view::KeyEvent_DispatcherState getKeyDispatcherState() const;
		jint getLabelFor() const;
		jint getLayerType() const;
		jint getLayoutDirection() const;
		android::view::ViewGroup_LayoutParams getLayoutParams() const;
		jint getLeft() const;
		jboolean getLocalVisibleRect(android::graphics::Rect arg0) const;
		void getLocationInSurface(JIntArray arg0) const;
		void getLocationInWindow(JIntArray arg0) const;
		void getLocationOnScreen(JIntArray arg0) const;
		android::graphics::Matrix getMatrix() const;
		jint getMeasuredHeight() const;
		jint getMeasuredHeightAndState() const;
		jint getMeasuredState() const;
		jint getMeasuredWidth() const;
		jint getMeasuredWidthAndState() const;
		jint getMinimumHeight() const;
		jint getMinimumWidth() const;
		jint getNextClusterForwardId() const;
		jint getNextFocusDownId() const;
		jint getNextFocusForwardId() const;
		jint getNextFocusLeftId() const;
		jint getNextFocusRightId() const;
		jint getNextFocusUpId() const;
		JObject getOnFocusChangeListener() const;
		jint getOutlineAmbientShadowColor() const;
		android::view::ViewOutlineProvider getOutlineProvider() const;
		jint getOutlineSpotShadowColor() const;
		jint getOverScrollMode() const;
		android::view::ViewOverlay getOverlay() const;
		jint getPaddingBottom() const;
		jint getPaddingEnd() const;
		jint getPaddingLeft() const;
		jint getPaddingRight() const;
		jint getPaddingStart() const;
		jint getPaddingTop() const;
		JObject getParent() const;
		JObject getParentForAccessibility() const;
		jfloat getPivotX() const;
		jfloat getPivotY() const;
		android::view::PointerIcon getPointerIcon() const;
		JArray getReceiveContentMimeTypes() const;
		android::content::res::Resources getResources() const;
		jboolean getRevealOnFocusHint() const;
		jint getRight() const;
		JObject getRootSurfaceControl() const;
		android::view::View getRootView() const;
		android::view::WindowInsets getRootWindowInsets() const;
		jfloat getRotation() const;
		jfloat getRotationX() const;
		jfloat getRotationY() const;
		jfloat getScaleX() const;
		jfloat getScaleY() const;
		jint getScrollBarDefaultDelayBeforeFade() const;
		jint getScrollBarFadeDuration() const;
		jint getScrollBarSize() const;
		jint getScrollBarStyle() const;
		jint getScrollCaptureHint() const;
		jint getScrollIndicators() const;
		jint getScrollX() const;
		jint getScrollY() const;
		jint getSolidColor() const;
		jint getSourceLayoutResId() const;
		JString getStateDescription() const;
		android::animation::StateListAnimator getStateListAnimator() const;
		JObject getSystemGestureExclusionRects() const;
		jint getSystemUiVisibility() const;
		JObject getTag() const;
		JObject getTag(jint arg0) const;
		jint getTextAlignment() const;
		jint getTextDirection() const;
		JString getTooltipText() const;
		jint getTop() const;
		android::view::TouchDelegate getTouchDelegate() const;
		java::util::ArrayList getTouchables() const;
		jfloat getTransitionAlpha() const;
		JString getTransitionName() const;
		jfloat getTranslationX() const;
		jfloat getTranslationY() const;
		jfloat getTranslationZ() const;
		jlong getUniqueDrawingId() const;
		jint getVerticalFadingEdgeLength() const;
		jint getVerticalScrollbarPosition() const;
		android::graphics::drawable::Drawable getVerticalScrollbarThumbDrawable() const;
		android::graphics::drawable::Drawable getVerticalScrollbarTrackDrawable() const;
		jint getVerticalScrollbarWidth() const;
		android::view::translation::ViewTranslationResponse getViewTranslationResponse() const;
		android::view::ViewTreeObserver getViewTreeObserver() const;
		jint getVisibility() const;
		jint getWidth() const;
		android::view::WindowId getWindowId() const;
		JObject getWindowInsetsController() const;
		jint getWindowSystemUiVisibility() const;
		JObject getWindowToken() const;
		jint getWindowVisibility() const;
		void getWindowVisibleDisplayFrame(android::graphics::Rect arg0) const;
		jfloat getX() const;
		jfloat getY() const;
		jfloat getZ() const;
		jboolean hasExplicitFocusable() const;
		jboolean hasFocus() const;
		jboolean hasFocusable() const;
		jboolean hasNestedScrollingParent() const;
		jboolean hasOnClickListeners() const;
		jboolean hasOnLongClickListeners() const;
		jboolean hasOverlappingRendering() const;
		jboolean hasPointerCapture() const;
		jboolean hasTransientState() const;
		jboolean hasWindowFocus() const;
		void invalidate() const;
		void invalidate(android::graphics::Rect arg0) const;
		void invalidate(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void invalidateDrawable(android::graphics::drawable::Drawable arg0) const;
		void invalidateOutline() const;
		jboolean isAccessibilityFocused() const;
		jboolean isAccessibilityHeading() const;
		jboolean isActivated() const;
		jboolean isAttachedToWindow() const;
		jboolean isClickable() const;
		jboolean isContextClickable() const;
		jboolean isDirty() const;
		jboolean isDrawingCacheEnabled() const;
		jboolean isDuplicateParentStateEnabled() const;
		jboolean isEnabled() const;
		jboolean isFocusable() const;
		jboolean isFocusableInTouchMode() const;
		jboolean isFocused() const;
		jboolean isFocusedByDefault() const;
		jboolean isForceDarkAllowed() const;
		jboolean isHapticFeedbackEnabled() const;
		jboolean isHardwareAccelerated() const;
		jboolean isHorizontalFadingEdgeEnabled() const;
		jboolean isHorizontalScrollBarEnabled() const;
		jboolean isHovered() const;
		jboolean isImportantForAccessibility() const;
		jboolean isImportantForAutofill() const;
		jboolean isImportantForContentCapture() const;
		jboolean isInEditMode() const;
		jboolean isInLayout() const;
		jboolean isInTouchMode() const;
		jboolean isKeyboardNavigationCluster() const;
		jboolean isLaidOut() const;
		jboolean isLayoutDirectionResolved() const;
		jboolean isLayoutRequested() const;
		jboolean isLongClickable() const;
		jboolean isNestedScrollingEnabled() const;
		jboolean isOpaque() const;
		jboolean isPaddingRelative() const;
		jboolean isPivotSet() const;
		jboolean isPressed() const;
		jboolean isSaveEnabled() const;
		jboolean isSaveFromParentEnabled() const;
		jboolean isScreenReaderFocusable() const;
		jboolean isScrollContainer() const;
		jboolean isScrollbarFadingEnabled() const;
		jboolean isSelected() const;
		jboolean isShowingLayoutBounds() const;
		jboolean isShown() const;
		jboolean isSoundEffectsEnabled() const;
		jboolean isTemporarilyDetached() const;
		jboolean isTextAlignmentResolved() const;
		jboolean isTextDirectionResolved() const;
		jboolean isVerticalFadingEdgeEnabled() const;
		jboolean isVerticalScrollBarEnabled() const;
		jboolean isVisibleToUserForAutofill(jint arg0) const;
		void jumpDrawablesToCurrentState() const;
		android::view::View keyboardNavigationClusterSearch(android::view::View arg0, jint arg1) const;
		void layout(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void measure(jint arg0, jint arg1) const;
		void offsetLeftAndRight(jint arg0) const;
		void offsetTopAndBottom(jint arg0) const;
		android::view::WindowInsets onApplyWindowInsets(android::view::WindowInsets arg0) const;
		void onCancelPendingInputEvents() const;
		jboolean onCapturedPointerEvent(android::view::MotionEvent arg0) const;
		jboolean onCheckIsTextEditor() const;
		JObject onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const;
		void onCreateViewTranslationRequest(JIntArray arg0, JObject arg1) const;
		void onCreateVirtualViewTranslationRequests(JLongArray arg0, JIntArray arg1, JObject arg2) const;
		jboolean onDragEvent(android::view::DragEvent arg0) const;
		void onDrawForeground(android::graphics::Canvas arg0) const;
		jboolean onFilterTouchEventForSecurity(android::view::MotionEvent arg0) const;
		void onFinishTemporaryDetach() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		void onHoverChanged(jboolean arg0) const;
		jboolean onHoverEvent(android::view::MotionEvent arg0) const;
		void onInitializeAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
		void onInitializeAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onPointerCaptureChange(jboolean arg0) const;
		void onPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
		void onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const;
		void onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1) const;
		void onProvideContentCaptureStructure(android::view::ViewStructure arg0, jint arg1) const;
		void onProvideStructure(android::view::ViewStructure arg0) const;
		void onProvideVirtualStructure(android::view::ViewStructure arg0) const;
		android::view::ContentInfo onReceiveContent(android::view::ContentInfo arg0) const;
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const;
		void onRtlPropertiesChanged(jint arg0) const;
		void onScreenStateChanged(jint arg0) const;
		void onScrollCaptureSearch(android::graphics::Rect arg0, android::graphics::Point arg1, JObject arg2) const;
		void onStartTemporaryDetach() const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void onViewTranslationResponse(android::view::translation::ViewTranslationResponse arg0) const;
		void onVirtualViewTranslationResponses(android::util::LongSparseArray arg0) const;
		void onVisibilityAggregated(jboolean arg0) const;
		void onWindowFocusChanged(jboolean arg0) const;
		void onWindowSystemUiVisibilityChanged(jint arg0) const;
		jboolean performAccessibilityAction(jint arg0, android::os::Bundle arg1) const;
		jboolean performClick() const;
		jboolean performContextClick() const;
		jboolean performContextClick(jfloat arg0, jfloat arg1) const;
		jboolean performHapticFeedback(jint arg0) const;
		jboolean performHapticFeedback(jint arg0, jint arg1) const;
		jboolean performLongClick() const;
		jboolean performLongClick(jfloat arg0, jfloat arg1) const;
		android::view::ContentInfo performReceiveContent(android::view::ContentInfo arg0) const;
		void playSoundEffect(jint arg0) const;
		jboolean post(JObject arg0) const;
		jboolean postDelayed(JObject arg0, jlong arg1) const;
		void postInvalidate() const;
		void postInvalidate(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void postInvalidateDelayed(jlong arg0) const;
		void postInvalidateDelayed(jlong arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void postInvalidateOnAnimation() const;
		void postInvalidateOnAnimation(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void postOnAnimation(JObject arg0) const;
		void postOnAnimationDelayed(JObject arg0, jlong arg1) const;
		void refreshDrawableState() const;
		void releasePointerCapture() const;
		jboolean removeCallbacks(JObject arg0) const;
		void removeOnAttachStateChangeListener(JObject arg0) const;
		void removeOnLayoutChangeListener(JObject arg0) const;
		void removeOnUnhandledKeyEventListener(JObject arg0) const;
		void requestApplyInsets() const;
		void requestFitSystemWindows() const;
		jboolean requestFocus() const;
		jboolean requestFocus(jint arg0) const;
		jboolean requestFocus(jint arg0, android::graphics::Rect arg1) const;
		jboolean requestFocusFromTouch() const;
		void requestLayout() const;
		void requestPointerCapture() const;
		jboolean requestRectangleOnScreen(android::graphics::Rect arg0) const;
		jboolean requestRectangleOnScreen(android::graphics::Rect arg0, jboolean arg1) const;
		void requestUnbufferedDispatch(android::view::MotionEvent arg0) const;
		void requestUnbufferedDispatch(jint arg0) const;
		android::view::View requireViewById(jint arg0) const;
		void resetPivot() const;
		jboolean restoreDefaultFocus() const;
		void restoreHierarchyState(android::util::SparseArray arg0) const;
		void saveAttributeDataForStyleable(android::content::Context arg0, JIntArray arg1, JObject arg2, android::content::res::TypedArray arg3, jint arg4, jint arg5) const;
		void saveHierarchyState(android::util::SparseArray arg0) const;
		void scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const;
		void scrollBy(jint arg0, jint arg1) const;
		void scrollTo(jint arg0, jint arg1) const;
		void sendAccessibilityEvent(jint arg0) const;
		void sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0) const;
		void setAccessibilityDelegate(android::view::View_AccessibilityDelegate arg0) const;
		void setAccessibilityHeading(jboolean arg0) const;
		void setAccessibilityLiveRegion(jint arg0) const;
		void setAccessibilityPaneTitle(JString arg0) const;
		void setAccessibilityTraversalAfter(jint arg0) const;
		void setAccessibilityTraversalBefore(jint arg0) const;
		void setActivated(jboolean arg0) const;
		void setAllowClickWhenDisabled(jboolean arg0) const;
		void setAlpha(jfloat arg0) const;
		void setAnimation(android::view::animation::Animation arg0) const;
		void setAnimationMatrix(android::graphics::Matrix arg0) const;
		void setAutofillHints(JArray arg0) const;
		void setAutofillId(android::view::autofill::AutofillId arg0) const;
		void setBackground(android::graphics::drawable::Drawable arg0) const;
		void setBackgroundColor(jint arg0) const;
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setBackgroundResource(jint arg0) const;
		void setBackgroundTintBlendMode(android::graphics::BlendMode arg0) const;
		void setBackgroundTintList(android::content::res::ColorStateList arg0) const;
		void setBackgroundTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setBottom(jint arg0) const;
		void setCameraDistance(jfloat arg0) const;
		void setClickable(jboolean arg0) const;
		void setClipBounds(android::graphics::Rect arg0) const;
		void setClipToOutline(jboolean arg0) const;
		void setContentCaptureSession(android::view::contentcapture::ContentCaptureSession arg0) const;
		void setContentDescription(JString arg0) const;
		void setContextClickable(jboolean arg0) const;
		void setDefaultFocusHighlightEnabled(jboolean arg0) const;
		void setDrawingCacheBackgroundColor(jint arg0) const;
		void setDrawingCacheEnabled(jboolean arg0) const;
		void setDrawingCacheQuality(jint arg0) const;
		void setDuplicateParentStateEnabled(jboolean arg0) const;
		void setElevation(jfloat arg0) const;
		void setEnabled(jboolean arg0) const;
		void setFadingEdgeLength(jint arg0) const;
		void setFilterTouchesWhenObscured(jboolean arg0) const;
		void setFitsSystemWindows(jboolean arg0) const;
		void setFocusable(jboolean arg0) const;
		void setFocusable(jint arg0) const;
		void setFocusableInTouchMode(jboolean arg0) const;
		void setFocusedByDefault(jboolean arg0) const;
		void setForceDarkAllowed(jboolean arg0) const;
		void setForeground(android::graphics::drawable::Drawable arg0) const;
		void setForegroundGravity(jint arg0) const;
		void setForegroundTintBlendMode(android::graphics::BlendMode arg0) const;
		void setForegroundTintList(android::content::res::ColorStateList arg0) const;
		void setForegroundTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setHapticFeedbackEnabled(jboolean arg0) const;
		void setHasTransientState(jboolean arg0) const;
		void setHorizontalFadingEdgeEnabled(jboolean arg0) const;
		void setHorizontalScrollBarEnabled(jboolean arg0) const;
		void setHorizontalScrollbarThumbDrawable(android::graphics::drawable::Drawable arg0) const;
		void setHorizontalScrollbarTrackDrawable(android::graphics::drawable::Drawable arg0) const;
		void setHovered(jboolean arg0) const;
		void setId(jint arg0) const;
		void setImportantForAccessibility(jint arg0) const;
		void setImportantForAutofill(jint arg0) const;
		void setImportantForContentCapture(jint arg0) const;
		void setKeepScreenOn(jboolean arg0) const;
		void setKeyboardNavigationCluster(jboolean arg0) const;
		void setLabelFor(jint arg0) const;
		void setLayerPaint(android::graphics::Paint arg0) const;
		void setLayerType(jint arg0, android::graphics::Paint arg1) const;
		void setLayoutDirection(jint arg0) const;
		void setLayoutParams(android::view::ViewGroup_LayoutParams arg0) const;
		void setLeft(jint arg0) const;
		void setLeftTopRightBottom(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setLongClickable(jboolean arg0) const;
		void setMinimumHeight(jint arg0) const;
		void setMinimumWidth(jint arg0) const;
		void setNestedScrollingEnabled(jboolean arg0) const;
		void setNextClusterForwardId(jint arg0) const;
		void setNextFocusDownId(jint arg0) const;
		void setNextFocusForwardId(jint arg0) const;
		void setNextFocusLeftId(jint arg0) const;
		void setNextFocusRightId(jint arg0) const;
		void setNextFocusUpId(jint arg0) const;
		void setOnApplyWindowInsetsListener(JObject arg0) const;
		void setOnCapturedPointerListener(JObject arg0) const;
		void setOnClickListener(JObject arg0) const;
		void setOnContextClickListener(JObject arg0) const;
		void setOnCreateContextMenuListener(JObject arg0) const;
		void setOnDragListener(JObject arg0) const;
		void setOnFocusChangeListener(JObject arg0) const;
		void setOnGenericMotionListener(JObject arg0) const;
		void setOnHoverListener(JObject arg0) const;
		void setOnKeyListener(JObject arg0) const;
		void setOnLongClickListener(JObject arg0) const;
		void setOnReceiveContentListener(JArray arg0, JObject arg1) const;
		void setOnScrollChangeListener(JObject arg0) const;
		void setOnSystemUiVisibilityChangeListener(JObject arg0) const;
		void setOnTouchListener(JObject arg0) const;
		void setOutlineAmbientShadowColor(jint arg0) const;
		void setOutlineProvider(android::view::ViewOutlineProvider arg0) const;
		void setOutlineSpotShadowColor(jint arg0) const;
		void setOverScrollMode(jint arg0) const;
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setPivotX(jfloat arg0) const;
		void setPivotY(jfloat arg0) const;
		void setPointerIcon(android::view::PointerIcon arg0) const;
		void setPressed(jboolean arg0) const;
		void setRenderEffect(android::graphics::RenderEffect arg0) const;
		void setRevealOnFocusHint(jboolean arg0) const;
		void setRight(jint arg0) const;
		void setRotation(jfloat arg0) const;
		void setRotationX(jfloat arg0) const;
		void setRotationY(jfloat arg0) const;
		void setSaveEnabled(jboolean arg0) const;
		void setSaveFromParentEnabled(jboolean arg0) const;
		void setScaleX(jfloat arg0) const;
		void setScaleY(jfloat arg0) const;
		void setScreenReaderFocusable(jboolean arg0) const;
		void setScrollBarDefaultDelayBeforeFade(jint arg0) const;
		void setScrollBarFadeDuration(jint arg0) const;
		void setScrollBarSize(jint arg0) const;
		void setScrollBarStyle(jint arg0) const;
		void setScrollCaptureCallback(JObject arg0) const;
		void setScrollCaptureHint(jint arg0) const;
		void setScrollContainer(jboolean arg0) const;
		void setScrollIndicators(jint arg0) const;
		void setScrollIndicators(jint arg0, jint arg1) const;
		void setScrollX(jint arg0) const;
		void setScrollY(jint arg0) const;
		void setScrollbarFadingEnabled(jboolean arg0) const;
		void setSelected(jboolean arg0) const;
		void setSoundEffectsEnabled(jboolean arg0) const;
		void setStateDescription(JString arg0) const;
		void setStateListAnimator(android::animation::StateListAnimator arg0) const;
		void setSystemGestureExclusionRects(JObject arg0) const;
		void setSystemUiVisibility(jint arg0) const;
		void setTag(JObject arg0) const;
		void setTag(jint arg0, JObject arg1) const;
		void setTextAlignment(jint arg0) const;
		void setTextDirection(jint arg0) const;
		void setTooltipText(JString arg0) const;
		void setTop(jint arg0) const;
		void setTouchDelegate(android::view::TouchDelegate arg0) const;
		void setTransitionAlpha(jfloat arg0) const;
		void setTransitionName(JString arg0) const;
		void setTransitionVisibility(jint arg0) const;
		void setTranslationX(jfloat arg0) const;
		void setTranslationY(jfloat arg0) const;
		void setTranslationZ(jfloat arg0) const;
		void setVerticalFadingEdgeEnabled(jboolean arg0) const;
		void setVerticalScrollBarEnabled(jboolean arg0) const;
		void setVerticalScrollbarPosition(jint arg0) const;
		void setVerticalScrollbarThumbDrawable(android::graphics::drawable::Drawable arg0) const;
		void setVerticalScrollbarTrackDrawable(android::graphics::drawable::Drawable arg0) const;
		void setViewTranslationCallback(JObject arg0) const;
		void setVisibility(jint arg0) const;
		void setWillNotCacheDrawing(jboolean arg0) const;
		void setWillNotDraw(jboolean arg0) const;
		void setWindowInsetsAnimationCallback(android::view::WindowInsetsAnimation_Callback arg0) const;
		void setX(jfloat arg0) const;
		void setY(jfloat arg0) const;
		void setZ(jfloat arg0) const;
		jboolean showContextMenu() const;
		jboolean showContextMenu(jfloat arg0, jfloat arg1) const;
		android::view::ActionMode startActionMode(JObject arg0) const;
		android::view::ActionMode startActionMode(JObject arg0, jint arg1) const;
		void startAnimation(android::view::animation::Animation arg0) const;
		jboolean startDrag(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, JObject arg2, jint arg3) const;
		jboolean startDragAndDrop(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, JObject arg2, jint arg3) const;
		jboolean startNestedScroll(jint arg0) const;
		void stopNestedScroll() const;
		JString toString() const;
		void transformMatrixToGlobal(android::graphics::Matrix arg0) const;
		void transformMatrixToLocal(android::graphics::Matrix arg0) const;
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0) const;
		void unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const;
		void updateDragShadow(android::view::View_DragShadowBuilder arg0) const;
		jboolean willNotCacheDrawing() const;
		jboolean willNotDraw() const;
	};
} // namespace android::view


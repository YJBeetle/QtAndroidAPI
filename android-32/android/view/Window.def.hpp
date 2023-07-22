#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::media::session
{
	class MediaController;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::transition
{
	class Scene;
}
namespace android::transition
{
	class Transition;
}
namespace android::transition
{
	class TransitionManager;
}
namespace android::view
{
	class InputEvent;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class MotionEvent;
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
	class WindowManager_LayoutParams;
}
class JString;
class JString;

namespace android::view
{
	class Window : public JObject
	{
	public:
		// Fields
		static jint DECOR_CAPTION_SHADE_AUTO();
		static jint DECOR_CAPTION_SHADE_DARK();
		static jint DECOR_CAPTION_SHADE_LIGHT();
		static jint FEATURE_ACTION_BAR();
		static jint FEATURE_ACTION_BAR_OVERLAY();
		static jint FEATURE_ACTION_MODE_OVERLAY();
		static jint FEATURE_ACTIVITY_TRANSITIONS();
		static jint FEATURE_CONTENT_TRANSITIONS();
		static jint FEATURE_CONTEXT_MENU();
		static jint FEATURE_CUSTOM_TITLE();
		static jint FEATURE_INDETERMINATE_PROGRESS();
		static jint FEATURE_LEFT_ICON();
		static jint FEATURE_NO_TITLE();
		static jint FEATURE_OPTIONS_PANEL();
		static jint FEATURE_PROGRESS();
		static jint FEATURE_RIGHT_ICON();
		static jint FEATURE_SWIPE_TO_DISMISS();
		static jint ID_ANDROID_CONTENT();
		static JString NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME();
		static jint PROGRESS_END();
		static jint PROGRESS_INDETERMINATE_OFF();
		static jint PROGRESS_INDETERMINATE_ON();
		static jint PROGRESS_SECONDARY_END();
		static jint PROGRESS_SECONDARY_START();
		static jint PROGRESS_START();
		static jint PROGRESS_VISIBILITY_OFF();
		static jint PROGRESS_VISIBILITY_ON();
		static JString STATUS_BAR_BACKGROUND_TRANSITION_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Window(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Window(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Window(android::content::Context arg0);
		
		// Methods
		static jint getDefaultFeatures(android::content::Context arg0);
		void addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void addFlags(jint arg0) const;
		void addOnFrameMetricsAvailableListener(JObject arg0, android::os::Handler arg1) const;
		void clearFlags(jint arg0) const;
		void closeAllPanels() const;
		void closePanel(jint arg0) const;
		android::view::View findViewById(jint arg0) const;
		jboolean getAllowEnterTransitionOverlap() const;
		jboolean getAllowReturnTransitionOverlap() const;
		android::view::WindowManager_LayoutParams getAttributes() const;
		JObject getCallback() const;
		jint getColorMode() const;
		android::view::Window getContainer() const;
		android::transition::Scene getContentScene() const;
		android::content::Context getContext() const;
		android::view::View getCurrentFocus() const;
		android::view::View getDecorView() const;
		android::transition::Transition getEnterTransition() const;
		android::transition::Transition getExitTransition() const;
		JObject getInsetsController() const;
		android::view::LayoutInflater getLayoutInflater() const;
		android::media::session::MediaController getMediaController() const;
		jint getNavigationBarColor() const;
		jint getNavigationBarDividerColor() const;
		android::transition::Transition getReenterTransition() const;
		android::transition::Transition getReturnTransition() const;
		JObject getRootSurfaceControl() const;
		android::transition::Transition getSharedElementEnterTransition() const;
		android::transition::Transition getSharedElementExitTransition() const;
		android::transition::Transition getSharedElementReenterTransition() const;
		android::transition::Transition getSharedElementReturnTransition() const;
		jboolean getSharedElementsUseOverlay() const;
		jint getStatusBarColor() const;
		JObject getSystemGestureExclusionRects() const;
		jlong getTransitionBackgroundFadeDuration() const;
		android::transition::TransitionManager getTransitionManager() const;
		jint getVolumeControlStream() const;
		JObject getWindowManager() const;
		android::content::res::TypedArray getWindowStyle() const;
		jboolean hasChildren() const;
		jboolean hasFeature(jint arg0) const;
		void injectInputEvent(android::view::InputEvent arg0) const;
		void invalidatePanelMenu(jint arg0) const;
		jboolean isActive() const;
		jboolean isFloating() const;
		jboolean isNavigationBarContrastEnforced() const;
		jboolean isShortcutKey(jint arg0, android::view::KeyEvent arg1) const;
		jboolean isStatusBarContrastEnforced() const;
		jboolean isWideColorGamut() const;
		void makeActive() const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void openPanel(jint arg0, android::view::KeyEvent arg1) const;
		android::view::View peekDecorView() const;
		jboolean performContextMenuIdentifierAction(jint arg0, jint arg1) const;
		jboolean performPanelIdentifierAction(jint arg0, jint arg1, jint arg2) const;
		jboolean performPanelShortcut(jint arg0, jint arg1, android::view::KeyEvent arg2, jint arg3) const;
		void registerScrollCaptureCallback(JObject arg0) const;
		void removeOnFrameMetricsAvailableListener(JObject arg0) const;
		jboolean requestFeature(jint arg0) const;
		android::view::View requireViewById(jint arg0) const;
		void restoreHierarchyState(android::os::Bundle arg0) const;
		android::os::Bundle saveHierarchyState() const;
		void setAllowEnterTransitionOverlap(jboolean arg0) const;
		void setAllowReturnTransitionOverlap(jboolean arg0) const;
		void setAttributes(android::view::WindowManager_LayoutParams arg0) const;
		void setBackgroundBlurRadius(jint arg0) const;
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setBackgroundDrawableResource(jint arg0) const;
		void setCallback(JObject arg0) const;
		void setChildDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const;
		void setChildInt(jint arg0, jint arg1) const;
		void setClipToOutline(jboolean arg0) const;
		void setColorMode(jint arg0) const;
		void setContainer(android::view::Window arg0) const;
		void setContentView(android::view::View arg0) const;
		void setContentView(jint arg0) const;
		void setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void setDecorCaptionShade(jint arg0) const;
		void setDecorFitsSystemWindows(jboolean arg0) const;
		void setDimAmount(jfloat arg0) const;
		void setElevation(jfloat arg0) const;
		void setEnterTransition(android::transition::Transition arg0) const;
		void setExitTransition(android::transition::Transition arg0) const;
		void setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const;
		void setFeatureDrawableAlpha(jint arg0, jint arg1) const;
		void setFeatureDrawableResource(jint arg0, jint arg1) const;
		void setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const;
		void setFeatureInt(jint arg0, jint arg1) const;
		void setFlags(jint arg0, jint arg1) const;
		void setFormat(jint arg0) const;
		void setGravity(jint arg0) const;
		void setHideOverlayWindows(jboolean arg0) const;
		void setIcon(jint arg0) const;
		void setLayout(jint arg0, jint arg1) const;
		void setLocalFocus(jboolean arg0, jboolean arg1) const;
		void setLogo(jint arg0) const;
		void setMediaController(android::media::session::MediaController arg0) const;
		void setNavigationBarColor(jint arg0) const;
		void setNavigationBarContrastEnforced(jboolean arg0) const;
		void setNavigationBarDividerColor(jint arg0) const;
		void setPreferMinimalPostProcessing(jboolean arg0) const;
		void setReenterTransition(android::transition::Transition arg0) const;
		void setResizingCaptionDrawable(android::graphics::drawable::Drawable arg0) const;
		void setRestrictedCaptionAreaListener(JObject arg0) const;
		void setReturnTransition(android::transition::Transition arg0) const;
		void setSharedElementEnterTransition(android::transition::Transition arg0) const;
		void setSharedElementExitTransition(android::transition::Transition arg0) const;
		void setSharedElementReenterTransition(android::transition::Transition arg0) const;
		void setSharedElementReturnTransition(android::transition::Transition arg0) const;
		void setSharedElementsUseOverlay(jboolean arg0) const;
		void setSoftInputMode(jint arg0) const;
		void setStatusBarColor(jint arg0) const;
		void setStatusBarContrastEnforced(jboolean arg0) const;
		void setSustainedPerformanceMode(jboolean arg0) const;
		void setSystemGestureExclusionRects(JObject arg0) const;
		void setTitle(JString arg0) const;
		void setTitleColor(jint arg0) const;
		void setTransitionBackgroundFadeDuration(jlong arg0) const;
		void setTransitionManager(android::transition::TransitionManager arg0) const;
		void setType(jint arg0) const;
		void setUiOptions(jint arg0) const;
		void setUiOptions(jint arg0, jint arg1) const;
		void setVolumeControlStream(jint arg0) const;
		void setWindowAnimations(jint arg0) const;
		void setWindowManager(JObject arg0, JObject arg1, JString arg2) const;
		void setWindowManager(JObject arg0, JObject arg1, JString arg2, jboolean arg3) const;
		jboolean superDispatchGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean superDispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean superDispatchKeyShortcutEvent(android::view::KeyEvent arg0) const;
		jboolean superDispatchTouchEvent(android::view::MotionEvent arg0) const;
		jboolean superDispatchTrackballEvent(android::view::MotionEvent arg0) const;
		void takeInputQueue(JObject arg0) const;
		void takeKeyEvents(jboolean arg0) const;
		void takeSurface(JObject arg0) const;
		void togglePanel(jint arg0, android::view::KeyEvent arg1) const;
		void unregisterScrollCaptureCallback(JObject arg0) const;
	};
} // namespace android::view


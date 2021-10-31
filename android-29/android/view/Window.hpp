#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::view
{
	class Window : public __JniBaseClass
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
		static jstring NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME();
		static jint PROGRESS_END();
		static jint PROGRESS_INDETERMINATE_OFF();
		static jint PROGRESS_INDETERMINATE_ON();
		static jint PROGRESS_SECONDARY_END();
		static jint PROGRESS_SECONDARY_START();
		static jint PROGRESS_START();
		static jint PROGRESS_VISIBILITY_OFF();
		static jint PROGRESS_VISIBILITY_ON();
		static jstring STATUS_BAR_BACKGROUND_TRANSITION_NAME();
		
		Window(QAndroidJniObject obj);
		// Constructors
		Window(android::content::Context arg0);
		Window() = default;
		
		// Methods
		static jint getDefaultFeatures(android::content::Context arg0);
		void addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void addFlags(jint arg0);
		void addOnFrameMetricsAvailableListener(__JniBaseClass arg0, android::os::Handler arg1);
		void clearFlags(jint arg0);
		void closeAllPanels();
		void closePanel(jint arg0);
		QAndroidJniObject findViewById(jint arg0);
		jboolean getAllowEnterTransitionOverlap();
		jboolean getAllowReturnTransitionOverlap();
		QAndroidJniObject getAttributes();
		QAndroidJniObject getCallback();
		jint getColorMode();
		QAndroidJniObject getContainer();
		QAndroidJniObject getContentScene();
		QAndroidJniObject getContext();
		QAndroidJniObject getCurrentFocus();
		QAndroidJniObject getDecorView();
		QAndroidJniObject getEnterTransition();
		QAndroidJniObject getExitTransition();
		QAndroidJniObject getLayoutInflater();
		QAndroidJniObject getMediaController();
		jint getNavigationBarColor();
		jint getNavigationBarDividerColor();
		QAndroidJniObject getReenterTransition();
		QAndroidJniObject getReturnTransition();
		QAndroidJniObject getSharedElementEnterTransition();
		QAndroidJniObject getSharedElementExitTransition();
		QAndroidJniObject getSharedElementReenterTransition();
		QAndroidJniObject getSharedElementReturnTransition();
		jboolean getSharedElementsUseOverlay();
		jint getStatusBarColor();
		QAndroidJniObject getSystemGestureExclusionRects();
		jlong getTransitionBackgroundFadeDuration();
		QAndroidJniObject getTransitionManager();
		jint getVolumeControlStream();
		QAndroidJniObject getWindowManager();
		QAndroidJniObject getWindowStyle();
		jboolean hasChildren();
		jboolean hasFeature(jint arg0);
		void injectInputEvent(android::view::InputEvent arg0);
		void invalidatePanelMenu(jint arg0);
		jboolean isActive();
		jboolean isFloating();
		jboolean isNavigationBarContrastEnforced();
		jboolean isShortcutKey(jint arg0, android::view::KeyEvent arg1);
		jboolean isStatusBarContrastEnforced();
		jboolean isWideColorGamut();
		void makeActive();
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void openPanel(jint arg0, android::view::KeyEvent arg1);
		QAndroidJniObject peekDecorView();
		jboolean performContextMenuIdentifierAction(jint arg0, jint arg1);
		jboolean performPanelIdentifierAction(jint arg0, jint arg1, jint arg2);
		jboolean performPanelShortcut(jint arg0, jint arg1, android::view::KeyEvent arg2, jint arg3);
		void removeOnFrameMetricsAvailableListener(__JniBaseClass arg0);
		jboolean requestFeature(jint arg0);
		QAndroidJniObject requireViewById(jint arg0);
		void restoreHierarchyState(android::os::Bundle arg0);
		QAndroidJniObject saveHierarchyState();
		void setAllowEnterTransitionOverlap(jboolean arg0);
		void setAllowReturnTransitionOverlap(jboolean arg0);
		void setAttributes(android::view::WindowManager_LayoutParams arg0);
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setBackgroundDrawableResource(jint arg0);
		void setCallback(__JniBaseClass arg0);
		void setChildDrawable(jint arg0, android::graphics::drawable::Drawable arg1);
		void setChildInt(jint arg0, jint arg1);
		void setClipToOutline(jboolean arg0);
		void setColorMode(jint arg0);
		void setContainer(android::view::Window arg0);
		void setContentView(android::view::View arg0);
		void setContentView(jint arg0);
		void setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void setDecorCaptionShade(jint arg0);
		void setDimAmount(jfloat arg0);
		void setElevation(jfloat arg0);
		void setEnterTransition(android::transition::Transition arg0);
		void setExitTransition(android::transition::Transition arg0);
		void setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1);
		void setFeatureDrawableAlpha(jint arg0, jint arg1);
		void setFeatureDrawableResource(jint arg0, jint arg1);
		void setFeatureDrawableUri(jint arg0, android::net::Uri arg1);
		void setFeatureInt(jint arg0, jint arg1);
		void setFlags(jint arg0, jint arg1);
		void setFormat(jint arg0);
		void setGravity(jint arg0);
		void setIcon(jint arg0);
		void setLayout(jint arg0, jint arg1);
		void setLocalFocus(jboolean arg0, jboolean arg1);
		void setLogo(jint arg0);
		void setMediaController(android::media::session::MediaController arg0);
		void setNavigationBarColor(jint arg0);
		void setNavigationBarContrastEnforced(jboolean arg0);
		void setNavigationBarDividerColor(jint arg0);
		void setReenterTransition(android::transition::Transition arg0);
		void setResizingCaptionDrawable(android::graphics::drawable::Drawable arg0);
		void setRestrictedCaptionAreaListener(__JniBaseClass arg0);
		void setReturnTransition(android::transition::Transition arg0);
		void setSharedElementEnterTransition(android::transition::Transition arg0);
		void setSharedElementExitTransition(android::transition::Transition arg0);
		void setSharedElementReenterTransition(android::transition::Transition arg0);
		void setSharedElementReturnTransition(android::transition::Transition arg0);
		void setSharedElementsUseOverlay(jboolean arg0);
		void setSoftInputMode(jint arg0);
		void setStatusBarColor(jint arg0);
		void setStatusBarContrastEnforced(jboolean arg0);
		void setSustainedPerformanceMode(jboolean arg0);
		void setSystemGestureExclusionRects(__JniBaseClass arg0);
		void setTitle(jstring arg0);
		void setTitleColor(jint arg0);
		void setTransitionBackgroundFadeDuration(jlong arg0);
		void setTransitionManager(android::transition::TransitionManager arg0);
		void setType(jint arg0);
		void setUiOptions(jint arg0);
		void setUiOptions(jint arg0, jint arg1);
		void setVolumeControlStream(jint arg0);
		void setWindowAnimations(jint arg0);
		void setWindowManager(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2);
		void setWindowManager(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2, jboolean arg3);
		jboolean superDispatchGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean superDispatchKeyEvent(android::view::KeyEvent arg0);
		jboolean superDispatchKeyShortcutEvent(android::view::KeyEvent arg0);
		jboolean superDispatchTouchEvent(android::view::MotionEvent arg0);
		jboolean superDispatchTrackballEvent(android::view::MotionEvent arg0);
		void takeInputQueue(__JniBaseClass arg0);
		void takeKeyEvents(jboolean arg0);
		void takeSurface(__JniBaseClass arg0);
		void togglePanel(jint arg0, android::view::KeyEvent arg1);
	};
} // namespace android::view


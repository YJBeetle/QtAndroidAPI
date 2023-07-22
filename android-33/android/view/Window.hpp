#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../media/session/MediaController.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../transition/Scene.def.hpp"
#include "../transition/Transition.def.hpp"
#include "../transition/TransitionManager.def.hpp"
#include "./InputEvent.def.hpp"
#include "./KeyEvent.def.hpp"
#include "./LayoutInflater.def.hpp"
#include "./MotionEvent.def.hpp"
#include "./View.def.hpp"
#include "./ViewGroup_LayoutParams.def.hpp"
#include "./WindowManager_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Window.def.hpp"

namespace android::view
{
	// Fields
	inline jint Window::DECOR_CAPTION_SHADE_AUTO()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_AUTO"
		);
	}
	inline jint Window::DECOR_CAPTION_SHADE_DARK()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_DARK"
		);
	}
	inline jint Window::DECOR_CAPTION_SHADE_LIGHT()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_LIGHT"
		);
	}
	inline jint Window::FEATURE_ACTION_BAR()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_BAR"
		);
	}
	inline jint Window::FEATURE_ACTION_BAR_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_BAR_OVERLAY"
		);
	}
	inline jint Window::FEATURE_ACTION_MODE_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_MODE_OVERLAY"
		);
	}
	inline jint Window::FEATURE_ACTIVITY_TRANSITIONS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTIVITY_TRANSITIONS"
		);
	}
	inline jint Window::FEATURE_CONTENT_TRANSITIONS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CONTENT_TRANSITIONS"
		);
	}
	inline jint Window::FEATURE_CONTEXT_MENU()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CONTEXT_MENU"
		);
	}
	inline jint Window::FEATURE_CUSTOM_TITLE()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CUSTOM_TITLE"
		);
	}
	inline jint Window::FEATURE_INDETERMINATE_PROGRESS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_INDETERMINATE_PROGRESS"
		);
	}
	inline jint Window::FEATURE_LEFT_ICON()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_LEFT_ICON"
		);
	}
	inline jint Window::FEATURE_NO_TITLE()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_NO_TITLE"
		);
	}
	inline jint Window::FEATURE_OPTIONS_PANEL()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_OPTIONS_PANEL"
		);
	}
	inline jint Window::FEATURE_PROGRESS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_PROGRESS"
		);
	}
	inline jint Window::FEATURE_RIGHT_ICON()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_RIGHT_ICON"
		);
	}
	inline jint Window::FEATURE_SWIPE_TO_DISMISS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_SWIPE_TO_DISMISS"
		);
	}
	inline jint Window::ID_ANDROID_CONTENT()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"ID_ANDROID_CONTENT"
		);
	}
	inline JString Window::NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME()
	{
		return getStaticObjectField(
			"android.view.Window",
			"NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME",
			"Ljava/lang/String;"
		);
	}
	inline jint Window::PROGRESS_END()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_END"
		);
	}
	inline jint Window::PROGRESS_INDETERMINATE_OFF()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_INDETERMINATE_OFF"
		);
	}
	inline jint Window::PROGRESS_INDETERMINATE_ON()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_INDETERMINATE_ON"
		);
	}
	inline jint Window::PROGRESS_SECONDARY_END()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_SECONDARY_END"
		);
	}
	inline jint Window::PROGRESS_SECONDARY_START()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_SECONDARY_START"
		);
	}
	inline jint Window::PROGRESS_START()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_START"
		);
	}
	inline jint Window::PROGRESS_VISIBILITY_OFF()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_VISIBILITY_OFF"
		);
	}
	inline jint Window::PROGRESS_VISIBILITY_ON()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_VISIBILITY_ON"
		);
	}
	inline JString Window::STATUS_BAR_BACKGROUND_TRANSITION_NAME()
	{
		return getStaticObjectField(
			"android.view.Window",
			"STATUS_BAR_BACKGROUND_TRANSITION_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Window::Window(android::content::Context arg0)
		: JObject(
			"android.view.Window",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Window::getDefaultFeatures(android::content::Context arg0)
	{
		return callStaticMethod<jint>(
			"android.view.Window",
			"getDefaultFeatures",
			"(Landroid/content/Context;)I",
			arg0.object()
		);
	}
	inline void Window::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Window::addFlags(jint arg0) const
	{
		callMethod<void>(
			"addFlags",
			"(I)V",
			arg0
		);
	}
	inline void Window::addOnFrameMetricsAvailableListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnFrameMetricsAvailableListener",
			"(Landroid/view/Window$OnFrameMetricsAvailableListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Window::clearFlags(jint arg0) const
	{
		callMethod<void>(
			"clearFlags",
			"(I)V",
			arg0
		);
	}
	inline void Window::closeAllPanels() const
	{
		callMethod<void>(
			"closeAllPanels",
			"()V"
		);
	}
	inline void Window::closePanel(jint arg0) const
	{
		callMethod<void>(
			"closePanel",
			"(I)V",
			arg0
		);
	}
	inline android::view::View Window::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline jboolean Window::getAllowEnterTransitionOverlap() const
	{
		return callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z"
		);
	}
	inline jboolean Window::getAllowReturnTransitionOverlap() const
	{
		return callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z"
		);
	}
	inline android::view::WindowManager_LayoutParams Window::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Landroid/view/WindowManager$LayoutParams;"
		);
	}
	inline JObject Window::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Landroid/view/Window$Callback;"
		);
	}
	inline jint Window::getColorMode() const
	{
		return callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	inline android::view::Window Window::getContainer() const
	{
		return callObjectMethod(
			"getContainer",
			"()Landroid/view/Window;"
		);
	}
	inline android::transition::Scene Window::getContentScene() const
	{
		return callObjectMethod(
			"getContentScene",
			"()Landroid/transition/Scene;"
		);
	}
	inline android::content::Context Window::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline android::view::View Window::getCurrentFocus() const
	{
		return callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	inline android::view::View Window::getDecorView() const
	{
		return callObjectMethod(
			"getDecorView",
			"()Landroid/view/View;"
		);
	}
	inline android::transition::Transition Window::getEnterTransition() const
	{
		return callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition Window::getExitTransition() const
	{
		return callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline JObject Window::getInsetsController() const
	{
		return callObjectMethod(
			"getInsetsController",
			"()Landroid/view/WindowInsetsController;"
		);
	}
	inline android::view::LayoutInflater Window::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	inline android::media::session::MediaController Window::getMediaController() const
	{
		return callObjectMethod(
			"getMediaController",
			"()Landroid/media/session/MediaController;"
		);
	}
	inline jint Window::getNavigationBarColor() const
	{
		return callMethod<jint>(
			"getNavigationBarColor",
			"()I"
		);
	}
	inline jint Window::getNavigationBarDividerColor() const
	{
		return callMethod<jint>(
			"getNavigationBarDividerColor",
			"()I"
		);
	}
	inline JObject Window::getOnBackInvokedDispatcher() const
	{
		return callObjectMethod(
			"getOnBackInvokedDispatcher",
			"()Landroid/window/OnBackInvokedDispatcher;"
		);
	}
	inline android::transition::Transition Window::getReenterTransition() const
	{
		return callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition Window::getReturnTransition() const
	{
		return callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline JObject Window::getRootSurfaceControl() const
	{
		return callObjectMethod(
			"getRootSurfaceControl",
			"()Landroid/view/AttachedSurfaceControl;"
		);
	}
	inline android::transition::Transition Window::getSharedElementEnterTransition() const
	{
		return callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition Window::getSharedElementExitTransition() const
	{
		return callObjectMethod(
			"getSharedElementExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition Window::getSharedElementReenterTransition() const
	{
		return callObjectMethod(
			"getSharedElementReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition Window::getSharedElementReturnTransition() const
	{
		return callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline jboolean Window::getSharedElementsUseOverlay() const
	{
		return callMethod<jboolean>(
			"getSharedElementsUseOverlay",
			"()Z"
		);
	}
	inline jint Window::getStatusBarColor() const
	{
		return callMethod<jint>(
			"getStatusBarColor",
			"()I"
		);
	}
	inline JObject Window::getSystemGestureExclusionRects() const
	{
		return callObjectMethod(
			"getSystemGestureExclusionRects",
			"()Ljava/util/List;"
		);
	}
	inline jlong Window::getTransitionBackgroundFadeDuration() const
	{
		return callMethod<jlong>(
			"getTransitionBackgroundFadeDuration",
			"()J"
		);
	}
	inline android::transition::TransitionManager Window::getTransitionManager() const
	{
		return callObjectMethod(
			"getTransitionManager",
			"()Landroid/transition/TransitionManager;"
		);
	}
	inline jint Window::getVolumeControlStream() const
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	inline JObject Window::getWindowManager() const
	{
		return callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	inline android::content::res::TypedArray Window::getWindowStyle() const
	{
		return callObjectMethod(
			"getWindowStyle",
			"()Landroid/content/res/TypedArray;"
		);
	}
	inline jboolean Window::hasChildren() const
	{
		return callMethod<jboolean>(
			"hasChildren",
			"()Z"
		);
	}
	inline jboolean Window::hasFeature(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasFeature",
			"(I)Z",
			arg0
		);
	}
	inline void Window::injectInputEvent(android::view::InputEvent arg0) const
	{
		callMethod<void>(
			"injectInputEvent",
			"(Landroid/view/InputEvent;)V",
			arg0.object()
		);
	}
	inline void Window::invalidatePanelMenu(jint arg0) const
	{
		callMethod<void>(
			"invalidatePanelMenu",
			"(I)V",
			arg0
		);
	}
	inline jboolean Window::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline jboolean Window::isFloating() const
	{
		return callMethod<jboolean>(
			"isFloating",
			"()Z"
		);
	}
	inline jboolean Window::isNavigationBarContrastEnforced() const
	{
		return callMethod<jboolean>(
			"isNavigationBarContrastEnforced",
			"()Z"
		);
	}
	inline jboolean Window::isShortcutKey(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"isShortcutKey",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Window::isStatusBarContrastEnforced() const
	{
		return callMethod<jboolean>(
			"isStatusBarContrastEnforced",
			"()Z"
		);
	}
	inline jboolean Window::isWideColorGamut() const
	{
		return callMethod<jboolean>(
			"isWideColorGamut",
			"()Z"
		);
	}
	inline void Window::makeActive() const
	{
		callMethod<void>(
			"makeActive",
			"()V"
		);
	}
	inline void Window::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void Window::openPanel(jint arg0, android::view::KeyEvent arg1) const
	{
		callMethod<void>(
			"openPanel",
			"(ILandroid/view/KeyEvent;)V",
			arg0,
			arg1.object()
		);
	}
	inline android::view::View Window::peekDecorView() const
	{
		return callObjectMethod(
			"peekDecorView",
			"()Landroid/view/View;"
		);
	}
	inline jboolean Window::performContextMenuIdentifierAction(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"performContextMenuIdentifierAction",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Window::performPanelIdentifierAction(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"performPanelIdentifierAction",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean Window::performPanelShortcut(jint arg0, jint arg1, android::view::KeyEvent arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"performPanelShortcut",
			"(IILandroid/view/KeyEvent;I)Z",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline void Window::registerScrollCaptureCallback(JObject arg0) const
	{
		callMethod<void>(
			"registerScrollCaptureCallback",
			"(Landroid/view/ScrollCaptureCallback;)V",
			arg0.object()
		);
	}
	inline void Window::removeOnFrameMetricsAvailableListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnFrameMetricsAvailableListener",
			"(Landroid/view/Window$OnFrameMetricsAvailableListener;)V",
			arg0.object()
		);
	}
	inline jboolean Window::requestFeature(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestFeature",
			"(I)Z",
			arg0
		);
	}
	inline android::view::View Window::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void Window::restoreHierarchyState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline android::os::Bundle Window::saveHierarchyState() const
	{
		return callObjectMethod(
			"saveHierarchyState",
			"()Landroid/os/Bundle;"
		);
	}
	inline void Window::setAllowEnterTransitionOverlap(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setAllowReturnTransitionOverlap(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setAttributes(android::view::WindowManager_LayoutParams arg0) const
	{
		callMethod<void>(
			"setAttributes",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	inline void Window::setBackgroundBlurRadius(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundBlurRadius",
			"(I)V",
			arg0
		);
	}
	inline void Window::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Window::setBackgroundDrawableResource(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawableResource",
			"(I)V",
			arg0
		);
	}
	inline void Window::setCallback(JObject arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/view/Window$Callback;)V",
			arg0.object()
		);
	}
	inline void Window::setChildDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setChildDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Window::setChildInt(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setChildInt",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Window::setClipToOutline(jboolean arg0) const
	{
		callMethod<void>(
			"setClipToOutline",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setColorMode(jint arg0) const
	{
		callMethod<void>(
			"setColorMode",
			"(I)V",
			arg0
		);
	}
	inline void Window::setContainer(android::view::Window arg0) const
	{
		callMethod<void>(
			"setContainer",
			"(Landroid/view/Window;)V",
			arg0.object()
		);
	}
	inline void Window::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void Window::setContentView(jint arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	inline void Window::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Window::setDecorCaptionShade(jint arg0) const
	{
		callMethod<void>(
			"setDecorCaptionShade",
			"(I)V",
			arg0
		);
	}
	inline void Window::setDecorFitsSystemWindows(jboolean arg0) const
	{
		callMethod<void>(
			"setDecorFitsSystemWindows",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setDimAmount(jfloat arg0) const
	{
		callMethod<void>(
			"setDimAmount",
			"(F)V",
			arg0
		);
	}
	inline void Window::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	inline void Window::setEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Window::setExitTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Window::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Window::setFeatureDrawableAlpha(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Window::setFeatureDrawableResource(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Window::setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Window::setFeatureInt(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureInt",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Window::setFlags(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFlags",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Window::setFormat(jint arg0) const
	{
		callMethod<void>(
			"setFormat",
			"(I)V",
			arg0
		);
	}
	inline void Window::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void Window::setHideOverlayWindows(jboolean arg0) const
	{
		callMethod<void>(
			"setHideOverlayWindows",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setIcon(jint arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	inline void Window::setLayout(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Window::setLocalFocus(jboolean arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setLocalFocus",
			"(ZZ)V",
			arg0,
			arg1
		);
	}
	inline void Window::setLogo(jint arg0) const
	{
		callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	inline void Window::setMediaController(android::media::session::MediaController arg0) const
	{
		callMethod<void>(
			"setMediaController",
			"(Landroid/media/session/MediaController;)V",
			arg0.object()
		);
	}
	inline void Window::setNavigationBarColor(jint arg0) const
	{
		callMethod<void>(
			"setNavigationBarColor",
			"(I)V",
			arg0
		);
	}
	inline void Window::setNavigationBarContrastEnforced(jboolean arg0) const
	{
		callMethod<void>(
			"setNavigationBarContrastEnforced",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setNavigationBarDividerColor(jint arg0) const
	{
		callMethod<void>(
			"setNavigationBarDividerColor",
			"(I)V",
			arg0
		);
	}
	inline void Window::setPreferMinimalPostProcessing(jboolean arg0) const
	{
		callMethod<void>(
			"setPreferMinimalPostProcessing",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setReenterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Window::setResizingCaptionDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setResizingCaptionDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Window::setRestrictedCaptionAreaListener(JObject arg0) const
	{
		callMethod<void>(
			"setRestrictedCaptionAreaListener",
			"(Landroid/view/Window$OnRestrictedCaptionAreaChangedListener;)V",
			arg0.object()
		);
	}
	inline void Window::setReturnTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Window::setSharedElementEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Window::setSharedElementExitTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Window::setSharedElementReenterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Window::setSharedElementReturnTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Window::setSharedElementsUseOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setSharedElementsUseOverlay",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setSoftInputMode(jint arg0) const
	{
		callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	inline void Window::setStatusBarColor(jint arg0) const
	{
		callMethod<void>(
			"setStatusBarColor",
			"(I)V",
			arg0
		);
	}
	inline void Window::setStatusBarContrastEnforced(jboolean arg0) const
	{
		callMethod<void>(
			"setStatusBarContrastEnforced",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setSustainedPerformanceMode(jboolean arg0) const
	{
		callMethod<void>(
			"setSustainedPerformanceMode",
			"(Z)V",
			arg0
		);
	}
	inline void Window::setSystemGestureExclusionRects(JObject arg0) const
	{
		callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Window::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Window::setTitleColor(jint arg0) const
	{
		callMethod<void>(
			"setTitleColor",
			"(I)V",
			arg0
		);
	}
	inline void Window::setTransitionBackgroundFadeDuration(jlong arg0) const
	{
		callMethod<void>(
			"setTransitionBackgroundFadeDuration",
			"(J)V",
			arg0
		);
	}
	inline void Window::setTransitionManager(android::transition::TransitionManager arg0) const
	{
		callMethod<void>(
			"setTransitionManager",
			"(Landroid/transition/TransitionManager;)V",
			arg0.object()
		);
	}
	inline void Window::setType(jint arg0) const
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	inline void Window::setUiOptions(jint arg0) const
	{
		callMethod<void>(
			"setUiOptions",
			"(I)V",
			arg0
		);
	}
	inline void Window::setUiOptions(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setUiOptions",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Window::setVolumeControlStream(jint arg0) const
	{
		callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	inline void Window::setWindowAnimations(jint arg0) const
	{
		callMethod<void>(
			"setWindowAnimations",
			"(I)V",
			arg0
		);
	}
	inline void Window::setWindowManager(JObject arg0, JObject arg1, JString arg2) const
	{
		callMethod<void>(
			"setWindowManager",
			"(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void Window::setWindowManager(JObject arg0, JObject arg1, JString arg2, jboolean arg3) const
	{
		callMethod<void>(
			"setWindowManager",
			"(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3
		);
	}
	inline jboolean Window::superDispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Window::superDispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Window::superDispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Window::superDispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Window::superDispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void Window::takeInputQueue(JObject arg0) const
	{
		callMethod<void>(
			"takeInputQueue",
			"(Landroid/view/InputQueue$Callback;)V",
			arg0.object()
		);
	}
	inline void Window::takeKeyEvents(jboolean arg0) const
	{
		callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	inline void Window::takeSurface(JObject arg0) const
	{
		callMethod<void>(
			"takeSurface",
			"(Landroid/view/SurfaceHolder$Callback2;)V",
			arg0.object()
		);
	}
	inline void Window::togglePanel(jint arg0, android::view::KeyEvent arg1) const
	{
		callMethod<void>(
			"togglePanel",
			"(ILandroid/view/KeyEvent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Window::unregisterScrollCaptureCallback(JObject arg0) const
	{
		callMethod<void>(
			"unregisterScrollCaptureCallback",
			"(Landroid/view/ScrollCaptureCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif

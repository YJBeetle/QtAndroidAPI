#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/TypedArray.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../media/session/MediaController.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../transition/Scene.hpp"
#include "../transition/Transition.hpp"
#include "../transition/TransitionManager.hpp"
#include "./InputEvent.hpp"
#include "./KeyEvent.hpp"
#include "./LayoutInflater.hpp"
#include "./MotionEvent.hpp"
#include "./View.hpp"
#include "./ViewGroup_LayoutParams.hpp"
#include "./WindowManager_LayoutParams.hpp"
#include "./Window.hpp"

namespace android::view
{
	// Fields
	jint Window::DECOR_CAPTION_SHADE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_AUTO"
		);
	}
	jint Window::DECOR_CAPTION_SHADE_DARK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_DARK"
		);
	}
	jint Window::DECOR_CAPTION_SHADE_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_LIGHT"
		);
	}
	jint Window::FEATURE_ACTION_BAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_BAR"
		);
	}
	jint Window::FEATURE_ACTION_BAR_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_BAR_OVERLAY"
		);
	}
	jint Window::FEATURE_ACTION_MODE_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_MODE_OVERLAY"
		);
	}
	jint Window::FEATURE_ACTIVITY_TRANSITIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTIVITY_TRANSITIONS"
		);
	}
	jint Window::FEATURE_CONTENT_TRANSITIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CONTENT_TRANSITIONS"
		);
	}
	jint Window::FEATURE_CONTEXT_MENU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CONTEXT_MENU"
		);
	}
	jint Window::FEATURE_CUSTOM_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CUSTOM_TITLE"
		);
	}
	jint Window::FEATURE_INDETERMINATE_PROGRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_INDETERMINATE_PROGRESS"
		);
	}
	jint Window::FEATURE_LEFT_ICON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_LEFT_ICON"
		);
	}
	jint Window::FEATURE_NO_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_NO_TITLE"
		);
	}
	jint Window::FEATURE_OPTIONS_PANEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_OPTIONS_PANEL"
		);
	}
	jint Window::FEATURE_PROGRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_PROGRESS"
		);
	}
	jint Window::FEATURE_RIGHT_ICON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_RIGHT_ICON"
		);
	}
	jint Window::FEATURE_SWIPE_TO_DISMISS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_SWIPE_TO_DISMISS"
		);
	}
	jint Window::ID_ANDROID_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"ID_ANDROID_CONTENT"
		);
	}
	jstring Window::NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Window",
			"NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Window::PROGRESS_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_END"
		);
	}
	jint Window::PROGRESS_INDETERMINATE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_INDETERMINATE_OFF"
		);
	}
	jint Window::PROGRESS_INDETERMINATE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_INDETERMINATE_ON"
		);
	}
	jint Window::PROGRESS_SECONDARY_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_SECONDARY_END"
		);
	}
	jint Window::PROGRESS_SECONDARY_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_SECONDARY_START"
		);
	}
	jint Window::PROGRESS_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_START"
		);
	}
	jint Window::PROGRESS_VISIBILITY_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_VISIBILITY_OFF"
		);
	}
	jint Window::PROGRESS_VISIBILITY_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_VISIBILITY_ON"
		);
	}
	jstring Window::STATUS_BAR_BACKGROUND_TRANSITION_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Window",
			"STATUS_BAR_BACKGROUND_TRANSITION_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Window::Window(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Window::Window(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.Window",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Window::getDefaultFeatures(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.Window",
			"getDefaultFeatures",
			"(Landroid/content/Context;)I",
			arg0.__jniObject().object()
		);
	}
	void Window::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Window::addFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"addFlags",
			"(I)V",
			arg0
		);
	}
	void Window::addOnFrameMetricsAvailableListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnFrameMetricsAvailableListener",
			"(Landroid/view/Window$OnFrameMetricsAvailableListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Window::clearFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"clearFlags",
			"(I)V",
			arg0
		);
	}
	void Window::closeAllPanels()
	{
		__thiz.callMethod<void>(
			"closeAllPanels",
			"()V"
		);
	}
	void Window::closePanel(jint arg0)
	{
		__thiz.callMethod<void>(
			"closePanel",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Window::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean Window::getAllowEnterTransitionOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z"
		);
	}
	jboolean Window::getAllowReturnTransitionOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z"
		);
	}
	QAndroidJniObject Window::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Landroid/view/WindowManager$LayoutParams;"
		);
	}
	QAndroidJniObject Window::getCallback()
	{
		return __thiz.callObjectMethod(
			"getCallback",
			"()Landroid/view/Window$Callback;"
		);
	}
	jint Window::getColorMode()
	{
		return __thiz.callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	QAndroidJniObject Window::getContainer()
	{
		return __thiz.callObjectMethod(
			"getContainer",
			"()Landroid/view/Window;"
		);
	}
	QAndroidJniObject Window::getContentScene()
	{
		return __thiz.callObjectMethod(
			"getContentScene",
			"()Landroid/transition/Scene;"
		);
	}
	QAndroidJniObject Window::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject Window::getCurrentFocus()
	{
		return __thiz.callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject Window::getDecorView()
	{
		return __thiz.callObjectMethod(
			"getDecorView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject Window::getEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Window::getExitTransition()
	{
		return __thiz.callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Window::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	QAndroidJniObject Window::getMediaController()
	{
		return __thiz.callObjectMethod(
			"getMediaController",
			"()Landroid/media/session/MediaController;"
		);
	}
	jint Window::getNavigationBarColor()
	{
		return __thiz.callMethod<jint>(
			"getNavigationBarColor",
			"()I"
		);
	}
	jint Window::getNavigationBarDividerColor()
	{
		return __thiz.callMethod<jint>(
			"getNavigationBarDividerColor",
			"()I"
		);
	}
	QAndroidJniObject Window::getReenterTransition()
	{
		return __thiz.callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Window::getReturnTransition()
	{
		return __thiz.callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Window::getSharedElementEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Window::getSharedElementExitTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Window::getSharedElementReenterTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Window::getSharedElementReturnTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	jboolean Window::getSharedElementsUseOverlay()
	{
		return __thiz.callMethod<jboolean>(
			"getSharedElementsUseOverlay",
			"()Z"
		);
	}
	jint Window::getStatusBarColor()
	{
		return __thiz.callMethod<jint>(
			"getStatusBarColor",
			"()I"
		);
	}
	QAndroidJniObject Window::getSystemGestureExclusionRects()
	{
		return __thiz.callObjectMethod(
			"getSystemGestureExclusionRects",
			"()Ljava/util/List;"
		);
	}
	jlong Window::getTransitionBackgroundFadeDuration()
	{
		return __thiz.callMethod<jlong>(
			"getTransitionBackgroundFadeDuration",
			"()J"
		);
	}
	QAndroidJniObject Window::getTransitionManager()
	{
		return __thiz.callObjectMethod(
			"getTransitionManager",
			"()Landroid/transition/TransitionManager;"
		);
	}
	jint Window::getVolumeControlStream()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	QAndroidJniObject Window::getWindowManager()
	{
		return __thiz.callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	QAndroidJniObject Window::getWindowStyle()
	{
		return __thiz.callObjectMethod(
			"getWindowStyle",
			"()Landroid/content/res/TypedArray;"
		);
	}
	jboolean Window::hasChildren()
	{
		return __thiz.callMethod<jboolean>(
			"hasChildren",
			"()Z"
		);
	}
	jboolean Window::hasFeature(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasFeature",
			"(I)Z",
			arg0
		);
	}
	void Window::injectInputEvent(android::view::InputEvent arg0)
	{
		__thiz.callMethod<void>(
			"injectInputEvent",
			"(Landroid/view/InputEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::invalidatePanelMenu(jint arg0)
	{
		__thiz.callMethod<void>(
			"invalidatePanelMenu",
			"(I)V",
			arg0
		);
	}
	jboolean Window::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean Window::isFloating()
	{
		return __thiz.callMethod<jboolean>(
			"isFloating",
			"()Z"
		);
	}
	jboolean Window::isNavigationBarContrastEnforced()
	{
		return __thiz.callMethod<jboolean>(
			"isNavigationBarContrastEnforced",
			"()Z"
		);
	}
	jboolean Window::isShortcutKey(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isShortcutKey",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Window::isStatusBarContrastEnforced()
	{
		return __thiz.callMethod<jboolean>(
			"isStatusBarContrastEnforced",
			"()Z"
		);
	}
	jboolean Window::isWideColorGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideColorGamut",
			"()Z"
		);
	}
	void Window::makeActive()
	{
		__thiz.callMethod<void>(
			"makeActive",
			"()V"
		);
	}
	void Window::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::openPanel(jint arg0, android::view::KeyEvent arg1)
	{
		__thiz.callMethod<void>(
			"openPanel",
			"(ILandroid/view/KeyEvent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Window::peekDecorView()
	{
		return __thiz.callObjectMethod(
			"peekDecorView",
			"()Landroid/view/View;"
		);
	}
	jboolean Window::performContextMenuIdentifierAction(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performContextMenuIdentifierAction",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean Window::performPanelIdentifierAction(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performPanelIdentifierAction",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Window::performPanelShortcut(jint arg0, jint arg1, android::view::KeyEvent arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"performPanelShortcut",
			"(IILandroid/view/KeyEvent;I)Z",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Window::removeOnFrameMetricsAvailableListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnFrameMetricsAvailableListener",
			"(Landroid/view/Window$OnFrameMetricsAvailableListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Window::requestFeature(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestFeature",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject Window::requireViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Window::restoreHierarchyState(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Window::saveHierarchyState()
	{
		return __thiz.callObjectMethod(
			"saveHierarchyState",
			"()Landroid/os/Bundle;"
		);
	}
	void Window::setAllowEnterTransitionOverlap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Window::setAllowReturnTransitionOverlap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Window::setAttributes(android::view::WindowManager_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"setAttributes",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setBackgroundDrawableResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawableResource",
			"(I)V",
			arg0
		);
	}
	void Window::setCallback(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/view/Window$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setChildDrawable(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setChildDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Window::setChildInt(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChildInt",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setClipToOutline(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClipToOutline",
			"(Z)V",
			arg0
		);
	}
	void Window::setColorMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColorMode",
			"(I)V",
			arg0
		);
	}
	void Window::setContainer(android::view::Window arg0)
	{
		__thiz.callMethod<void>(
			"setContainer",
			"(Landroid/view/Window;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setContentView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setContentView(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void Window::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Window::setDecorCaptionShade(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDecorCaptionShade",
			"(I)V",
			arg0
		);
	}
	void Window::setDimAmount(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setDimAmount",
			"(F)V",
			arg0
		);
	}
	void Window::setElevation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void Window::setEnterTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setExitTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Window::setFeatureDrawableAlpha(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setFeatureDrawableResource(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setFeatureDrawableUri(jint arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Window::setFeatureInt(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureInt",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setFlags(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFlags",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setFormat(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFormat",
			"(I)V",
			arg0
		);
	}
	void Window::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void Window::setIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void Window::setLayout(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setLocalFocus(jboolean arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setLocalFocus",
			"(ZZ)V",
			arg0,
			arg1
		);
	}
	void Window::setLogo(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	void Window::setMediaController(android::media::session::MediaController arg0)
	{
		__thiz.callMethod<void>(
			"setMediaController",
			"(Landroid/media/session/MediaController;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setNavigationBarColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationBarColor",
			"(I)V",
			arg0
		);
	}
	void Window::setNavigationBarContrastEnforced(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationBarContrastEnforced",
			"(Z)V",
			arg0
		);
	}
	void Window::setNavigationBarDividerColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationBarDividerColor",
			"(I)V",
			arg0
		);
	}
	void Window::setReenterTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setResizingCaptionDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setResizingCaptionDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setRestrictedCaptionAreaListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRestrictedCaptionAreaListener",
			"(Landroid/view/Window$OnRestrictedCaptionAreaChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setReturnTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setSharedElementEnterTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setSharedElementExitTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setSharedElementReenterTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setSharedElementReturnTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setSharedElementsUseOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementsUseOverlay",
			"(Z)V",
			arg0
		);
	}
	void Window::setSoftInputMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	void Window::setStatusBarColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStatusBarColor",
			"(I)V",
			arg0
		);
	}
	void Window::setStatusBarContrastEnforced(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStatusBarContrastEnforced",
			"(Z)V",
			arg0
		);
	}
	void Window::setSustainedPerformanceMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSustainedPerformanceMode",
			"(Z)V",
			arg0
		);
	}
	void Window::setSystemGestureExclusionRects(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Window::setTitleColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleColor",
			"(I)V",
			arg0
		);
	}
	void Window::setTransitionBackgroundFadeDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionBackgroundFadeDuration",
			"(J)V",
			arg0
		);
	}
	void Window::setTransitionManager(android::transition::TransitionManager arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionManager",
			"(Landroid/transition/TransitionManager;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::setType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	void Window::setUiOptions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setUiOptions",
			"(I)V",
			arg0
		);
	}
	void Window::setUiOptions(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setUiOptions",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setVolumeControlStream(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	void Window::setWindowAnimations(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWindowAnimations",
			"(I)V",
			arg0
		);
	}
	void Window::setWindowManager(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setWindowManager",
			"(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Window::setWindowManager(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"setWindowManager",
			"(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jboolean Window::superDispatchGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Window::superDispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Window::superDispatchKeyShortcutEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Window::superDispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Window::superDispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Window::takeInputQueue(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"takeInputQueue",
			"(Landroid/view/InputQueue$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::takeKeyEvents(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	void Window::takeSurface(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"takeSurface",
			"(Landroid/view/SurfaceHolder$Callback2;)V",
			arg0.__jniObject().object()
		);
	}
	void Window::togglePanel(jint arg0, android::view::KeyEvent arg1)
	{
		__thiz.callMethod<void>(
			"togglePanel",
			"(ILandroid/view/KeyEvent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::view


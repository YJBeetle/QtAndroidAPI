#pragma once

#ifndef ANDROID_VIEW_WINDOW
#define ANDROID_VIEW_WINDOW

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class WindowManager_LayoutParams;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::transition
{
	class Scene;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::media::session
{
	class MediaController;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class InputEvent;
}
namespace __jni_impl::android::transition
{
	class TransitionManager;
}
namespace __jni_impl::android::transition
{
	class Transition;
}

namespace __jni_impl::android::view
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
		static QAndroidJniObject NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME();
		static jint PROGRESS_END();
		static jint PROGRESS_INDETERMINATE_OFF();
		static jint PROGRESS_INDETERMINATE_ON();
		static jint PROGRESS_SECONDARY_END();
		static jint PROGRESS_SECONDARY_START();
		static jint PROGRESS_START();
		static jint PROGRESS_VISIBILITY_OFF();
		static jint PROGRESS_VISIBILITY_ON();
		static QAndroidJniObject STATUS_BAR_BACKGROUND_TRANSITION_NAME();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getContext();
		QAndroidJniObject getAttributes();
		jboolean isActive();
		void setFormat(jint arg0);
		jboolean isFloating();
		void setGravity(jint arg0);
		void setType(jint arg0);
		void setFlags(jint arg0, jint arg1);
		void addFlags(jint arg0);
		void setIcon(jint arg0);
		jboolean isWideColorGamut();
		void setCallback(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCallback();
		QAndroidJniObject getWindowManager();
		QAndroidJniObject getCurrentFocus();
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		QAndroidJniObject findViewById(jint arg0);
		QAndroidJniObject requireViewById(jint arg0);
		void setContentView(jint arg0);
		void setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void setContentView(__jni_impl::android::view::View arg0);
		void addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		QAndroidJniObject getContentScene();
		void takeKeyEvents(jboolean arg0);
		void setFeatureDrawableResource(jint arg0, jint arg1);
		void setFeatureDrawableUri(jint arg0, __jni_impl::android::net::Uri arg1);
		void setFeatureDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setFeatureDrawableAlpha(jint arg0, jint arg1);
		QAndroidJniObject getLayoutInflater();
		void setTitle(jstring arg0);
		void setTitleColor(jint arg0);
		void setVolumeControlStream(jint arg0);
		jint getVolumeControlStream();
		void setMediaController(__jni_impl::android::media::session::MediaController arg0);
		QAndroidJniObject getMediaController();
		void setSystemGestureExclusionRects(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getSystemGestureExclusionRects();
		void setElevation(jfloat arg0);
		void setClipToOutline(jboolean arg0);
		QAndroidJniObject saveHierarchyState();
		void restoreHierarchyState(__jni_impl::android::os::Bundle arg0);
		void setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getWindowStyle();
		void setContainer(__jni_impl::android::view::Window arg0);
		QAndroidJniObject getContainer();
		jboolean hasChildren();
		void setWindowManager(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jboolean arg3);
		void setWindowManager(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		void addOnFrameMetricsAvailableListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void removeOnFrameMetricsAvailableListener(__jni_impl::__JniBaseClass arg0);
		void setRestrictedCaptionAreaListener(__jni_impl::__JniBaseClass arg0);
		void takeSurface(__jni_impl::__JniBaseClass arg0);
		void takeInputQueue(__jni_impl::__JniBaseClass arg0);
		void setLayout(jint arg0, jint arg1);
		void setWindowAnimations(jint arg0);
		void setSoftInputMode(jint arg0);
		void clearFlags(jint arg0);
		void setColorMode(jint arg0);
		jint getColorMode();
		void setDimAmount(jfloat arg0);
		void setAttributes(__jni_impl::android::view::WindowManager_LayoutParams arg0);
		void setSustainedPerformanceMode(jboolean arg0);
		jboolean requestFeature(jint arg0);
		void makeActive();
		void openPanel(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void closePanel(jint arg0);
		void togglePanel(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void invalidatePanelMenu(jint arg0);
		jboolean performPanelShortcut(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2, jint arg3);
		jboolean performPanelIdentifierAction(jint arg0, jint arg1, jint arg2);
		void closeAllPanels();
		jboolean performContextMenuIdentifierAction(jint arg0, jint arg1);
		void setBackgroundDrawableResource(jint arg0);
		void setFeatureInt(jint arg0, jint arg1);
		jboolean superDispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean superDispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean superDispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean superDispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean superDispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		QAndroidJniObject getDecorView();
		QAndroidJniObject peekDecorView();
		static jint getDefaultFeatures(__jni_impl::android::content::Context arg0);
		jboolean hasFeature(jint arg0);
		void setChildDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setChildInt(jint arg0, jint arg1);
		jboolean isShortcutKey(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void setUiOptions(jint arg0);
		void setUiOptions(jint arg0, jint arg1);
		void setLogo(jint arg0);
		void setLocalFocus(jboolean arg0, jboolean arg1);
		void injectInputEvent(__jni_impl::android::view::InputEvent arg0);
		QAndroidJniObject getTransitionManager();
		void setTransitionManager(__jni_impl::android::transition::TransitionManager arg0);
		void setEnterTransition(__jni_impl::android::transition::Transition arg0);
		void setReturnTransition(__jni_impl::android::transition::Transition arg0);
		void setExitTransition(__jni_impl::android::transition::Transition arg0);
		void setReenterTransition(__jni_impl::android::transition::Transition arg0);
		QAndroidJniObject getEnterTransition();
		QAndroidJniObject getReturnTransition();
		QAndroidJniObject getExitTransition();
		QAndroidJniObject getReenterTransition();
		void setSharedElementEnterTransition(__jni_impl::android::transition::Transition arg0);
		void setSharedElementReturnTransition(__jni_impl::android::transition::Transition arg0);
		QAndroidJniObject getSharedElementEnterTransition();
		QAndroidJniObject getSharedElementReturnTransition();
		void setSharedElementExitTransition(__jni_impl::android::transition::Transition arg0);
		void setSharedElementReenterTransition(__jni_impl::android::transition::Transition arg0);
		QAndroidJniObject getSharedElementExitTransition();
		QAndroidJniObject getSharedElementReenterTransition();
		void setAllowEnterTransitionOverlap(jboolean arg0);
		jboolean getAllowEnterTransitionOverlap();
		void setAllowReturnTransitionOverlap(jboolean arg0);
		jboolean getAllowReturnTransitionOverlap();
		jlong getTransitionBackgroundFadeDuration();
		void setTransitionBackgroundFadeDuration(jlong arg0);
		jboolean getSharedElementsUseOverlay();
		void setSharedElementsUseOverlay(jboolean arg0);
		jint getStatusBarColor();
		void setStatusBarColor(jint arg0);
		jint getNavigationBarColor();
		void setNavigationBarColor(jint arg0);
		void setNavigationBarDividerColor(jint arg0);
		jint getNavigationBarDividerColor();
		void setStatusBarContrastEnforced(jboolean arg0);
		jboolean isStatusBarContrastEnforced();
		void setNavigationBarContrastEnforced(jboolean arg0);
		jboolean isNavigationBarContrastEnforced();
		void setDecorCaptionShade(jint arg0);
		void setResizingCaptionDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "WindowManager_LayoutParams.hpp"
#include "View.hpp"
#include "../content/res/Configuration.hpp"
#include "ViewGroup_LayoutParams.hpp"
#include "../transition/Scene.hpp"
#include "../net/Uri.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "LayoutInflater.hpp"
#include "../media/session/MediaController.hpp"
#include "../os/Bundle.hpp"
#include "../content/res/TypedArray.hpp"
#include "../os/Handler.hpp"
#include "KeyEvent.hpp"
#include "MotionEvent.hpp"
#include "InputEvent.hpp"
#include "../transition/TransitionManager.hpp"
#include "../transition/Transition.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint Window::DECOR_CAPTION_SHADE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_AUTO");
	}
	jint Window::DECOR_CAPTION_SHADE_DARK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_DARK");
	}
	jint Window::DECOR_CAPTION_SHADE_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_LIGHT");
	}
	jint Window::FEATURE_ACTION_BAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_BAR");
	}
	jint Window::FEATURE_ACTION_BAR_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_BAR_OVERLAY");
	}
	jint Window::FEATURE_ACTION_MODE_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_MODE_OVERLAY");
	}
	jint Window::FEATURE_ACTIVITY_TRANSITIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTIVITY_TRANSITIONS");
	}
	jint Window::FEATURE_CONTENT_TRANSITIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CONTENT_TRANSITIONS");
	}
	jint Window::FEATURE_CONTEXT_MENU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CONTEXT_MENU");
	}
	jint Window::FEATURE_CUSTOM_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CUSTOM_TITLE");
	}
	jint Window::FEATURE_INDETERMINATE_PROGRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_INDETERMINATE_PROGRESS");
	}
	jint Window::FEATURE_LEFT_ICON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_LEFT_ICON");
	}
	jint Window::FEATURE_NO_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_NO_TITLE");
	}
	jint Window::FEATURE_OPTIONS_PANEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_OPTIONS_PANEL");
	}
	jint Window::FEATURE_PROGRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_PROGRESS");
	}
	jint Window::FEATURE_RIGHT_ICON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_RIGHT_ICON");
	}
	jint Window::FEATURE_SWIPE_TO_DISMISS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"FEATURE_SWIPE_TO_DISMISS");
	}
	jint Window::ID_ANDROID_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"ID_ANDROID_CONTENT");
	}
	QAndroidJniObject Window::NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Window",
			"NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME",
			"Ljava/lang/String;");
	}
	jint Window::PROGRESS_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_END");
	}
	jint Window::PROGRESS_INDETERMINATE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_INDETERMINATE_OFF");
	}
	jint Window::PROGRESS_INDETERMINATE_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_INDETERMINATE_ON");
	}
	jint Window::PROGRESS_SECONDARY_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_SECONDARY_END");
	}
	jint Window::PROGRESS_SECONDARY_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_SECONDARY_START");
	}
	jint Window::PROGRESS_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_START");
	}
	jint Window::PROGRESS_VISIBILITY_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_VISIBILITY_OFF");
	}
	jint Window::PROGRESS_VISIBILITY_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_VISIBILITY_ON");
	}
	QAndroidJniObject Window::STATUS_BAR_BACKGROUND_TRANSITION_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.Window",
			"STATUS_BAR_BACKGROUND_TRANSITION_NAME",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Window::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.Window",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Window::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;");
	}
	QAndroidJniObject Window::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Landroid/view/WindowManager$LayoutParams;");
	}
	jboolean Window::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z");
	}
	void Window::setFormat(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFormat",
			"(I)V",
			arg0);
	}
	jboolean Window::isFloating()
	{
		return __thiz.callMethod<jboolean>(
			"isFloating",
			"()Z");
	}
	void Window::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0);
	}
	void Window::setType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setType",
			"(I)V",
			arg0);
	}
	void Window::setFlags(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFlags",
			"(II)V",
			arg0,
			arg1);
	}
	void Window::addFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"addFlags",
			"(I)V",
			arg0);
	}
	void Window::setIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(I)V",
			arg0);
	}
	jboolean Window::isWideColorGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideColorGamut",
			"()Z");
	}
	void Window::setCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/view/Window$Callback;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getCallback()
	{
		return __thiz.callObjectMethod(
			"getCallback",
			"()Landroid/view/Window$Callback;");
	}
	QAndroidJniObject Window::getWindowManager()
	{
		return __thiz.callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;");
	}
	QAndroidJniObject Window::getCurrentFocus()
	{
		return __thiz.callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;");
	}
	void Window::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0);
	}
	QAndroidJniObject Window::requireViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0);
	}
	void Window::setContentView(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(I)V",
			arg0);
	}
	void Window::setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Window::setContentView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void Window::addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Window::getContentScene()
	{
		return __thiz.callObjectMethod(
			"getContentScene",
			"()Landroid/transition/Scene;");
	}
	void Window::takeKeyEvents(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0);
	}
	void Window::setFeatureDrawableResource(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1);
	}
	void Window::setFeatureDrawableUri(jint arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Window::setFeatureDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Window::setFeatureDrawableAlpha(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1);
	}
	QAndroidJniObject Window::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;");
	}
	void Window::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void Window::setTitleColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleColor",
			"(I)V",
			arg0);
	}
	void Window::setVolumeControlStream(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0);
	}
	jint Window::getVolumeControlStream()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControlStream",
			"()I");
	}
	void Window::setMediaController(__jni_impl::android::media::session::MediaController arg0)
	{
		__thiz.callMethod<void>(
			"setMediaController",
			"(Landroid/media/session/MediaController;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getMediaController()
	{
		return __thiz.callObjectMethod(
			"getMediaController",
			"()Landroid/media/session/MediaController;");
	}
	void Window::setSystemGestureExclusionRects(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getSystemGestureExclusionRects()
	{
		return __thiz.callObjectMethod(
			"getSystemGestureExclusionRects",
			"()Ljava/util/List;");
	}
	void Window::setElevation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setElevation",
			"(F)V",
			arg0);
	}
	void Window::setClipToOutline(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClipToOutline",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject Window::saveHierarchyState()
	{
		return __thiz.callObjectMethod(
			"saveHierarchyState",
			"()Landroid/os/Bundle;");
	}
	void Window::restoreHierarchyState(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void Window::setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getWindowStyle()
	{
		return __thiz.callObjectMethod(
			"getWindowStyle",
			"()Landroid/content/res/TypedArray;");
	}
	void Window::setContainer(__jni_impl::android::view::Window arg0)
	{
		__thiz.callMethod<void>(
			"setContainer",
			"(Landroid/view/Window;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getContainer()
	{
		return __thiz.callObjectMethod(
			"getContainer",
			"()Landroid/view/Window;");
	}
	jboolean Window::hasChildren()
	{
		return __thiz.callMethod<jboolean>(
			"hasChildren",
			"()Z");
	}
	void Window::setWindowManager(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"setWindowManager",
			"(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void Window::setWindowManager(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setWindowManager",
			"(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Window::addOnFrameMetricsAvailableListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnFrameMetricsAvailableListener",
			"(Landroid/view/Window$OnFrameMetricsAvailableListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Window::removeOnFrameMetricsAvailableListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnFrameMetricsAvailableListener",
			"(Landroid/view/Window$OnFrameMetricsAvailableListener;)V",
			arg0.__jniObject().object());
	}
	void Window::setRestrictedCaptionAreaListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRestrictedCaptionAreaListener",
			"(Landroid/view/Window$OnRestrictedCaptionAreaChangedListener;)V",
			arg0.__jniObject().object());
	}
	void Window::takeSurface(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"takeSurface",
			"(Landroid/view/SurfaceHolder$Callback2;)V",
			arg0.__jniObject().object());
	}
	void Window::takeInputQueue(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"takeInputQueue",
			"(Landroid/view/InputQueue$Callback;)V",
			arg0.__jniObject().object());
	}
	void Window::setLayout(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLayout",
			"(II)V",
			arg0,
			arg1);
	}
	void Window::setWindowAnimations(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWindowAnimations",
			"(I)V",
			arg0);
	}
	void Window::setSoftInputMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0);
	}
	void Window::clearFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"clearFlags",
			"(I)V",
			arg0);
	}
	void Window::setColorMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColorMode",
			"(I)V",
			arg0);
	}
	jint Window::getColorMode()
	{
		return __thiz.callMethod<jint>(
			"getColorMode",
			"()I");
	}
	void Window::setDimAmount(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setDimAmount",
			"(F)V",
			arg0);
	}
	void Window::setAttributes(__jni_impl::android::view::WindowManager_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"setAttributes",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void Window::setSustainedPerformanceMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSustainedPerformanceMode",
			"(Z)V",
			arg0);
	}
	jboolean Window::requestFeature(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestFeature",
			"(I)Z",
			arg0);
	}
	void Window::makeActive()
	{
		__thiz.callMethod<void>(
			"makeActive",
			"()V");
	}
	void Window::openPanel(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		__thiz.callMethod<void>(
			"openPanel",
			"(ILandroid/view/KeyEvent;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Window::closePanel(jint arg0)
	{
		__thiz.callMethod<void>(
			"closePanel",
			"(I)V",
			arg0);
	}
	void Window::togglePanel(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		__thiz.callMethod<void>(
			"togglePanel",
			"(ILandroid/view/KeyEvent;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Window::invalidatePanelMenu(jint arg0)
	{
		__thiz.callMethod<void>(
			"invalidatePanelMenu",
			"(I)V",
			arg0);
	}
	jboolean Window::performPanelShortcut(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"performPanelShortcut",
			"(IILandroid/view/KeyEvent;I)Z",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	jboolean Window::performPanelIdentifierAction(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performPanelIdentifierAction",
			"(III)Z",
			arg0,
			arg1,
			arg2);
	}
	void Window::closeAllPanels()
	{
		__thiz.callMethod<void>(
			"closeAllPanels",
			"()V");
	}
	jboolean Window::performContextMenuIdentifierAction(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performContextMenuIdentifierAction",
			"(II)Z",
			arg0,
			arg1);
	}
	void Window::setBackgroundDrawableResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawableResource",
			"(I)V",
			arg0);
	}
	void Window::setFeatureInt(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureInt",
			"(II)V",
			arg0,
			arg1);
	}
	jboolean Window::superDispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Window::superDispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Window::superDispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Window::superDispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Window::superDispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"superDispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getDecorView()
	{
		return __thiz.callObjectMethod(
			"getDecorView",
			"()Landroid/view/View;");
	}
	QAndroidJniObject Window::peekDecorView()
	{
		return __thiz.callObjectMethod(
			"peekDecorView",
			"()Landroid/view/View;");
	}
	jint Window::getDefaultFeatures(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.Window",
			"getDefaultFeatures",
			"(Landroid/content/Context;)I",
			arg0.__jniObject().object());
	}
	jboolean Window::hasFeature(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasFeature",
			"(I)Z",
			arg0);
	}
	void Window::setChildDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setChildDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Window::setChildInt(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChildInt",
			"(II)V",
			arg0,
			arg1);
	}
	jboolean Window::isShortcutKey(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isShortcutKey",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	void Window::setUiOptions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setUiOptions",
			"(I)V",
			arg0);
	}
	void Window::setUiOptions(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setUiOptions",
			"(II)V",
			arg0,
			arg1);
	}
	void Window::setLogo(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLogo",
			"(I)V",
			arg0);
	}
	void Window::setLocalFocus(jboolean arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setLocalFocus",
			"(ZZ)V",
			arg0,
			arg1);
	}
	void Window::injectInputEvent(__jni_impl::android::view::InputEvent arg0)
	{
		__thiz.callMethod<void>(
			"injectInputEvent",
			"(Landroid/view/InputEvent;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getTransitionManager()
	{
		return __thiz.callObjectMethod(
			"getTransitionManager",
			"()Landroid/transition/TransitionManager;");
	}
	void Window::setTransitionManager(__jni_impl::android::transition::TransitionManager arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionManager",
			"(Landroid/transition/TransitionManager;)V",
			arg0.__jniObject().object());
	}
	void Window::setEnterTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Window::setReturnTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Window::setExitTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Window::setReenterTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Window::getReturnTransition()
	{
		return __thiz.callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Window::getExitTransition()
	{
		return __thiz.callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Window::getReenterTransition()
	{
		return __thiz.callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;");
	}
	void Window::setSharedElementEnterTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Window::setSharedElementReturnTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getSharedElementEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Window::getSharedElementReturnTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;");
	}
	void Window::setSharedElementExitTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Window::setSharedElementReenterTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Window::getSharedElementExitTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementExitTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Window::getSharedElementReenterTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementReenterTransition",
			"()Landroid/transition/Transition;");
	}
	void Window::setAllowEnterTransitionOverlap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0);
	}
	jboolean Window::getAllowEnterTransitionOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z");
	}
	void Window::setAllowReturnTransitionOverlap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0);
	}
	jboolean Window::getAllowReturnTransitionOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z");
	}
	jlong Window::getTransitionBackgroundFadeDuration()
	{
		return __thiz.callMethod<jlong>(
			"getTransitionBackgroundFadeDuration",
			"()J");
	}
	void Window::setTransitionBackgroundFadeDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionBackgroundFadeDuration",
			"(J)V",
			arg0);
	}
	jboolean Window::getSharedElementsUseOverlay()
	{
		return __thiz.callMethod<jboolean>(
			"getSharedElementsUseOverlay",
			"()Z");
	}
	void Window::setSharedElementsUseOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementsUseOverlay",
			"(Z)V",
			arg0);
	}
	jint Window::getStatusBarColor()
	{
		return __thiz.callMethod<jint>(
			"getStatusBarColor",
			"()I");
	}
	void Window::setStatusBarColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStatusBarColor",
			"(I)V",
			arg0);
	}
	jint Window::getNavigationBarColor()
	{
		return __thiz.callMethod<jint>(
			"getNavigationBarColor",
			"()I");
	}
	void Window::setNavigationBarColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationBarColor",
			"(I)V",
			arg0);
	}
	void Window::setNavigationBarDividerColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationBarDividerColor",
			"(I)V",
			arg0);
	}
	jint Window::getNavigationBarDividerColor()
	{
		return __thiz.callMethod<jint>(
			"getNavigationBarDividerColor",
			"()I");
	}
	void Window::setStatusBarContrastEnforced(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStatusBarContrastEnforced",
			"(Z)V",
			arg0);
	}
	jboolean Window::isStatusBarContrastEnforced()
	{
		return __thiz.callMethod<jboolean>(
			"isStatusBarContrastEnforced",
			"()Z");
	}
	void Window::setNavigationBarContrastEnforced(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationBarContrastEnforced",
			"(Z)V",
			arg0);
	}
	jboolean Window::isNavigationBarContrastEnforced()
	{
		return __thiz.callMethod<jboolean>(
			"isNavigationBarContrastEnforced",
			"()Z");
	}
	void Window::setDecorCaptionShade(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDecorCaptionShade",
			"(I)V",
			arg0);
	}
	void Window::setResizingCaptionDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setResizingCaptionDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class Window : public __jni_impl::android::view::Window
	{
	public:
		Window(QAndroidJniObject obj) { __thiz = obj; }
		Window(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_WINDOW


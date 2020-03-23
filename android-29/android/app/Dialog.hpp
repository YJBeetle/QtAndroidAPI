#pragma once

#ifndef ANDROID_APP_DIALOG
#define ANDROID_APP_DIALOG

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::os
{
	class Message;
}
namespace __jni_impl::android::view
{
	class Window;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class ActionBar;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
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
	class WindowManager_LayoutParams;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::view
{
	class SearchEvent;
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
namespace __jni_impl::android::view
{
	class ActionMode;
}

namespace __jni_impl::android::app
{
	class Dialog : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getContext();
		void create();
		void cancel();
		void show();
		void setOnCancelListener(__jni_impl::__JniBaseClass arg0);
		void setOwnerActivity(__jni_impl::android::app::Activity arg0);
		QAndroidJniObject getOwnerActivity();
		jboolean isShowing();
		void hide();
		void dismiss();
		void setCancelable(jboolean arg0);
		void setCanceledOnTouchOutside(jboolean arg0);
		void setCancelMessage(__jni_impl::android::os::Message arg0);
		void setOnDismissListener(__jni_impl::__JniBaseClass arg0);
		void setOnShowListener(__jni_impl::__JniBaseClass arg0);
		void setDismissMessage(__jni_impl::android::os::Message arg0);
		QAndroidJniObject getWindow();
		QAndroidJniObject getCurrentFocus();
		void onRestoreInstanceState(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject onSaveInstanceState();
		QAndroidJniObject findViewById(jint arg0);
		QAndroidJniObject requireViewById(jint arg0);
		QAndroidJniObject getActionBar();
		void setContentView(jint arg0);
		void setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void setContentView(__jni_impl::android::view::View arg0);
		void addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		void onBackPressed();
		jboolean onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onWindowAttributesChanged(__jni_impl::android::view::WindowManager_LayoutParams arg0);
		void onContentChanged();
		void onWindowFocusChanged(jboolean arg0);
		void onAttachedToWindow();
		void onDetachedFromWindow();
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		QAndroidJniObject onCreatePanelView(jint arg0);
		jboolean onCreatePanelMenu(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onPreparePanel(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2);
		jboolean onMenuOpened(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean onMenuItemSelected(jint arg0, __jni_impl::__JniBaseClass arg1);
		void onPanelClosed(jint arg0, __jni_impl::__JniBaseClass arg1);
		void invalidateOptionsMenu();
		jboolean onCreateOptionsMenu(__jni_impl::__JniBaseClass arg0);
		jboolean onPrepareOptionsMenu(__jni_impl::__JniBaseClass arg0);
		jboolean onOptionsItemSelected(__jni_impl::__JniBaseClass arg0);
		void onOptionsMenuClosed(__jni_impl::__JniBaseClass arg0);
		void openOptionsMenu();
		void closeOptionsMenu();
		void onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2);
		void registerForContextMenu(__jni_impl::android::view::View arg0);
		void unregisterForContextMenu(__jni_impl::android::view::View arg0);
		void openContextMenu(__jni_impl::android::view::View arg0);
		jboolean onContextItemSelected(__jni_impl::__JniBaseClass arg0);
		void onContextMenuClosed(__jni_impl::__JniBaseClass arg0);
		jboolean onSearchRequested();
		jboolean onSearchRequested(__jni_impl::android::view::SearchEvent arg0);
		QAndroidJniObject getSearchEvent();
		void takeKeyEvents(jboolean arg0);
		jboolean requestWindowFeature(jint arg0);
		void setFeatureDrawableResource(jint arg0, jint arg1);
		void setFeatureDrawableUri(jint arg0, __jni_impl::android::net::Uri arg1);
		void setFeatureDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setFeatureDrawableAlpha(jint arg0, jint arg1);
		QAndroidJniObject getLayoutInflater();
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setVolumeControlStream(jint arg0);
		jint getVolumeControlStream();
		QAndroidJniObject onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0, jint arg1);
		void onActionModeStarted(__jni_impl::android::view::ActionMode arg0);
		void onActionModeFinished(__jni_impl::android::view::ActionMode arg0);
		void setOnKeyListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "Activity.hpp"
#include "../os/Message.hpp"
#include "../view/Window.hpp"
#include "../view/View.hpp"
#include "../os/Bundle.hpp"
#include "ActionBar.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/WindowManager_LayoutParams.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/SearchEvent.hpp"
#include "../net/Uri.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/ActionMode.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Dialog::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Dialog",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Dialog::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Dialog",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Dialog::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;");
	}
	void Dialog::create()
	{
		__thiz.callMethod<void>(
			"create",
			"()V");
	}
	void Dialog::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	void Dialog::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V");
	}
	void Dialog::setOnCancelListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCancelListener",
			"(Landroid/content/DialogInterface$OnCancelListener;)V",
			arg0.__jniObject().object());
	}
	void Dialog::setOwnerActivity(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"setOwnerActivity",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Dialog::getOwnerActivity()
	{
		return __thiz.callObjectMethod(
			"getOwnerActivity",
			"()Landroid/app/Activity;");
	}
	jboolean Dialog::isShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isShowing",
			"()Z");
	}
	void Dialog::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V");
	}
	void Dialog::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V");
	}
	void Dialog::setCancelable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0);
	}
	void Dialog::setCanceledOnTouchOutside(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCanceledOnTouchOutside",
			"(Z)V",
			arg0);
	}
	void Dialog::setCancelMessage(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"setCancelMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object());
	}
	void Dialog::setOnDismissListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/content/DialogInterface$OnDismissListener;)V",
			arg0.__jniObject().object());
	}
	void Dialog::setOnShowListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnShowListener",
			"(Landroid/content/DialogInterface$OnShowListener;)V",
			arg0.__jniObject().object());
	}
	void Dialog::setDismissMessage(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"setDismissMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Dialog::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;");
	}
	QAndroidJniObject Dialog::getCurrentFocus()
	{
		return __thiz.callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;");
	}
	void Dialog::onRestoreInstanceState(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Dialog::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject Dialog::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0);
	}
	QAndroidJniObject Dialog::requireViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0);
	}
	QAndroidJniObject Dialog::getActionBar()
	{
		return __thiz.callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;");
	}
	void Dialog::setContentView(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(I)V",
			arg0);
	}
	void Dialog::setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Dialog::setContentView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void Dialog::addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean Dialog::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Dialog::onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Dialog::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Dialog::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void Dialog::onBackPressed()
	{
		__thiz.callMethod<void>(
			"onBackPressed",
			"()V");
	}
	jboolean Dialog::onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Dialog::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void Dialog::onWindowAttributesChanged(__jni_impl::android::view::WindowManager_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.__jniObject().object());
	}
	void Dialog::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V");
	}
	void Dialog::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0);
	}
	void Dialog::onAttachedToWindow()
	{
		__thiz.callMethod<void>(
			"onAttachedToWindow",
			"()V");
	}
	void Dialog::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V");
	}
	jboolean Dialog::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Dialog::onCreatePanelView(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0);
	}
	jboolean Dialog::onCreatePanelMenu(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Dialog::onPreparePanel(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean Dialog::onMenuOpened(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean Dialog::onMenuItemSelected(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	void Dialog::onPanelClosed(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Dialog::invalidateOptionsMenu()
	{
		__thiz.callMethod<void>(
			"invalidateOptionsMenu",
			"()V");
	}
	jboolean Dialog::onCreateOptionsMenu(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::onPrepareOptionsMenu(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object());
	}
	jboolean Dialog::onOptionsItemSelected(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object());
	}
	void Dialog::onOptionsMenuClosed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object());
	}
	void Dialog::openOptionsMenu()
	{
		__thiz.callMethod<void>(
			"openOptionsMenu",
			"()V");
	}
	void Dialog::closeOptionsMenu()
	{
		__thiz.callMethod<void>(
			"closeOptionsMenu",
			"()V");
	}
	void Dialog::onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Dialog::registerForContextMenu(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void Dialog::unregisterForContextMenu(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void Dialog::openContextMenu(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	jboolean Dialog::onContextItemSelected(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object());
	}
	void Dialog::onContextMenuClosed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object());
	}
	jboolean Dialog::onSearchRequested()
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"()Z");
	}
	jboolean Dialog::onSearchRequested(__jni_impl::android::view::SearchEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Dialog::getSearchEvent()
	{
		return __thiz.callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;");
	}
	void Dialog::takeKeyEvents(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0);
	}
	jboolean Dialog::requestWindowFeature(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
			arg0);
	}
	void Dialog::setFeatureDrawableResource(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1);
	}
	void Dialog::setFeatureDrawableUri(jint arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Dialog::setFeatureDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Dialog::setFeatureDrawableAlpha(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1);
	}
	QAndroidJniObject Dialog::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;");
	}
	void Dialog::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0);
	}
	void Dialog::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void Dialog::setVolumeControlStream(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0);
	}
	jint Dialog::getVolumeControlStream()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControlStream",
			"()I");
	}
	QAndroidJniObject Dialog::onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Dialog::onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1);
	}
	void Dialog::onActionModeStarted(__jni_impl::android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object());
	}
	void Dialog::onActionModeFinished(__jni_impl::android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object());
	}
	void Dialog::setOnKeyListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnKeyListener",
			"(Landroid/content/DialogInterface$OnKeyListener;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Dialog : public __jni_impl::android::app::Dialog
	{
	public:
		Dialog(QAndroidJniObject obj) { __thiz = obj; }
		Dialog(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Dialog(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_DIALOG


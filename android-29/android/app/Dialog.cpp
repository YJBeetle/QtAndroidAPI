#include "./ActionBar.hpp"
#include "./Activity.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Message.hpp"
#include "../view/ActionMode.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/SearchEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/Window.hpp"
#include "../view/WindowManager_LayoutParams.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "./Dialog.hpp"

namespace android::app
{
	// Fields
	
	Dialog::Dialog(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Dialog::Dialog(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Dialog",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Dialog::Dialog(android::content::Context &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Dialog",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void Dialog::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Dialog::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void Dialog::closeOptionsMenu()
	{
		__thiz.callMethod<void>(
			"closeOptionsMenu",
			"()V"
		);
	}
	void Dialog::create()
	{
		__thiz.callMethod<void>(
			"create",
			"()V"
		);
	}
	void Dialog::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jboolean Dialog::dispatchGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::dispatchKeyShortcutEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Dialog::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	QAndroidJniObject Dialog::getActionBar()
	{
		return __thiz.callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;"
		);
	}
	QAndroidJniObject Dialog::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject Dialog::getCurrentFocus()
	{
		return __thiz.callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject Dialog::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	QAndroidJniObject Dialog::getOwnerActivity()
	{
		return __thiz.callObjectMethod(
			"getOwnerActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject Dialog::getSearchEvent()
	{
		return __thiz.callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;"
		);
	}
	jint Dialog::getVolumeControlStream()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	QAndroidJniObject Dialog::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	void Dialog::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V"
		);
	}
	void Dialog::invalidateOptionsMenu()
	{
		__thiz.callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	jboolean Dialog::isShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	void Dialog::onActionModeFinished(android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::onActionModeStarted(android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::onAttachedToWindow()
	{
		__thiz.callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	void Dialog::onBackPressed()
	{
		__thiz.callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void Dialog::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	jboolean Dialog::onContextItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void Dialog::onContextMenuClosed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::onCreateContextMenu(__JniBaseClass arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean Dialog::onCreateOptionsMenu(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::onCreatePanelMenu(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Dialog::onCreatePanelView(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Dialog::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	jboolean Dialog::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Dialog::onKeyLongPress(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Dialog::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Dialog::onKeyShortcut(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Dialog::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Dialog::onMenuItemSelected(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Dialog::onMenuOpened(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Dialog::onOptionsItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void Dialog::onOptionsMenuClosed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::onPanelClosed(jint arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Dialog::onPrepareOptionsMenu(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::onPreparePanel(jint arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Dialog::onRestoreInstanceState(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Dialog::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean Dialog::onSearchRequested()
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	jboolean Dialog::onSearchRequested(android::view::SearchEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Dialog::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject Dialog::onWindowStartingActionMode(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Dialog::onWindowStartingActionMode(__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Dialog::openContextMenu(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::openOptionsMenu()
	{
		__thiz.callMethod<void>(
			"openOptionsMenu",
			"()V"
		);
	}
	void Dialog::registerForContextMenu(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Dialog::requestWindowFeature(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject Dialog::requireViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Dialog::setCancelMessage(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"setCancelMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::setCancelable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	void Dialog::setCanceledOnTouchOutside(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCanceledOnTouchOutside",
			"(Z)V",
			arg0
		);
	}
	void Dialog::setContentView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::setContentView(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void Dialog::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Dialog::setDismissMessage(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"setDismissMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Dialog::setFeatureDrawableAlpha(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Dialog::setFeatureDrawableResource(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Dialog::setFeatureDrawableUri(jint arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Dialog::setOnCancelListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCancelListener",
			"(Landroid/content/DialogInterface$OnCancelListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::setOnDismissListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/content/DialogInterface$OnDismissListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::setOnKeyListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnKeyListener",
			"(Landroid/content/DialogInterface$OnKeyListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::setOnShowListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnShowListener",
			"(Landroid/content/DialogInterface$OnShowListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::setOwnerActivity(android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"setOwnerActivity",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Dialog::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Dialog::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Dialog::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Dialog::setVolumeControlStream(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	void Dialog::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
	void Dialog::takeKeyEvents(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	void Dialog::unregisterForContextMenu(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app


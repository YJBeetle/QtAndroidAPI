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
	
	// QAndroidJniObject forward
	Dialog::Dialog(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Dialog::Dialog(android::content::Context arg0)
		: __JniBaseClass(
			"android.app.Dialog",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Dialog::Dialog(android::content::Context arg0, jint arg1)
		: __JniBaseClass(
			"android.app.Dialog",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void Dialog::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Dialog::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void Dialog::closeOptionsMenu()
	{
		callMethod<void>(
			"closeOptionsMenu",
			"()V"
		);
	}
	void Dialog::create()
	{
		callMethod<void>(
			"create",
			"()V"
		);
	}
	void Dialog::dismiss()
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jboolean Dialog::dispatchGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchKeyShortcutEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	QAndroidJniObject Dialog::findViewById(jint arg0)
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	QAndroidJniObject Dialog::getActionBar()
	{
		return callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;"
		);
	}
	QAndroidJniObject Dialog::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject Dialog::getCurrentFocus()
	{
		return callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject Dialog::getLayoutInflater()
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	QAndroidJniObject Dialog::getOwnerActivity()
	{
		return callObjectMethod(
			"getOwnerActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject Dialog::getSearchEvent()
	{
		return callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;"
		);
	}
	jint Dialog::getVolumeControlStream()
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	QAndroidJniObject Dialog::getWindow()
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	void Dialog::hide()
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	void Dialog::invalidateOptionsMenu()
	{
		callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	jboolean Dialog::isShowing()
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	void Dialog::onActionModeFinished(android::view::ActionMode arg0)
	{
		callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	void Dialog::onActionModeStarted(android::view::ActionMode arg0)
	{
		callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	void Dialog::onAttachedToWindow()
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	void Dialog::onBackPressed()
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void Dialog::onContentChanged()
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	jboolean Dialog::onContextItemSelected(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Dialog::onContextMenuClosed(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Dialog::onCreateContextMenu(__JniBaseClass arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean Dialog::onCreateOptionsMenu(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onCreatePanelMenu(jint arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject Dialog::onCreatePanelView(jint arg0)
	{
		return callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Dialog::onDetachedFromWindow()
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	jboolean Dialog::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onKeyLongPress(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean Dialog::onKeyShortcut(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onMenuItemSelected(jint arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onMenuOpened(jint arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onOptionsItemSelected(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Dialog::onOptionsMenuClosed(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Dialog::onPanelClosed(jint arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onPrepareOptionsMenu(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onPreparePanel(jint arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		return callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Dialog::onRestoreInstanceState(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	QAndroidJniObject Dialog::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean Dialog::onSearchRequested()
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	jboolean Dialog::onSearchRequested(android::view::SearchEvent arg0)
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Dialog::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0)
	{
		callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	void Dialog::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject Dialog::onWindowStartingActionMode(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	QAndroidJniObject Dialog::onWindowStartingActionMode(__JniBaseClass arg0, jint arg1)
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	void Dialog::openContextMenu(android::view::View arg0)
	{
		callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Dialog::openOptionsMenu()
	{
		callMethod<void>(
			"openOptionsMenu",
			"()V"
		);
	}
	void Dialog::registerForContextMenu(android::view::View arg0)
	{
		callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	jboolean Dialog::requestWindowFeature(jint arg0)
	{
		return callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject Dialog::requireViewById(jint arg0)
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Dialog::setCancelMessage(android::os::Message arg0)
	{
		callMethod<void>(
			"setCancelMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void Dialog::setCancelable(jboolean arg0)
	{
		callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	void Dialog::setCanceledOnTouchOutside(jboolean arg0)
	{
		callMethod<void>(
			"setCanceledOnTouchOutside",
			"(Z)V",
			arg0
		);
	}
	void Dialog::setContentView(android::view::View arg0)
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Dialog::setContentView(jint arg0)
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void Dialog::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Dialog::setDismissMessage(android::os::Message arg0)
	{
		callMethod<void>(
			"setDismissMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void Dialog::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	void Dialog::setFeatureDrawableAlpha(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Dialog::setFeatureDrawableResource(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Dialog::setFeatureDrawableUri(jint arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void Dialog::setOnCancelListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnCancelListener",
			"(Landroid/content/DialogInterface$OnCancelListener;)V",
			arg0.object()
		);
	}
	void Dialog::setOnDismissListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/content/DialogInterface$OnDismissListener;)V",
			arg0.object()
		);
	}
	void Dialog::setOnKeyListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnKeyListener",
			"(Landroid/content/DialogInterface$OnKeyListener;)V",
			arg0.object()
		);
	}
	void Dialog::setOnShowListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnShowListener",
			"(Landroid/content/DialogInterface$OnShowListener;)V",
			arg0.object()
		);
	}
	void Dialog::setOwnerActivity(android::app::Activity arg0)
	{
		callMethod<void>(
			"setOwnerActivity",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Dialog::setTitle(jint arg0)
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Dialog::setTitle(jstring arg0)
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Dialog::setVolumeControlStream(jint arg0)
	{
		callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	void Dialog::show()
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
	void Dialog::takeKeyEvents(jboolean arg0)
	{
		callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	void Dialog::unregisterForContextMenu(android::view::View arg0)
	{
		callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::app


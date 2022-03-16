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
#include "../../JString.hpp"
#include "./Dialog.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	Dialog::Dialog(android::content::Context arg0)
		: JObject(
			"android.app.Dialog",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Dialog::Dialog(android::content::Context arg0, jint arg1)
		: JObject(
			"android.app.Dialog",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void Dialog::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Dialog::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void Dialog::closeOptionsMenu() const
	{
		callMethod<void>(
			"closeOptionsMenu",
			"()V"
		);
	}
	void Dialog::create() const
	{
		callMethod<void>(
			"create",
			"()V"
		);
	}
	void Dialog::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jboolean Dialog::dispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	android::view::View Dialog::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	android::app::ActionBar Dialog::getActionBar() const
	{
		return callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;"
		);
	}
	android::content::Context Dialog::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	android::view::View Dialog::getCurrentFocus() const
	{
		return callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	android::view::LayoutInflater Dialog::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	android::app::Activity Dialog::getOwnerActivity() const
	{
		return callObjectMethod(
			"getOwnerActivity",
			"()Landroid/app/Activity;"
		);
	}
	android::view::SearchEvent Dialog::getSearchEvent() const
	{
		return callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;"
		);
	}
	jint Dialog::getVolumeControlStream() const
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	android::view::Window Dialog::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	void Dialog::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	void Dialog::invalidateOptionsMenu() const
	{
		callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	jboolean Dialog::isShowing() const
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	void Dialog::onActionModeFinished(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	void Dialog::onActionModeStarted(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	void Dialog::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	void Dialog::onBackPressed() const
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void Dialog::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	jboolean Dialog::onContextItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Dialog::onContextMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Dialog::onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean Dialog::onCreateOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onCreatePanelMenu(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	android::view::View Dialog::onCreatePanelView(jint arg0) const
	{
		return callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Dialog::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	jboolean Dialog::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean Dialog::onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onMenuItemSelected(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onMenuOpened(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Dialog::onOptionsMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Dialog::onPanelClosed(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean Dialog::onPrepareOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onPreparePanel(jint arg0, android::view::View arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Dialog::onRestoreInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::os::Bundle Dialog::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean Dialog::onSearchRequested() const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	jboolean Dialog::onSearchRequested(android::view::SearchEvent arg0) const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Dialog::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Dialog::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0) const
	{
		callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	void Dialog::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	android::view::ActionMode Dialog::onWindowStartingActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	android::view::ActionMode Dialog::onWindowStartingActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	void Dialog::openContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Dialog::openOptionsMenu() const
	{
		callMethod<void>(
			"openOptionsMenu",
			"()V"
		);
	}
	void Dialog::registerForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	jboolean Dialog::requestWindowFeature(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
			arg0
		);
	}
	android::view::View Dialog::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Dialog::setCancelMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"setCancelMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void Dialog::setCancelable(jboolean arg0) const
	{
		callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	void Dialog::setCanceledOnTouchOutside(jboolean arg0) const
	{
		callMethod<void>(
			"setCanceledOnTouchOutside",
			"(Z)V",
			arg0
		);
	}
	void Dialog::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Dialog::setContentView(jint arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void Dialog::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Dialog::setDismissMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"setDismissMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void Dialog::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	void Dialog::setFeatureDrawableAlpha(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Dialog::setFeatureDrawableResource(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Dialog::setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void Dialog::setOnCancelListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCancelListener",
			"(Landroid/content/DialogInterface$OnCancelListener;)V",
			arg0.object()
		);
	}
	void Dialog::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/content/DialogInterface$OnDismissListener;)V",
			arg0.object()
		);
	}
	void Dialog::setOnKeyListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnKeyListener",
			"(Landroid/content/DialogInterface$OnKeyListener;)V",
			arg0.object()
		);
	}
	void Dialog::setOnShowListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnShowListener",
			"(Landroid/content/DialogInterface$OnShowListener;)V",
			arg0.object()
		);
	}
	void Dialog::setOwnerActivity(android::app::Activity arg0) const
	{
		callMethod<void>(
			"setOwnerActivity",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Dialog::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Dialog::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Dialog::setVolumeControlStream(jint arg0) const
	{
		callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	void Dialog::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
	void Dialog::takeKeyEvents(jboolean arg0) const
	{
		callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	void Dialog::unregisterForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::app


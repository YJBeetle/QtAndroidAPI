#pragma once

#include "./ActionBar.def.hpp"
#include "./Activity.def.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Message.def.hpp"
#include "../view/ActionMode.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/SearchEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/Window.def.hpp"
#include "../view/WindowManager_LayoutParams.def.hpp"
#include "../view/accessibility/AccessibilityEvent.def.hpp"
#include "../../JString.hpp"
#include "./Dialog.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Dialog::Dialog(android::content::Context arg0)
		: JObject(
			"android.app.Dialog",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Dialog::Dialog(android::content::Context arg0, jint arg1)
		: JObject(
			"android.app.Dialog",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline void Dialog::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Dialog::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void Dialog::closeOptionsMenu() const
	{
		callMethod<void>(
			"closeOptionsMenu",
			"()V"
		);
	}
	inline void Dialog::create() const
	{
		callMethod<void>(
			"create",
			"()V"
		);
	}
	inline void Dialog::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	inline jboolean Dialog::dispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline android::view::View Dialog::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline android::app::ActionBar Dialog::getActionBar() const
	{
		return callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;"
		);
	}
	inline android::content::Context Dialog::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline android::view::View Dialog::getCurrentFocus() const
	{
		return callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	inline android::view::LayoutInflater Dialog::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	inline android::app::Activity Dialog::getOwnerActivity() const
	{
		return callObjectMethod(
			"getOwnerActivity",
			"()Landroid/app/Activity;"
		);
	}
	inline android::view::SearchEvent Dialog::getSearchEvent() const
	{
		return callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;"
		);
	}
	inline jint Dialog::getVolumeControlStream() const
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	inline android::view::Window Dialog::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	inline void Dialog::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	inline void Dialog::invalidateOptionsMenu() const
	{
		callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	inline jboolean Dialog::isShowing() const
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	inline void Dialog::onActionModeFinished(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	inline void Dialog::onActionModeStarted(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	inline void Dialog::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	inline void Dialog::onBackPressed() const
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	inline void Dialog::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	inline jboolean Dialog::onContextItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	inline void Dialog::onContextMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	inline void Dialog::onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean Dialog::onCreateOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::onCreatePanelMenu(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	inline android::view::View Dialog::onCreatePanelView(jint arg0) const
	{
		return callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void Dialog::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	inline jboolean Dialog::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Dialog::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Dialog::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean Dialog::onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Dialog::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Dialog::onMenuItemSelected(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Dialog::onMenuOpened(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Dialog::onOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	inline void Dialog::onOptionsMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	inline void Dialog::onPanelClosed(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Dialog::onPrepareOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::onPreparePanel(jint arg0, android::view::View arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void Dialog::onRestoreInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline android::os::Bundle Dialog::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	inline jboolean Dialog::onSearchRequested() const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	inline jboolean Dialog::onSearchRequested(android::view::SearchEvent arg0) const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Dialog::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void Dialog::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0) const
	{
		callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	inline void Dialog::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline android::view::ActionMode Dialog::onWindowStartingActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	inline android::view::ActionMode Dialog::onWindowStartingActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	inline void Dialog::openContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void Dialog::openOptionsMenu() const
	{
		callMethod<void>(
			"openOptionsMenu",
			"()V"
		);
	}
	inline void Dialog::registerForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline jboolean Dialog::requestWindowFeature(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
			arg0
		);
	}
	inline android::view::View Dialog::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void Dialog::setCancelMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"setCancelMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline void Dialog::setCancelable(jboolean arg0) const
	{
		callMethod<void>(
			"setCancelable",
			"(Z)V",
			arg0
		);
	}
	inline void Dialog::setCanceledOnTouchOutside(jboolean arg0) const
	{
		callMethod<void>(
			"setCanceledOnTouchOutside",
			"(Z)V",
			arg0
		);
	}
	inline void Dialog::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void Dialog::setContentView(jint arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	inline void Dialog::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Dialog::setDismissMessage(android::os::Message arg0) const
	{
		callMethod<void>(
			"setDismissMessage",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline void Dialog::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Dialog::setFeatureDrawableAlpha(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Dialog::setFeatureDrawableResource(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Dialog::setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Dialog::setOnCancelListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCancelListener",
			"(Landroid/content/DialogInterface$OnCancelListener;)V",
			arg0.object()
		);
	}
	inline void Dialog::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/content/DialogInterface$OnDismissListener;)V",
			arg0.object()
		);
	}
	inline void Dialog::setOnKeyListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnKeyListener",
			"(Landroid/content/DialogInterface$OnKeyListener;)V",
			arg0.object()
		);
	}
	inline void Dialog::setOnShowListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnShowListener",
			"(Landroid/content/DialogInterface$OnShowListener;)V",
			arg0.object()
		);
	}
	inline void Dialog::setOwnerActivity(android::app::Activity arg0) const
	{
		callMethod<void>(
			"setOwnerActivity",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Dialog::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	inline void Dialog::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Dialog::setVolumeControlStream(jint arg0) const
	{
		callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	inline void Dialog::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
	inline void Dialog::takeKeyEvents(jboolean arg0) const
	{
		callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	inline void Dialog::unregisterForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers


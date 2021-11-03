#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class ActionBar;
}
namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
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
	class Message;
}
namespace android::view
{
	class ActionMode;
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
	class SearchEvent;
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
	class Window;
}
namespace android::view
{
	class WindowManager_LayoutParams;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}

namespace android::app
{
	class Dialog : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Dialog(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Dialog(QJniObject obj);
		
		// Constructors
		Dialog(android::content::Context arg0);
		Dialog(android::content::Context arg0, jint arg1);
		
		// Methods
		void addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void cancel();
		void closeOptionsMenu();
		void create();
		void dismiss();
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0);
		jboolean dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0);
		android::view::View findViewById(jint arg0);
		android::app::ActionBar getActionBar();
		android::content::Context getContext();
		android::view::View getCurrentFocus();
		android::view::LayoutInflater getLayoutInflater();
		android::app::Activity getOwnerActivity();
		android::view::SearchEvent getSearchEvent();
		jint getVolumeControlStream();
		android::view::Window getWindow();
		void hide();
		void invalidateOptionsMenu();
		jboolean isShowing();
		void onActionModeFinished(android::view::ActionMode arg0);
		void onActionModeStarted(android::view::ActionMode arg0);
		void onAttachedToWindow();
		void onBackPressed();
		void onContentChanged();
		jboolean onContextItemSelected(JObject arg0);
		void onContextMenuClosed(JObject arg0);
		void onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2);
		jboolean onCreateOptionsMenu(JObject arg0);
		jboolean onCreatePanelMenu(jint arg0, JObject arg1);
		android::view::View onCreatePanelView(jint arg0);
		void onDetachedFromWindow();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		jboolean onMenuItemSelected(jint arg0, JObject arg1);
		jboolean onMenuOpened(jint arg0, JObject arg1);
		jboolean onOptionsItemSelected(JObject arg0);
		void onOptionsMenuClosed(JObject arg0);
		void onPanelClosed(jint arg0, JObject arg1);
		jboolean onPrepareOptionsMenu(JObject arg0);
		jboolean onPreparePanel(jint arg0, android::view::View arg1, JObject arg2);
		void onRestoreInstanceState(android::os::Bundle arg0);
		android::os::Bundle onSaveInstanceState();
		jboolean onSearchRequested();
		jboolean onSearchRequested(android::view::SearchEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0);
		void onWindowFocusChanged(jboolean arg0);
		android::view::ActionMode onWindowStartingActionMode(JObject arg0);
		android::view::ActionMode onWindowStartingActionMode(JObject arg0, jint arg1);
		void openContextMenu(android::view::View arg0);
		void openOptionsMenu();
		void registerForContextMenu(android::view::View arg0);
		jboolean requestWindowFeature(jint arg0);
		android::view::View requireViewById(jint arg0);
		void setCancelMessage(android::os::Message arg0);
		void setCancelable(jboolean arg0);
		void setCanceledOnTouchOutside(jboolean arg0);
		void setContentView(android::view::View arg0);
		void setContentView(jint arg0);
		void setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void setDismissMessage(android::os::Message arg0);
		void setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1);
		void setFeatureDrawableAlpha(jint arg0, jint arg1);
		void setFeatureDrawableResource(jint arg0, jint arg1);
		void setFeatureDrawableUri(jint arg0, android::net::Uri arg1);
		void setOnCancelListener(JObject arg0);
		void setOnDismissListener(JObject arg0);
		void setOnKeyListener(JObject arg0);
		void setOnShowListener(JObject arg0);
		void setOwnerActivity(android::app::Activity arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setVolumeControlStream(jint arg0);
		void show();
		void takeKeyEvents(jboolean arg0);
		void unregisterForContextMenu(android::view::View arg0);
	};
} // namespace android::app


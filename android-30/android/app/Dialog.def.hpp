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
class JString;

namespace android::app
{
	class Dialog : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Dialog(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Dialog(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Dialog(android::content::Context arg0);
		Dialog(android::content::Context arg0, jint arg1);
		
		// Methods
		void addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void cancel() const;
		void closeOptionsMenu() const;
		void create() const;
		void dismiss() const;
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0) const;
		android::view::View findViewById(jint arg0) const;
		android::app::ActionBar getActionBar() const;
		android::content::Context getContext() const;
		android::view::View getCurrentFocus() const;
		android::view::LayoutInflater getLayoutInflater() const;
		android::app::Activity getOwnerActivity() const;
		android::view::SearchEvent getSearchEvent() const;
		jint getVolumeControlStream() const;
		android::view::Window getWindow() const;
		void hide() const;
		void invalidateOptionsMenu() const;
		jboolean isShowing() const;
		void onActionModeFinished(android::view::ActionMode arg0) const;
		void onActionModeStarted(android::view::ActionMode arg0) const;
		void onAttachedToWindow() const;
		void onBackPressed() const;
		void onContentChanged() const;
		jboolean onContextItemSelected(JObject arg0) const;
		void onContextMenuClosed(JObject arg0) const;
		void onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const;
		jboolean onCreateOptionsMenu(JObject arg0) const;
		jboolean onCreatePanelMenu(jint arg0, JObject arg1) const;
		android::view::View onCreatePanelView(jint arg0) const;
		void onDetachedFromWindow() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onMenuItemSelected(jint arg0, JObject arg1) const;
		jboolean onMenuOpened(jint arg0, JObject arg1) const;
		jboolean onOptionsItemSelected(JObject arg0) const;
		void onOptionsMenuClosed(JObject arg0) const;
		void onPanelClosed(jint arg0, JObject arg1) const;
		jboolean onPrepareOptionsMenu(JObject arg0) const;
		jboolean onPreparePanel(jint arg0, android::view::View arg1, JObject arg2) const;
		void onRestoreInstanceState(android::os::Bundle arg0) const;
		android::os::Bundle onSaveInstanceState() const;
		jboolean onSearchRequested() const;
		jboolean onSearchRequested(android::view::SearchEvent arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0) const;
		void onWindowFocusChanged(jboolean arg0) const;
		android::view::ActionMode onWindowStartingActionMode(JObject arg0) const;
		android::view::ActionMode onWindowStartingActionMode(JObject arg0, jint arg1) const;
		void openContextMenu(android::view::View arg0) const;
		void openOptionsMenu() const;
		void registerForContextMenu(android::view::View arg0) const;
		jboolean requestWindowFeature(jint arg0) const;
		android::view::View requireViewById(jint arg0) const;
		void setCancelMessage(android::os::Message arg0) const;
		void setCancelable(jboolean arg0) const;
		void setCanceledOnTouchOutside(jboolean arg0) const;
		void setContentView(android::view::View arg0) const;
		void setContentView(jint arg0) const;
		void setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void setDismissMessage(android::os::Message arg0) const;
		void setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const;
		void setFeatureDrawableAlpha(jint arg0, jint arg1) const;
		void setFeatureDrawableResource(jint arg0, jint arg1) const;
		void setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const;
		void setOnCancelListener(JObject arg0) const;
		void setOnDismissListener(JObject arg0) const;
		void setOnKeyListener(JObject arg0) const;
		void setOnShowListener(JObject arg0) const;
		void setOwnerActivity(android::app::Activity arg0) const;
		void setTitle(jint arg0) const;
		void setTitle(JString arg0) const;
		void setVolumeControlStream(jint arg0) const;
		void show() const;
		void takeKeyEvents(jboolean arg0) const;
		void unregisterForContextMenu(android::view::View arg0) const;
	};
} // namespace android::app


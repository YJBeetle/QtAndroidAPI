#pragma once

#include "../../app/Service.def.hpp"

class JArray;
namespace android::content
{
	class Intent;
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
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}
class JString;

namespace android::service::dreams
{
	class DreamService : public android::app::Service
	{
	public:
		// Fields
		static JString DREAM_META_DATA();
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DreamService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		DreamService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		DreamService();
		
		// Methods
		void addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0) const;
		android::view::View findViewById(jint arg0) const;
		void finish() const;
		android::view::Window getWindow() const;
		JObject getWindowManager() const;
		jboolean isFullscreen() const;
		jboolean isInteractive() const;
		jboolean isScreenBright() const;
		void onActionModeFinished(android::view::ActionMode arg0) const;
		void onActionModeStarted(android::view::ActionMode arg0) const;
		void onAttachedToWindow() const;
		JObject onBind(android::content::Intent arg0) const;
		void onContentChanged() const;
		void onCreate() const;
		jboolean onCreatePanelMenu(jint arg0, JObject arg1) const;
		android::view::View onCreatePanelView(jint arg0) const;
		void onDestroy() const;
		void onDetachedFromWindow() const;
		void onDreamingStarted() const;
		void onDreamingStopped() const;
		jboolean onMenuItemSelected(jint arg0, JObject arg1) const;
		jboolean onMenuOpened(jint arg0, JObject arg1) const;
		void onPanelClosed(jint arg0, JObject arg1) const;
		jboolean onPreparePanel(jint arg0, android::view::View arg1, JObject arg2) const;
		jboolean onSearchRequested() const;
		jboolean onSearchRequested(android::view::SearchEvent arg0) const;
		jboolean onUnbind(android::content::Intent arg0) const;
		void onWakeUp() const;
		void onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0) const;
		void onWindowFocusChanged(jboolean arg0) const;
		android::view::ActionMode onWindowStartingActionMode(JObject arg0) const;
		android::view::ActionMode onWindowStartingActionMode(JObject arg0, jint arg1) const;
		android::view::View requireViewById(jint arg0) const;
		void setContentView(android::view::View arg0) const;
		void setContentView(jint arg0) const;
		void setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void setFullscreen(jboolean arg0) const;
		void setInteractive(jboolean arg0) const;
		void setScreenBright(jboolean arg0) const;
		void wakeUp() const;
	};
} // namespace android::service::dreams


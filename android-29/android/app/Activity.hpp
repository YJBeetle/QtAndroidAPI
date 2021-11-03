#pragma once

#include "../view/ContextThemeWrapper.hpp"

class JIntArray;
class JArray;
class JArray;
namespace android::app
{
	class ActionBar;
}
namespace android::app
{
	class ActivityManager_TaskDescription;
}
namespace android::app
{
	class Application;
}
namespace android::app
{
	class Dialog;
}
namespace android::app
{
	class Fragment;
}
namespace android::app
{
	class FragmentManager;
}
namespace android::app
{
	class LoaderManager;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class PictureInPictureParams;
}
namespace android::app
{
	class SharedElementCallback;
}
namespace android::app
{
	class TaskStackBuilder;
}
namespace android::app
{
	class VoiceInteractor;
}
namespace android::app::assist
{
	class AssistContent;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentSender;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::media::session
{
	class MediaController;
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
	class CancellationSignal;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::transition
{
	class Scene;
}
namespace android::transition
{
	class TransitionManager;
}
namespace android::view
{
	class ActionMode;
}
namespace android::view
{
	class DragAndDropPermissions;
}
namespace android::view
{
	class DragEvent;
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
	class MenuInflater;
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
namespace android::widget
{
	class Toolbar;
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
class JObject;
class JString;

namespace android::app
{
	class Activity : public android::view::ContextThemeWrapper
	{
	public:
		// Fields
		static jint DEFAULT_KEYS_DIALER();
		static jint DEFAULT_KEYS_DISABLE();
		static jint DEFAULT_KEYS_SEARCH_GLOBAL();
		static jint DEFAULT_KEYS_SEARCH_LOCAL();
		static jint DEFAULT_KEYS_SHORTCUT();
		static jint RESULT_CANCELED();
		static jint RESULT_FIRST_USER();
		static jint RESULT_OK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Activity(const char *className, const char *sig, Ts...agv) : android::view::ContextThemeWrapper(className, sig, std::forward<Ts>(agv)...) {}
		Activity(QAndroidJniObject obj);
		
		// Constructors
		Activity();
		
		// Methods
		void addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void closeContextMenu() const;
		void closeOptionsMenu() const;
		android::app::PendingIntent createPendingResult(jint arg0, android::content::Intent arg1, jint arg2) const;
		void dismissDialog(jint arg0) const;
		void dismissKeyboardShortcutsHelper() const;
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const;
		jboolean dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const;
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0) const;
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0) const;
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		jboolean enterPictureInPictureMode(android::app::PictureInPictureParams arg0) const;
		void enterPictureInPictureMode() const;
		android::view::View findViewById(jint arg0) const;
		void finish() const;
		void finishActivity(jint arg0) const;
		void finishActivityFromChild(android::app::Activity arg0, jint arg1) const;
		void finishAffinity() const;
		void finishAfterTransition() const;
		void finishAndRemoveTask() const;
		void finishFromChild(android::app::Activity arg0) const;
		android::app::ActionBar getActionBar() const;
		android::app::Application getApplication() const;
		android::content::ComponentName getCallingActivity() const;
		JString getCallingPackage() const;
		jint getChangingConfigurations() const;
		android::content::ComponentName getComponentName() const;
		android::transition::Scene getContentScene() const;
		android::transition::TransitionManager getContentTransitionManager() const;
		android::view::View getCurrentFocus() const;
		android::app::FragmentManager getFragmentManager() const;
		android::content::Intent getIntent() const;
		JObject getLastNonConfigurationInstance() const;
		android::view::LayoutInflater getLayoutInflater() const;
		android::app::LoaderManager getLoaderManager() const;
		JString getLocalClassName() const;
		jint getMaxNumPictureInPictureActions() const;
		android::media::session::MediaController getMediaController() const;
		android::view::MenuInflater getMenuInflater() const;
		android::app::Activity getParent() const;
		android::content::Intent getParentActivityIntent() const;
		JObject getPreferences(jint arg0) const;
		android::net::Uri getReferrer() const;
		jint getRequestedOrientation() const;
		android::view::SearchEvent getSearchEvent() const;
		JObject getSystemService(JString arg0) const;
		jint getTaskId() const;
		JString getTitle() const;
		jint getTitleColor() const;
		android::app::VoiceInteractor getVoiceInteractor() const;
		jint getVolumeControlStream() const;
		android::view::Window getWindow() const;
		JObject getWindowManager() const;
		jboolean hasWindowFocus() const;
		void invalidateOptionsMenu() const;
		jboolean isActivityTransitionRunning() const;
		jboolean isChangingConfigurations() const;
		jboolean isChild() const;
		jboolean isDestroyed() const;
		jboolean isFinishing() const;
		jboolean isImmersive() const;
		jboolean isInMultiWindowMode() const;
		jboolean isInPictureInPictureMode() const;
		jboolean isLocalVoiceInteractionSupported() const;
		jboolean isTaskRoot() const;
		jboolean isVoiceInteraction() const;
		jboolean isVoiceInteractionRoot() const;
		JObject managedQuery(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const;
		jboolean moveTaskToBack(jboolean arg0) const;
		jboolean navigateUpTo(android::content::Intent arg0) const;
		jboolean navigateUpToFromChild(android::app::Activity arg0, android::content::Intent arg1) const;
		void onActionModeFinished(android::view::ActionMode arg0) const;
		void onActionModeStarted(android::view::ActionMode arg0) const;
		void onActivityReenter(jint arg0, android::content::Intent arg1) const;
		void onAttachFragment(android::app::Fragment arg0) const;
		void onAttachedToWindow() const;
		void onBackPressed() const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void onContentChanged() const;
		jboolean onContextItemSelected(JObject arg0) const;
		void onContextMenuClosed(JObject arg0) const;
		void onCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1) const;
		void onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const;
		JString onCreateDescription() const;
		void onCreateNavigateUpTaskStack(android::app::TaskStackBuilder arg0) const;
		jboolean onCreateOptionsMenu(JObject arg0) const;
		jboolean onCreatePanelMenu(jint arg0, JObject arg1) const;
		android::view::View onCreatePanelView(jint arg0) const;
		jboolean onCreateThumbnail(android::graphics::Bitmap arg0, android::graphics::Canvas arg1) const;
		android::view::View onCreateView(JString arg0, android::content::Context arg1, JObject arg2) const;
		android::view::View onCreateView(android::view::View arg0, JString arg1, android::content::Context arg2, JObject arg3) const;
		void onDetachedFromWindow() const;
		void onEnterAnimationComplete() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		void onGetDirectActions(android::os::CancellationSignal arg0, JObject arg1) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onLocalVoiceInteractionStarted() const;
		void onLocalVoiceInteractionStopped() const;
		void onLowMemory() const;
		jboolean onMenuItemSelected(jint arg0, JObject arg1) const;
		jboolean onMenuOpened(jint arg0, JObject arg1) const;
		void onMultiWindowModeChanged(jboolean arg0) const;
		void onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1) const;
		jboolean onNavigateUp() const;
		jboolean onNavigateUpFromChild(android::app::Activity arg0) const;
		jboolean onOptionsItemSelected(JObject arg0) const;
		void onOptionsMenuClosed(JObject arg0) const;
		void onPanelClosed(jint arg0, JObject arg1) const;
		void onPerformDirectAction(JString arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, JObject arg3) const;
		void onPictureInPictureModeChanged(jboolean arg0) const;
		void onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1) const;
		void onPostCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1) const;
		void onPrepareNavigateUpTaskStack(android::app::TaskStackBuilder arg0) const;
		jboolean onPrepareOptionsMenu(JObject arg0) const;
		jboolean onPreparePanel(jint arg0, android::view::View arg1, JObject arg2) const;
		void onProvideAssistContent(android::app::assist::AssistContent arg0) const;
		void onProvideAssistData(android::os::Bundle arg0) const;
		void onProvideKeyboardShortcuts(JObject arg0, JObject arg1, jint arg2) const;
		android::net::Uri onProvideReferrer() const;
		void onRequestPermissionsResult(jint arg0, JArray arg1, JIntArray arg2) const;
		void onRestoreInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1) const;
		JObject onRetainNonConfigurationInstance() const;
		void onSaveInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1) const;
		jboolean onSearchRequested() const;
		jboolean onSearchRequested(android::view::SearchEvent arg0) const;
		void onStateNotSaved() const;
		void onTopResumedActivityChanged(jboolean arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void onTrimMemory(jint arg0) const;
		void onUserInteraction() const;
		void onVisibleBehindCanceled() const;
		void onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0) const;
		void onWindowFocusChanged(jboolean arg0) const;
		android::view::ActionMode onWindowStartingActionMode(JObject arg0) const;
		android::view::ActionMode onWindowStartingActionMode(JObject arg0, jint arg1) const;
		void openContextMenu(android::view::View arg0) const;
		void openOptionsMenu() const;
		void overridePendingTransition(jint arg0, jint arg1) const;
		void postponeEnterTransition() const;
		void recreate() const;
		void registerActivityLifecycleCallbacks(JObject arg0) const;
		void registerForContextMenu(android::view::View arg0) const;
		jboolean releaseInstance() const;
		void removeDialog(jint arg0) const;
		void reportFullyDrawn() const;
		android::view::DragAndDropPermissions requestDragAndDropPermissions(android::view::DragEvent arg0) const;
		void requestPermissions(JArray arg0, jint arg1) const;
		void requestShowKeyboardShortcuts() const;
		jboolean requestVisibleBehind(jboolean arg0) const;
		jboolean requestWindowFeature(jint arg0) const;
		android::view::View requireViewById(jint arg0) const;
		void runOnUiThread(JObject arg0) const;
		void setActionBar(android::widget::Toolbar arg0) const;
		void setContentTransitionManager(android::transition::TransitionManager arg0) const;
		void setContentView(android::view::View arg0) const;
		void setContentView(jint arg0) const;
		void setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const;
		void setDefaultKeyMode(jint arg0) const;
		void setEnterSharedElementCallback(android::app::SharedElementCallback arg0) const;
		void setExitSharedElementCallback(android::app::SharedElementCallback arg0) const;
		void setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const;
		void setFeatureDrawableAlpha(jint arg0, jint arg1) const;
		void setFeatureDrawableResource(jint arg0, jint arg1) const;
		void setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const;
		void setFinishOnTouchOutside(jboolean arg0) const;
		void setImmersive(jboolean arg0) const;
		void setInheritShowWhenLocked(jboolean arg0) const;
		void setIntent(android::content::Intent arg0) const;
		void setMediaController(android::media::session::MediaController arg0) const;
		void setPictureInPictureParams(android::app::PictureInPictureParams arg0) const;
		void setProgress(jint arg0) const;
		void setProgressBarIndeterminate(jboolean arg0) const;
		void setProgressBarIndeterminateVisibility(jboolean arg0) const;
		void setProgressBarVisibility(jboolean arg0) const;
		void setRequestedOrientation(jint arg0) const;
		void setResult(jint arg0) const;
		void setResult(jint arg0, android::content::Intent arg1) const;
		void setSecondaryProgress(jint arg0) const;
		void setShowWhenLocked(jboolean arg0) const;
		void setTaskDescription(android::app::ActivityManager_TaskDescription arg0) const;
		void setTheme(jint arg0) const;
		void setTitle(jint arg0) const;
		void setTitle(JString arg0) const;
		void setTitleColor(jint arg0) const;
		void setTurnScreenOn(jboolean arg0) const;
		void setVisible(jboolean arg0) const;
		void setVolumeControlStream(jint arg0) const;
		void setVrModeEnabled(jboolean arg0, android::content::ComponentName arg1) const;
		jboolean shouldShowRequestPermissionRationale(JString arg0) const;
		jboolean shouldUpRecreateTask(android::content::Intent arg0) const;
		jboolean showAssist(android::os::Bundle arg0) const;
		jboolean showDialog(jint arg0, android::os::Bundle arg1) const;
		void showDialog(jint arg0) const;
		void showLockTaskEscapeMessage() const;
		android::view::ActionMode startActionMode(JObject arg0) const;
		android::view::ActionMode startActionMode(JObject arg0, jint arg1) const;
		void startActivities(JArray arg0) const;
		void startActivities(JArray arg0, android::os::Bundle arg1) const;
		void startActivity(android::content::Intent arg0) const;
		void startActivity(android::content::Intent arg0, android::os::Bundle arg1) const;
		void startActivityForResult(android::content::Intent arg0, jint arg1) const;
		void startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const;
		void startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2) const;
		void startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const;
		void startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2) const;
		void startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const;
		jboolean startActivityIfNeeded(android::content::Intent arg0, jint arg1) const;
		jboolean startActivityIfNeeded(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const;
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4) const;
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5) const;
		void startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5) const;
		void startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6) const;
		void startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6) const;
		void startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7) const;
		void startLocalVoiceInteraction(android::os::Bundle arg0) const;
		void startLockTask() const;
		void startManagingCursor(JObject arg0) const;
		jboolean startNextMatchingActivity(android::content::Intent arg0) const;
		jboolean startNextMatchingActivity(android::content::Intent arg0, android::os::Bundle arg1) const;
		void startPostponedEnterTransition() const;
		void startSearch(JString arg0, jboolean arg1, android::os::Bundle arg2, jboolean arg3) const;
		void stopLocalVoiceInteraction() const;
		void stopLockTask() const;
		void stopManagingCursor(JObject arg0) const;
		void takeKeyEvents(jboolean arg0) const;
		void triggerSearch(JString arg0, android::os::Bundle arg1) const;
		void unregisterActivityLifecycleCallbacks(JObject arg0) const;
		void unregisterForContextMenu(android::view::View arg0) const;
	};
} // namespace android::app


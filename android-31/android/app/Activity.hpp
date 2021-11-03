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
	class PictureInPictureUiState;
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
namespace android::content
{
	class LocusId;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Activity(const char *className, const char *sig, Ts...agv) : android::view::ContextThemeWrapper(className, sig, std::forward<Ts>(agv)...) {}
		Activity(QJniObject obj);
		
		// Constructors
		Activity();
		
		// Methods
		void addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void closeContextMenu();
		void closeOptionsMenu();
		android::app::PendingIntent createPendingResult(jint arg0, android::content::Intent arg1, jint arg2);
		void dismissDialog(jint arg0);
		void dismissKeyboardShortcutsHelper();
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0);
		jboolean dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0);
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3);
		jboolean enterPictureInPictureMode(android::app::PictureInPictureParams arg0);
		void enterPictureInPictureMode();
		android::view::View findViewById(jint arg0);
		void finish();
		void finishActivity(jint arg0);
		void finishActivityFromChild(android::app::Activity arg0, jint arg1);
		void finishAffinity();
		void finishAfterTransition();
		void finishAndRemoveTask();
		void finishFromChild(android::app::Activity arg0);
		android::app::ActionBar getActionBar();
		android::app::Application getApplication();
		android::content::ComponentName getCallingActivity();
		JString getCallingPackage();
		jint getChangingConfigurations();
		android::content::ComponentName getComponentName();
		android::transition::Scene getContentScene();
		android::transition::TransitionManager getContentTransitionManager();
		android::view::View getCurrentFocus();
		android::app::FragmentManager getFragmentManager();
		android::content::Intent getIntent();
		JObject getLastNonConfigurationInstance();
		android::view::LayoutInflater getLayoutInflater();
		android::app::LoaderManager getLoaderManager();
		JString getLocalClassName();
		jint getMaxNumPictureInPictureActions();
		android::media::session::MediaController getMediaController();
		android::view::MenuInflater getMenuInflater();
		android::app::Activity getParent();
		android::content::Intent getParentActivityIntent();
		JObject getPreferences(jint arg0);
		android::net::Uri getReferrer();
		jint getRequestedOrientation();
		android::view::SearchEvent getSearchEvent();
		JObject getSplashScreen();
		JObject getSystemService(JString arg0);
		jint getTaskId();
		JString getTitle();
		jint getTitleColor();
		android::app::VoiceInteractor getVoiceInteractor();
		jint getVolumeControlStream();
		android::view::Window getWindow();
		JObject getWindowManager();
		jboolean hasWindowFocus();
		void invalidateOptionsMenu();
		jboolean isActivityTransitionRunning();
		jboolean isChangingConfigurations();
		jboolean isChild();
		jboolean isDestroyed();
		jboolean isFinishing();
		jboolean isImmersive();
		jboolean isInMultiWindowMode();
		jboolean isInPictureInPictureMode();
		jboolean isLaunchedFromBubble();
		jboolean isLocalVoiceInteractionSupported();
		jboolean isTaskRoot();
		jboolean isVoiceInteraction();
		jboolean isVoiceInteractionRoot();
		JObject managedQuery(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4);
		jboolean moveTaskToBack(jboolean arg0);
		jboolean navigateUpTo(android::content::Intent arg0);
		jboolean navigateUpToFromChild(android::app::Activity arg0, android::content::Intent arg1);
		void onActionModeFinished(android::view::ActionMode arg0);
		void onActionModeStarted(android::view::ActionMode arg0);
		void onActivityReenter(jint arg0, android::content::Intent arg1);
		void onAttachFragment(android::app::Fragment arg0);
		void onAttachedToWindow();
		void onBackPressed();
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onContentChanged();
		jboolean onContextItemSelected(JObject arg0);
		void onContextMenuClosed(JObject arg0);
		void onCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1);
		void onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2);
		JString onCreateDescription();
		void onCreateNavigateUpTaskStack(android::app::TaskStackBuilder arg0);
		jboolean onCreateOptionsMenu(JObject arg0);
		jboolean onCreatePanelMenu(jint arg0, JObject arg1);
		android::view::View onCreatePanelView(jint arg0);
		jboolean onCreateThumbnail(android::graphics::Bitmap arg0, android::graphics::Canvas arg1);
		android::view::View onCreateView(JString arg0, android::content::Context arg1, JObject arg2);
		android::view::View onCreateView(android::view::View arg0, JString arg1, android::content::Context arg2, JObject arg3);
		void onDetachedFromWindow();
		void onEnterAnimationComplete();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		void onGetDirectActions(android::os::CancellationSignal arg0, JObject arg1);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void onLocalVoiceInteractionStarted();
		void onLocalVoiceInteractionStopped();
		void onLowMemory();
		jboolean onMenuItemSelected(jint arg0, JObject arg1);
		jboolean onMenuOpened(jint arg0, JObject arg1);
		void onMultiWindowModeChanged(jboolean arg0);
		void onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1);
		jboolean onNavigateUp();
		jboolean onNavigateUpFromChild(android::app::Activity arg0);
		jboolean onOptionsItemSelected(JObject arg0);
		void onOptionsMenuClosed(JObject arg0);
		void onPanelClosed(jint arg0, JObject arg1);
		void onPerformDirectAction(JString arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, JObject arg3);
		void onPictureInPictureModeChanged(jboolean arg0);
		void onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1);
		jboolean onPictureInPictureRequested();
		void onPictureInPictureUiStateChanged(android::app::PictureInPictureUiState arg0);
		void onPostCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1);
		void onPrepareNavigateUpTaskStack(android::app::TaskStackBuilder arg0);
		jboolean onPrepareOptionsMenu(JObject arg0);
		jboolean onPreparePanel(jint arg0, android::view::View arg1, JObject arg2);
		void onProvideAssistContent(android::app::assist::AssistContent arg0);
		void onProvideAssistData(android::os::Bundle arg0);
		void onProvideKeyboardShortcuts(JObject arg0, JObject arg1, jint arg2);
		android::net::Uri onProvideReferrer();
		void onRequestPermissionsResult(jint arg0, JArray arg1, JIntArray arg2);
		void onRestoreInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1);
		JObject onRetainNonConfigurationInstance();
		void onSaveInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1);
		jboolean onSearchRequested();
		jboolean onSearchRequested(android::view::SearchEvent arg0);
		void onStateNotSaved();
		void onTopResumedActivityChanged(jboolean arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void onTrimMemory(jint arg0);
		void onUserInteraction();
		void onVisibleBehindCanceled();
		void onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0);
		void onWindowFocusChanged(jboolean arg0);
		android::view::ActionMode onWindowStartingActionMode(JObject arg0);
		android::view::ActionMode onWindowStartingActionMode(JObject arg0, jint arg1);
		void openContextMenu(android::view::View arg0);
		void openOptionsMenu();
		void overridePendingTransition(jint arg0, jint arg1);
		void postponeEnterTransition();
		void recreate();
		void registerActivityLifecycleCallbacks(JObject arg0);
		void registerForContextMenu(android::view::View arg0);
		jboolean releaseInstance();
		void removeDialog(jint arg0);
		void reportFullyDrawn();
		android::view::DragAndDropPermissions requestDragAndDropPermissions(android::view::DragEvent arg0);
		void requestPermissions(JArray arg0, jint arg1);
		void requestShowKeyboardShortcuts();
		jboolean requestVisibleBehind(jboolean arg0);
		jboolean requestWindowFeature(jint arg0);
		android::view::View requireViewById(jint arg0);
		void runOnUiThread(JObject arg0);
		void setActionBar(android::widget::Toolbar arg0);
		void setContentTransitionManager(android::transition::TransitionManager arg0);
		void setContentView(android::view::View arg0);
		void setContentView(jint arg0);
		void setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void setDefaultKeyMode(jint arg0);
		void setEnterSharedElementCallback(android::app::SharedElementCallback arg0);
		void setExitSharedElementCallback(android::app::SharedElementCallback arg0);
		void setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1);
		void setFeatureDrawableAlpha(jint arg0, jint arg1);
		void setFeatureDrawableResource(jint arg0, jint arg1);
		void setFeatureDrawableUri(jint arg0, android::net::Uri arg1);
		void setFinishOnTouchOutside(jboolean arg0);
		void setImmersive(jboolean arg0);
		void setInheritShowWhenLocked(jboolean arg0);
		void setIntent(android::content::Intent arg0);
		void setLocusContext(android::content::LocusId arg0, android::os::Bundle arg1);
		void setMediaController(android::media::session::MediaController arg0);
		void setPictureInPictureParams(android::app::PictureInPictureParams arg0);
		void setProgress(jint arg0);
		void setProgressBarIndeterminate(jboolean arg0);
		void setProgressBarIndeterminateVisibility(jboolean arg0);
		void setProgressBarVisibility(jboolean arg0);
		void setRequestedOrientation(jint arg0);
		void setResult(jint arg0);
		void setResult(jint arg0, android::content::Intent arg1);
		void setSecondaryProgress(jint arg0);
		void setShowWhenLocked(jboolean arg0);
		void setTaskDescription(android::app::ActivityManager_TaskDescription arg0);
		void setTheme(jint arg0);
		void setTitle(jint arg0);
		void setTitle(JString arg0);
		void setTitleColor(jint arg0);
		jboolean setTranslucent(jboolean arg0);
		void setTurnScreenOn(jboolean arg0);
		void setVisible(jboolean arg0);
		void setVolumeControlStream(jint arg0);
		void setVrModeEnabled(jboolean arg0, android::content::ComponentName arg1);
		jboolean shouldShowRequestPermissionRationale(JString arg0);
		jboolean shouldUpRecreateTask(android::content::Intent arg0);
		jboolean showAssist(android::os::Bundle arg0);
		jboolean showDialog(jint arg0, android::os::Bundle arg1);
		void showDialog(jint arg0);
		void showLockTaskEscapeMessage();
		android::view::ActionMode startActionMode(JObject arg0);
		android::view::ActionMode startActionMode(JObject arg0, jint arg1);
		void startActivities(JArray arg0);
		void startActivities(JArray arg0, android::os::Bundle arg1);
		void startActivity(android::content::Intent arg0);
		void startActivity(android::content::Intent arg0, android::os::Bundle arg1);
		void startActivityForResult(android::content::Intent arg0, jint arg1);
		void startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2);
		void startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2);
		void startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3);
		void startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2);
		void startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3);
		jboolean startActivityIfNeeded(android::content::Intent arg0, jint arg1);
		jboolean startActivityIfNeeded(android::content::Intent arg0, jint arg1, android::os::Bundle arg2);
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4);
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5);
		void startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5);
		void startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6);
		void startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6);
		void startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7);
		void startLocalVoiceInteraction(android::os::Bundle arg0);
		void startLockTask();
		void startManagingCursor(JObject arg0);
		jboolean startNextMatchingActivity(android::content::Intent arg0);
		jboolean startNextMatchingActivity(android::content::Intent arg0, android::os::Bundle arg1);
		void startPostponedEnterTransition();
		void startSearch(JString arg0, jboolean arg1, android::os::Bundle arg2, jboolean arg3);
		void stopLocalVoiceInteraction();
		void stopLockTask();
		void stopManagingCursor(JObject arg0);
		void takeKeyEvents(jboolean arg0);
		void triggerSearch(JString arg0, android::os::Bundle arg1);
		void unregisterActivityLifecycleCallbacks(JObject arg0);
		void unregisterForContextMenu(android::view::View arg0);
	};
} // namespace android::app


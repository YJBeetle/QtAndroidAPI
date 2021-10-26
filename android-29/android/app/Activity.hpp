#pragma once

#ifndef ANDROID_APP_ACTIVITY
#define ANDROID_APP_ACTIVITY

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::app
{
	class Application;
}
namespace __jni_impl::android::view
{
	class Window;
}
namespace __jni_impl::android::app
{
	class LoaderManager;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::app
{
	class VoiceInteractor;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::app::assist
{
	class AssistContent;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::app
{
	class PictureInPictureParams;
}
namespace __jni_impl::android::app
{
	class FragmentManager;
}
namespace __jni_impl::android::app
{
	class Fragment;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::app
{
	class ActionBar;
}
namespace __jni_impl::android::widget
{
	class Toolbar;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::transition
{
	class TransitionManager;
}
namespace __jni_impl::android::transition
{
	class Scene;
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
namespace __jni_impl::android::app
{
	class TaskStackBuilder;
}
namespace __jni_impl::android::app
{
	class Dialog;
}
namespace __jni_impl::android::view
{
	class SearchEvent;
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
	class MenuInflater;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app
{
	class ActivityManager_TaskDescription;
}
namespace __jni_impl::android::media::session
{
	class MediaController;
}
namespace __jni_impl::android::view
{
	class ActionMode;
}
namespace __jni_impl::android::app
{
	class SharedElementCallback;
}
namespace __jni_impl::android::view
{
	class DragAndDropPermissions;
}
namespace __jni_impl::android::view
{
	class DragEvent;
}

namespace __jni_impl::android::app
{
	class Activity : public __jni_impl::android::view::ContextThemeWrapper
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
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getParent();
		jboolean isDestroyed();
		void setResult(jint arg0, __jni_impl::android::content::Intent arg1);
		void setResult(jint arg0);
		void finish();
		void setTheme(jint arg0);
		void startActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1);
		void startActivity(__jni_impl::android::content::Intent arg0);
		void startActivities(jarray arg0, __jni_impl::android::os::Bundle arg1);
		void startActivities(jarray arg0);
		void startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5);
		void startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4);
		jobject getSystemService(jstring arg0);
		jobject getSystemService(const QString &arg0);
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void dump(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		QAndroidJniObject getIntent();
		void setIntent(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject getApplication();
		jboolean isChild();
		QAndroidJniObject getWindowManager();
		QAndroidJniObject getWindow();
		QAndroidJniObject getLoaderManager();
		QAndroidJniObject getCurrentFocus();
		void registerActivityLifecycleCallbacks(__jni_impl::__JniBaseClass arg0);
		void unregisterActivityLifecycleCallbacks(__jni_impl::__JniBaseClass arg0);
		void onCreate(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::PersistableBundle arg1);
		void onRestoreInstanceState(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::PersistableBundle arg1);
		void onPostCreate(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::PersistableBundle arg1);
		void onStateNotSaved();
		void onTopResumedActivityChanged(jboolean arg0);
		jboolean isVoiceInteraction();
		jboolean isVoiceInteractionRoot();
		QAndroidJniObject getVoiceInteractor();
		jboolean isLocalVoiceInteractionSupported();
		void startLocalVoiceInteraction(__jni_impl::android::os::Bundle arg0);
		void onLocalVoiceInteractionStarted();
		void onLocalVoiceInteractionStopped();
		void stopLocalVoiceInteraction();
		void onSaveInstanceState(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::PersistableBundle arg1);
		jboolean onCreateThumbnail(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Canvas arg1);
		jstring onCreateDescription();
		void onProvideAssistData(__jni_impl::android::os::Bundle arg0);
		void onProvideAssistContent(__jni_impl::android::app::assist::AssistContent arg0);
		void onGetDirectActions(__jni_impl::android::os::CancellationSignal arg0, __jni_impl::__JniBaseClass arg1);
		void onPerformDirectAction(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3);
		void onPerformDirectAction(const QString &arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3);
		void requestShowKeyboardShortcuts();
		void dismissKeyboardShortcutsHelper();
		void onProvideKeyboardShortcuts(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		jboolean showAssist(__jni_impl::android::os::Bundle arg0);
		void reportFullyDrawn();
		void onMultiWindowModeChanged(jboolean arg0);
		void onMultiWindowModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1);
		jboolean isInMultiWindowMode();
		void onPictureInPictureModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1);
		void onPictureInPictureModeChanged(jboolean arg0);
		jboolean isInPictureInPictureMode();
		jboolean enterPictureInPictureMode(__jni_impl::android::app::PictureInPictureParams arg0);
		void enterPictureInPictureMode();
		void setPictureInPictureParams(__jni_impl::android::app::PictureInPictureParams arg0);
		jint getMaxNumPictureInPictureActions();
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		jint getChangingConfigurations();
		jobject getLastNonConfigurationInstance();
		jobject onRetainNonConfigurationInstance();
		void onLowMemory();
		void onTrimMemory(jint arg0);
		QAndroidJniObject getFragmentManager();
		void onAttachFragment(__jni_impl::android::app::Fragment arg0);
		QAndroidJniObject managedQuery(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject managedQuery(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4);
		void startManagingCursor(__jni_impl::__JniBaseClass arg0);
		void stopManagingCursor(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject findViewById(jint arg0);
		QAndroidJniObject requireViewById(jint arg0);
		QAndroidJniObject getActionBar();
		void setActionBar(__jni_impl::android::widget::Toolbar arg0);
		void setContentView(__jni_impl::android::view::View arg0);
		void setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void setContentView(jint arg0);
		void addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		QAndroidJniObject getContentTransitionManager();
		void setContentTransitionManager(__jni_impl::android::transition::TransitionManager arg0);
		QAndroidJniObject getContentScene();
		void setFinishOnTouchOutside(jboolean arg0);
		void setDefaultKeyMode(jint arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		void onBackPressed();
		jboolean onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onUserInteraction();
		void onWindowAttributesChanged(__jni_impl::android::view::WindowManager_LayoutParams arg0);
		void onContentChanged();
		void onWindowFocusChanged(jboolean arg0);
		void onAttachedToWindow();
		void onDetachedFromWindow();
		jboolean hasWindowFocus();
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
		jboolean onNavigateUp();
		jboolean onNavigateUpFromChild(__jni_impl::android::app::Activity arg0);
		void onCreateNavigateUpTaskStack(__jni_impl::android::app::TaskStackBuilder arg0);
		void onPrepareNavigateUpTaskStack(__jni_impl::android::app::TaskStackBuilder arg0);
		void onOptionsMenuClosed(__jni_impl::__JniBaseClass arg0);
		void openOptionsMenu();
		void closeOptionsMenu();
		void onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2);
		void registerForContextMenu(__jni_impl::android::view::View arg0);
		void unregisterForContextMenu(__jni_impl::android::view::View arg0);
		void openContextMenu(__jni_impl::android::view::View arg0);
		void closeContextMenu();
		jboolean onContextItemSelected(__jni_impl::__JniBaseClass arg0);
		void onContextMenuClosed(__jni_impl::__JniBaseClass arg0);
		void showDialog(jint arg0);
		jboolean showDialog(jint arg0, __jni_impl::android::os::Bundle arg1);
		void dismissDialog(jint arg0);
		void removeDialog(jint arg0);
		jboolean onSearchRequested();
		jboolean onSearchRequested(__jni_impl::android::view::SearchEvent arg0);
		QAndroidJniObject getSearchEvent();
		void startSearch(jstring arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2, jboolean arg3);
		void startSearch(const QString &arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2, jboolean arg3);
		void triggerSearch(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void triggerSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void takeKeyEvents(jboolean arg0);
		jboolean requestWindowFeature(jint arg0);
		void setFeatureDrawableResource(jint arg0, jint arg1);
		void setFeatureDrawableUri(jint arg0, __jni_impl::android::net::Uri arg1);
		void setFeatureDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setFeatureDrawableAlpha(jint arg0, jint arg1);
		QAndroidJniObject getLayoutInflater();
		QAndroidJniObject getMenuInflater();
		void requestPermissions(jarray arg0, jint arg1);
		void onRequestPermissionsResult(jint arg0, jarray arg1, jintArray arg2);
		jboolean shouldShowRequestPermissionRationale(jstring arg0);
		jboolean shouldShowRequestPermissionRationale(const QString &arg0);
		void startActivityForResult(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		void startActivityForResult(__jni_impl::android::content::Intent arg0, jint arg1);
		jboolean isActivityTransitionRunning();
		void startIntentSenderForResult(__jni_impl::android::content::IntentSender arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3, jint arg4, jint arg5);
		void startIntentSenderForResult(__jni_impl::android::content::IntentSender arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3, jint arg4, jint arg5, __jni_impl::android::os::Bundle arg6);
		jboolean startActivityIfNeeded(__jni_impl::android::content::Intent arg0, jint arg1);
		jboolean startActivityIfNeeded(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		jboolean startNextMatchingActivity(__jni_impl::android::content::Intent arg0);
		jboolean startNextMatchingActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1);
		void startActivityFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1, jint arg2);
		void startActivityFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::os::Bundle arg3);
		void startActivityFromFragment(__jni_impl::android::app::Fragment arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::os::Bundle arg3);
		void startActivityFromFragment(__jni_impl::android::app::Fragment arg0, __jni_impl::android::content::Intent arg1, jint arg2);
		void startIntentSenderFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::IntentSender arg1, jint arg2, __jni_impl::android::content::Intent arg3, jint arg4, jint arg5, jint arg6);
		void startIntentSenderFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::IntentSender arg1, jint arg2, __jni_impl::android::content::Intent arg3, jint arg4, jint arg5, jint arg6, __jni_impl::android::os::Bundle arg7);
		void overridePendingTransition(jint arg0, jint arg1);
		QAndroidJniObject getReferrer();
		QAndroidJniObject onProvideReferrer();
		jstring getCallingPackage();
		QAndroidJniObject getCallingActivity();
		void setVisible(jboolean arg0);
		jboolean isFinishing();
		jboolean isChangingConfigurations();
		void recreate();
		void finishAffinity();
		void finishFromChild(__jni_impl::android::app::Activity arg0);
		void finishAfterTransition();
		void finishActivity(jint arg0);
		void finishActivityFromChild(__jni_impl::android::app::Activity arg0, jint arg1);
		void finishAndRemoveTask();
		jboolean releaseInstance();
		void onActivityReenter(jint arg0, __jni_impl::android::content::Intent arg1);
		QAndroidJniObject createPendingResult(jint arg0, __jni_impl::android::content::Intent arg1, jint arg2);
		void setRequestedOrientation(jint arg0);
		jint getRequestedOrientation();
		jint getTaskId();
		jboolean isTaskRoot();
		jboolean moveTaskToBack(jboolean arg0);
		jstring getLocalClassName();
		QAndroidJniObject getComponentName();
		QAndroidJniObject getPreferences(jint arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setTitle(const QString &arg0);
		void setTitleColor(jint arg0);
		jstring getTitle();
		jint getTitleColor();
		void setTaskDescription(__jni_impl::android::app::ActivityManager_TaskDescription arg0);
		void setProgressBarVisibility(jboolean arg0);
		void setProgressBarIndeterminateVisibility(jboolean arg0);
		void setProgressBarIndeterminate(jboolean arg0);
		void setProgress(jint arg0);
		void setSecondaryProgress(jint arg0);
		void setVolumeControlStream(jint arg0);
		jint getVolumeControlStream();
		void setMediaController(__jni_impl::android::media::session::MediaController arg0);
		QAndroidJniObject getMediaController();
		void runOnUiThread(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onCreateView(jstring arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject onCreateView(const QString &arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject onCreateView(__jni_impl::android::view::View arg0, jstring arg1, __jni_impl::android::content::Context arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject onCreateView(__jni_impl::android::view::View arg0, const QString &arg1, __jni_impl::android::content::Context arg2, __jni_impl::__JniBaseClass arg3);
		jboolean isImmersive();
		jboolean requestVisibleBehind(jboolean arg0);
		void onVisibleBehindCanceled();
		void onEnterAnimationComplete();
		void setImmersive(jboolean arg0);
		void setVrModeEnabled(jboolean arg0, __jni_impl::android::content::ComponentName arg1);
		QAndroidJniObject startActionMode(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject startActionMode(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0);
		void onActionModeStarted(__jni_impl::android::view::ActionMode arg0);
		void onActionModeFinished(__jni_impl::android::view::ActionMode arg0);
		jboolean shouldUpRecreateTask(__jni_impl::android::content::Intent arg0);
		jboolean navigateUpTo(__jni_impl::android::content::Intent arg0);
		jboolean navigateUpToFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1);
		QAndroidJniObject getParentActivityIntent();
		void setEnterSharedElementCallback(__jni_impl::android::app::SharedElementCallback arg0);
		void setExitSharedElementCallback(__jni_impl::android::app::SharedElementCallback arg0);
		void postponeEnterTransition();
		void startPostponedEnterTransition();
		QAndroidJniObject requestDragAndDropPermissions(__jni_impl::android::view::DragEvent arg0);
		void startLockTask();
		void stopLockTask();
		void showLockTaskEscapeMessage();
		void setShowWhenLocked(jboolean arg0);
		void setInheritShowWhenLocked(jboolean arg0);
		void setTurnScreenOn(jboolean arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../content/IntentSender.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "Application.hpp"
#include "../view/Window.hpp"
#include "LoaderManager.hpp"
#include "../view/View.hpp"
#include "../content/Context.hpp"
#include "../os/PersistableBundle.hpp"
#include "VoiceInteractor.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Canvas.hpp"
#include "assist/AssistContent.hpp"
#include "../os/CancellationSignal.hpp"
#include "../content/res/Configuration.hpp"
#include "PictureInPictureParams.hpp"
#include "FragmentManager.hpp"
#include "Fragment.hpp"
#include "../net/Uri.hpp"
#include "ActionBar.hpp"
#include "../widget/Toolbar.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../transition/TransitionManager.hpp"
#include "../transition/Scene.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/WindowManager_LayoutParams.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "TaskStackBuilder.hpp"
#include "Dialog.hpp"
#include "../view/SearchEvent.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MenuInflater.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../content/ComponentName.hpp"
#include "PendingIntent.hpp"
#include "ActivityManager_TaskDescription.hpp"
#include "../media/session/MediaController.hpp"
#include "../view/ActionMode.hpp"
#include "SharedElementCallback.hpp"
#include "../view/DragAndDropPermissions.hpp"
#include "../view/DragEvent.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint Activity::DEFAULT_KEYS_DIALER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_DIALER"
		);
	}
	jint Activity::DEFAULT_KEYS_DISABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_DISABLE"
		);
	}
	jint Activity::DEFAULT_KEYS_SEARCH_GLOBAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SEARCH_GLOBAL"
		);
	}
	jint Activity::DEFAULT_KEYS_SEARCH_LOCAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SEARCH_LOCAL"
		);
	}
	jint Activity::DEFAULT_KEYS_SHORTCUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SHORTCUT"
		);
	}
	jint Activity::RESULT_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Activity",
			"RESULT_CANCELED"
		);
	}
	jint Activity::RESULT_FIRST_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Activity",
			"RESULT_FIRST_USER"
		);
	}
	jint Activity::RESULT_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Activity",
			"RESULT_OK"
		);
	}
	
	// Constructors
	void Activity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Activity",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Activity::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/app/Activity;"
		);
	}
	jboolean Activity::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	void Activity::setResult(jint arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::setResult(jint arg0)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(I)V",
			arg0
		);
	}
	void Activity::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	void Activity::setTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void Activity::startActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::startActivity(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::startActivities(jarray arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::startActivities(jarray arg0)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0
		);
	}
	void Activity::startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void Activity::startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jobject Activity::getSystemService(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Activity::getSystemService(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	void Activity::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Activity::dump(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Activity::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	void Activity::setIntent(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::getApplication()
	{
		return __thiz.callObjectMethod(
			"getApplication",
			"()Landroid/app/Application;"
		);
	}
	jboolean Activity::isChild()
	{
		return __thiz.callMethod<jboolean>(
			"isChild",
			"()Z"
		);
	}
	QAndroidJniObject Activity::getWindowManager()
	{
		return __thiz.callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	QAndroidJniObject Activity::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	QAndroidJniObject Activity::getLoaderManager()
	{
		return __thiz.callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	QAndroidJniObject Activity::getCurrentFocus()
	{
		return __thiz.callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	void Activity::registerActivityLifecycleCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::unregisterActivityLifecycleCallbacks(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onCreate(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::onRestoreInstanceState(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::onPostCreate(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onPostCreate",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::onStateNotSaved()
	{
		__thiz.callMethod<void>(
			"onStateNotSaved",
			"()V"
		);
	}
	void Activity::onTopResumedActivityChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onTopResumedActivityChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean Activity::isVoiceInteraction()
	{
		return __thiz.callMethod<jboolean>(
			"isVoiceInteraction",
			"()Z"
		);
	}
	jboolean Activity::isVoiceInteractionRoot()
	{
		return __thiz.callMethod<jboolean>(
			"isVoiceInteractionRoot",
			"()Z"
		);
	}
	QAndroidJniObject Activity::getVoiceInteractor()
	{
		return __thiz.callObjectMethod(
			"getVoiceInteractor",
			"()Landroid/app/VoiceInteractor;"
		);
	}
	jboolean Activity::isLocalVoiceInteractionSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isLocalVoiceInteractionSupported",
			"()Z"
		);
	}
	void Activity::startLocalVoiceInteraction(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"startLocalVoiceInteraction",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onLocalVoiceInteractionStarted()
	{
		__thiz.callMethod<void>(
			"onLocalVoiceInteractionStarted",
			"()V"
		);
	}
	void Activity::onLocalVoiceInteractionStopped()
	{
		__thiz.callMethod<void>(
			"onLocalVoiceInteractionStopped",
			"()V"
		);
	}
	void Activity::stopLocalVoiceInteraction()
	{
		__thiz.callMethod<void>(
			"stopLocalVoiceInteraction",
			"()V"
		);
	}
	void Activity::onSaveInstanceState(__jni_impl::android::os::Bundle arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onCreateThumbnail(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Canvas arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onCreateThumbnail",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Canvas;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring Activity::onCreateDescription()
	{
		return __thiz.callObjectMethod(
			"onCreateDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Activity::onProvideAssistData(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onProvideAssistData",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onProvideAssistContent(__jni_impl::android::app::assist::AssistContent arg0)
	{
		__thiz.callMethod<void>(
			"onProvideAssistContent",
			"(Landroid/app/assist/AssistContent;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onGetDirectActions(__jni_impl::android::os::CancellationSignal arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onGetDirectActions",
			"(Landroid/os/CancellationSignal;Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::onPerformDirectAction(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"onPerformDirectAction",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;Ljava/util/function/Consumer;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void Activity::onPerformDirectAction(const QString &arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"onPerformDirectAction",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;Ljava/util/function/Consumer;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void Activity::requestShowKeyboardShortcuts()
	{
		__thiz.callMethod<void>(
			"requestShowKeyboardShortcuts",
			"()V"
		);
	}
	void Activity::dismissKeyboardShortcutsHelper()
	{
		__thiz.callMethod<void>(
			"dismissKeyboardShortcutsHelper",
			"()V"
		);
	}
	void Activity::onProvideKeyboardShortcuts(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onProvideKeyboardShortcuts",
			"(Ljava/util/List;Landroid/view/Menu;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean Activity::showAssist(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"showAssist",
			"(Landroid/os/Bundle;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::reportFullyDrawn()
	{
		__thiz.callMethod<void>(
			"reportFullyDrawn",
			"()V"
		);
	}
	void Activity::onMultiWindowModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Activity::onMultiWindowModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::isInMultiWindowMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInMultiWindowMode",
			"()Z"
		);
	}
	void Activity::onPictureInPictureModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::onPictureInPictureModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean Activity::isInPictureInPictureMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInPictureInPictureMode",
			"()Z"
		);
	}
	jboolean Activity::enterPictureInPictureMode(__jni_impl::android::app::PictureInPictureParams arg0)
	{
		return __thiz.callMethod<jboolean>(
			"enterPictureInPictureMode",
			"(Landroid/app/PictureInPictureParams;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::enterPictureInPictureMode()
	{
		__thiz.callMethod<void>(
			"enterPictureInPictureMode",
			"()V"
		);
	}
	void Activity::setPictureInPictureParams(__jni_impl::android::app::PictureInPictureParams arg0)
	{
		__thiz.callMethod<void>(
			"setPictureInPictureParams",
			"(Landroid/app/PictureInPictureParams;)V",
			arg0.__jniObject().object()
		);
	}
	jint Activity::getMaxNumPictureInPictureActions()
	{
		return __thiz.callMethod<jint>(
			"getMaxNumPictureInPictureActions",
			"()I"
		);
	}
	void Activity::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	jint Activity::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jobject Activity::getLastNonConfigurationInstance()
	{
		return __thiz.callObjectMethod(
			"getLastNonConfigurationInstance",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Activity::onRetainNonConfigurationInstance()
	{
		return __thiz.callObjectMethod(
			"onRetainNonConfigurationInstance",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void Activity::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Activity::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Activity::getFragmentManager()
	{
		return __thiz.callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	void Activity::onAttachFragment(__jni_impl::android::app::Fragment arg0)
	{
		__thiz.callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::managedQuery(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return __thiz.callObjectMethod(
			"managedQuery",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject Activity::managedQuery(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4)
	{
		return __thiz.callObjectMethod(
			"managedQuery",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	void Activity::startManagingCursor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"startManagingCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::stopManagingCursor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"stopManagingCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	QAndroidJniObject Activity::requireViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	QAndroidJniObject Activity::getActionBar()
	{
		return __thiz.callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;"
		);
	}
	void Activity::setActionBar(__jni_impl::android::widget::Toolbar arg0)
	{
		__thiz.callMethod<void>(
			"setActionBar",
			"(Landroid/widget/Toolbar;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setContentView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::setContentView(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void Activity::addContentView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::getContentTransitionManager()
	{
		return __thiz.callObjectMethod(
			"getContentTransitionManager",
			"()Landroid/transition/TransitionManager;"
		);
	}
	void Activity::setContentTransitionManager(__jni_impl::android::transition::TransitionManager arg0)
	{
		__thiz.callMethod<void>(
			"setContentTransitionManager",
			"(Landroid/transition/TransitionManager;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::getContentScene()
	{
		return __thiz.callObjectMethod(
			"getContentScene",
			"()Landroid/transition/Scene;"
		);
	}
	void Activity::setFinishOnTouchOutside(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFinishOnTouchOutside",
			"(Z)V",
			arg0
		);
	}
	void Activity::setDefaultKeyMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultKeyMode",
			"(I)V",
			arg0
		);
	}
	jboolean Activity::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Activity::onBackPressed()
	{
		__thiz.callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	jboolean Activity::onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::onUserInteraction()
	{
		__thiz.callMethod<void>(
			"onUserInteraction",
			"()V"
		);
	}
	void Activity::onWindowAttributesChanged(__jni_impl::android::view::WindowManager_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void Activity::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void Activity::onAttachedToWindow()
	{
		__thiz.callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	void Activity::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	jboolean Activity::hasWindowFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	jboolean Activity::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchPopulateAccessibilityEvent(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onCreatePanelView(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean Activity::onCreatePanelMenu(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onPreparePanel(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean Activity::onMenuOpened(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onMenuItemSelected(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::onPanelClosed(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::invalidateOptionsMenu()
	{
		__thiz.callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	jboolean Activity::onCreateOptionsMenu(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onPrepareOptionsMenu(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onOptionsItemSelected(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onNavigateUp()
	{
		return __thiz.callMethod<jboolean>(
			"onNavigateUp",
			"()Z"
		);
	}
	jboolean Activity::onNavigateUpFromChild(__jni_impl::android::app::Activity arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onNavigateUpFromChild",
			"(Landroid/app/Activity;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::onCreateNavigateUpTaskStack(__jni_impl::android::app::TaskStackBuilder arg0)
	{
		__thiz.callMethod<void>(
			"onCreateNavigateUpTaskStack",
			"(Landroid/app/TaskStackBuilder;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onPrepareNavigateUpTaskStack(__jni_impl::android::app::TaskStackBuilder arg0)
	{
		__thiz.callMethod<void>(
			"onPrepareNavigateUpTaskStack",
			"(Landroid/app/TaskStackBuilder;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onOptionsMenuClosed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::openOptionsMenu()
	{
		__thiz.callMethod<void>(
			"openOptionsMenu",
			"()V"
		);
	}
	void Activity::closeOptionsMenu()
	{
		__thiz.callMethod<void>(
			"closeOptionsMenu",
			"()V"
		);
	}
	void Activity::onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Activity::registerForContextMenu(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::unregisterForContextMenu(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::openContextMenu(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::closeContextMenu()
	{
		__thiz.callMethod<void>(
			"closeContextMenu",
			"()V"
		);
	}
	jboolean Activity::onContextItemSelected(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::onContextMenuClosed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::showDialog(jint arg0)
	{
		__thiz.callMethod<void>(
			"showDialog",
			"(I)V",
			arg0
		);
	}
	jboolean Activity::showDialog(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showDialog",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::dismissDialog(jint arg0)
	{
		__thiz.callMethod<void>(
			"dismissDialog",
			"(I)V",
			arg0
		);
	}
	void Activity::removeDialog(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeDialog",
			"(I)V",
			arg0
		);
	}
	jboolean Activity::onSearchRequested()
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	jboolean Activity::onSearchRequested(__jni_impl::android::view::SearchEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::getSearchEvent()
	{
		return __thiz.callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;"
		);
	}
	void Activity::startSearch(jstring arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"startSearch",
			"(Ljava/lang/String;ZLandroid/os/Bundle;Z)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Activity::startSearch(const QString &arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"startSearch",
			"(Ljava/lang/String;ZLandroid/os/Bundle;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Activity::triggerSearch(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"triggerSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::triggerSearch(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"triggerSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Activity::takeKeyEvents(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	jboolean Activity::requestWindowFeature(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
			arg0
		);
	}
	void Activity::setFeatureDrawableResource(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Activity::setFeatureDrawableUri(jint arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::setFeatureDrawable(jint arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::setFeatureDrawableAlpha(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Activity::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	QAndroidJniObject Activity::getMenuInflater()
	{
		return __thiz.callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	void Activity::requestPermissions(jarray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"requestPermissions",
			"([Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Activity::onRequestPermissionsResult(jint arg0, jarray arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"onRequestPermissionsResult",
			"(I[Ljava/lang/String;[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Activity::shouldShowRequestPermissionRationale(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Activity::shouldShowRequestPermissionRationale(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Activity::startActivityForResult(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Activity::startActivityForResult(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Activity::isActivityTransitionRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isActivityTransitionRunning",
			"()Z"
		);
	}
	void Activity::startIntentSenderForResult(__jni_impl::android::content::IntentSender arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5
		);
	}
	void Activity::startIntentSenderForResult(__jni_impl::android::content::IntentSender arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3, jint arg4, jint arg5, __jni_impl::android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	jboolean Activity::startActivityIfNeeded(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"startActivityIfNeeded",
			"(Landroid/content/Intent;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Activity::startActivityIfNeeded(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"startActivityIfNeeded",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Activity::startNextMatchingActivity(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"startNextMatchingActivity",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::startNextMatchingActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"startNextMatchingActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::startActivityFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"startActivityFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Activity::startActivityFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"startActivityFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Activity::startActivityFromFragment(__jni_impl::android::app::Fragment arg0, __jni_impl::android::content::Intent arg1, jint arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"startActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Activity::startActivityFromFragment(__jni_impl::android::app::Fragment arg0, __jni_impl::android::content::Intent arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"startActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Activity::startIntentSenderFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::IntentSender arg1, jint arg2, __jni_impl::android::content::Intent arg3, jint arg4, jint arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"startIntentSenderFromChild",
			"(Landroid/app/Activity;Landroid/content/IntentSender;ILandroid/content/Intent;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6
		);
	}
	void Activity::startIntentSenderFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::IntentSender arg1, jint arg2, __jni_impl::android::content::Intent arg3, jint arg4, jint arg5, jint arg6, __jni_impl::android::os::Bundle arg7)
	{
		__thiz.callMethod<void>(
			"startIntentSenderFromChild",
			"(Landroid/app/Activity;Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	void Activity::overridePendingTransition(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"overridePendingTransition",
			"(II)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Activity::getReferrer()
	{
		return __thiz.callObjectMethod(
			"getReferrer",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Activity::onProvideReferrer()
	{
		return __thiz.callObjectMethod(
			"onProvideReferrer",
			"()Landroid/net/Uri;"
		);
	}
	jstring Activity::getCallingPackage()
	{
		return __thiz.callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Activity::getCallingActivity()
	{
		return __thiz.callObjectMethod(
			"getCallingActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	void Activity::setVisible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVisible",
			"(Z)V",
			arg0
		);
	}
	jboolean Activity::isFinishing()
	{
		return __thiz.callMethod<jboolean>(
			"isFinishing",
			"()Z"
		);
	}
	jboolean Activity::isChangingConfigurations()
	{
		return __thiz.callMethod<jboolean>(
			"isChangingConfigurations",
			"()Z"
		);
	}
	void Activity::recreate()
	{
		__thiz.callMethod<void>(
			"recreate",
			"()V"
		);
	}
	void Activity::finishAffinity()
	{
		__thiz.callMethod<void>(
			"finishAffinity",
			"()V"
		);
	}
	void Activity::finishFromChild(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"finishFromChild",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::finishAfterTransition()
	{
		__thiz.callMethod<void>(
			"finishAfterTransition",
			"()V"
		);
	}
	void Activity::finishActivity(jint arg0)
	{
		__thiz.callMethod<void>(
			"finishActivity",
			"(I)V",
			arg0
		);
	}
	void Activity::finishActivityFromChild(__jni_impl::android::app::Activity arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"finishActivityFromChild",
			"(Landroid/app/Activity;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Activity::finishAndRemoveTask()
	{
		__thiz.callMethod<void>(
			"finishAndRemoveTask",
			"()V"
		);
	}
	jboolean Activity::releaseInstance()
	{
		return __thiz.callMethod<jboolean>(
			"releaseInstance",
			"()Z"
		);
	}
	void Activity::onActivityReenter(jint arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onActivityReenter",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::createPendingResult(jint arg0, __jni_impl::android::content::Intent arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"createPendingResult",
			"(ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Activity::setRequestedOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRequestedOrientation",
			"(I)V",
			arg0
		);
	}
	jint Activity::getRequestedOrientation()
	{
		return __thiz.callMethod<jint>(
			"getRequestedOrientation",
			"()I"
		);
	}
	jint Activity::getTaskId()
	{
		return __thiz.callMethod<jint>(
			"getTaskId",
			"()I"
		);
	}
	jboolean Activity::isTaskRoot()
	{
		return __thiz.callMethod<jboolean>(
			"isTaskRoot",
			"()Z"
		);
	}
	jboolean Activity::moveTaskToBack(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"moveTaskToBack",
			"(Z)Z",
			arg0
		);
	}
	jstring Activity::getLocalClassName()
	{
		return __thiz.callObjectMethod(
			"getLocalClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Activity::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject Activity::getPreferences(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPreferences",
			"(I)Landroid/content/SharedPreferences;",
			arg0
		);
	}
	void Activity::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Activity::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Activity::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Activity::setTitleColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleColor",
			"(I)V",
			arg0
		);
	}
	jstring Activity::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Activity::getTitleColor()
	{
		return __thiz.callMethod<jint>(
			"getTitleColor",
			"()I"
		);
	}
	void Activity::setTaskDescription(__jni_impl::android::app::ActivityManager_TaskDescription arg0)
	{
		__thiz.callMethod<void>(
			"setTaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setProgressBarVisibility(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBarVisibility",
			"(Z)V",
			arg0
		);
	}
	void Activity::setProgressBarIndeterminateVisibility(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBarIndeterminateVisibility",
			"(Z)V",
			arg0
		);
	}
	void Activity::setProgressBarIndeterminate(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBarIndeterminate",
			"(Z)V",
			arg0
		);
	}
	void Activity::setProgress(jint arg0)
	{
		__thiz.callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	void Activity::setSecondaryProgress(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
	void Activity::setVolumeControlStream(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	jint Activity::getVolumeControlStream()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	void Activity::setMediaController(__jni_impl::android::media::session::MediaController arg0)
	{
		__thiz.callMethod<void>(
			"setMediaController",
			"(Landroid/media/session/MediaController;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::getMediaController()
	{
		return __thiz.callObjectMethod(
			"getMediaController",
			"()Landroid/media/session/MediaController;"
		);
	}
	void Activity::runOnUiThread(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"runOnUiThread",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onCreateView(jstring arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onCreateView(const QString &arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onCreateView(__jni_impl::android::view::View arg0, jstring arg1, __jni_impl::android::content::Context arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onCreateView(__jni_impl::android::view::View arg0, const QString &arg1, __jni_impl::android::content::Context arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean Activity::isImmersive()
	{
		return __thiz.callMethod<jboolean>(
			"isImmersive",
			"()Z"
		);
	}
	jboolean Activity::requestVisibleBehind(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestVisibleBehind",
			"(Z)Z",
			arg0
		);
	}
	void Activity::onVisibleBehindCanceled()
	{
		__thiz.callMethod<void>(
			"onVisibleBehindCanceled",
			"()V"
		);
	}
	void Activity::onEnterAnimationComplete()
	{
		__thiz.callMethod<void>(
			"onEnterAnimationComplete",
			"()V"
		);
	}
	void Activity::setImmersive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setImmersive",
			"(Z)V",
			arg0
		);
	}
	void Activity::setVrModeEnabled(jboolean arg0, __jni_impl::android::content::ComponentName arg1)
	{
		__thiz.callMethod<void>(
			"setVrModeEnabled",
			"(ZLandroid/content/ComponentName;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::startActionMode(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::startActionMode(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Activity::onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Activity::onWindowStartingActionMode(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object()
		);
	}
	void Activity::onActionModeStarted(__jni_impl::android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onActionModeFinished(__jni_impl::android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::shouldUpRecreateTask(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldUpRecreateTask",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::navigateUpTo(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"navigateUpTo",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::navigateUpToFromChild(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"navigateUpToFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::getParentActivityIntent()
	{
		return __thiz.callObjectMethod(
			"getParentActivityIntent",
			"()Landroid/content/Intent;"
		);
	}
	void Activity::setEnterSharedElementCallback(__jni_impl::android::app::SharedElementCallback arg0)
	{
		__thiz.callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setExitSharedElementCallback(__jni_impl::android::app::SharedElementCallback arg0)
	{
		__thiz.callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::postponeEnterTransition()
	{
		__thiz.callMethod<void>(
			"postponeEnterTransition",
			"()V"
		);
	}
	void Activity::startPostponedEnterTransition()
	{
		__thiz.callMethod<void>(
			"startPostponedEnterTransition",
			"()V"
		);
	}
	QAndroidJniObject Activity::requestDragAndDropPermissions(__jni_impl::android::view::DragEvent arg0)
	{
		return __thiz.callObjectMethod(
			"requestDragAndDropPermissions",
			"(Landroid/view/DragEvent;)Landroid/view/DragAndDropPermissions;",
			arg0.__jniObject().object()
		);
	}
	void Activity::startLockTask()
	{
		__thiz.callMethod<void>(
			"startLockTask",
			"()V"
		);
	}
	void Activity::stopLockTask()
	{
		__thiz.callMethod<void>(
			"stopLockTask",
			"()V"
		);
	}
	void Activity::showLockTaskEscapeMessage()
	{
		__thiz.callMethod<void>(
			"showLockTaskEscapeMessage",
			"()V"
		);
	}
	void Activity::setShowWhenLocked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowWhenLocked",
			"(Z)V",
			arg0
		);
	}
	void Activity::setInheritShowWhenLocked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setInheritShowWhenLocked",
			"(Z)V",
			arg0
		);
	}
	void Activity::setTurnScreenOn(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTurnScreenOn",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Activity : public __jni_impl::android::app::Activity
	{
	public:
		Activity(QAndroidJniObject obj) { __thiz = obj; }
		Activity()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITY


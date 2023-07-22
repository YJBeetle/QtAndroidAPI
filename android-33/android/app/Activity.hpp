#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ActionBar.def.hpp"
#include "./ActivityManager_TaskDescription.def.hpp"
#include "./Application.def.hpp"
#include "./Dialog.def.hpp"
#include "./Fragment.def.hpp"
#include "./FragmentManager.def.hpp"
#include "./LoaderManager.def.hpp"
#include "./PendingIntent.def.hpp"
#include "./PictureInPictureParams.def.hpp"
#include "./PictureInPictureUiState.def.hpp"
#include "./SharedElementCallback.def.hpp"
#include "./TaskStackBuilder.def.hpp"
#include "./VoiceInteractor.def.hpp"
#include "./assist/AssistContent.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/IntentSender.def.hpp"
#include "../content/LocusId.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../content/res/Resources_Theme.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../media/session/MediaController.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../transition/Scene.def.hpp"
#include "../transition/TransitionManager.def.hpp"
#include "../view/ActionMode.def.hpp"
#include "../view/DragAndDropPermissions.def.hpp"
#include "../view/DragEvent.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../view/MenuInflater.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/SearchEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/Window.def.hpp"
#include "../view/WindowManager_LayoutParams.def.hpp"
#include "../view/accessibility/AccessibilityEvent.def.hpp"
#include "../widget/Toolbar.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Activity.def.hpp"

namespace android::app
{
	// Fields
	inline jint Activity::DEFAULT_KEYS_DIALER()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_DIALER"
		);
	}
	inline jint Activity::DEFAULT_KEYS_DISABLE()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_DISABLE"
		);
	}
	inline jint Activity::DEFAULT_KEYS_SEARCH_GLOBAL()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SEARCH_GLOBAL"
		);
	}
	inline jint Activity::DEFAULT_KEYS_SEARCH_LOCAL()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SEARCH_LOCAL"
		);
	}
	inline jint Activity::DEFAULT_KEYS_SHORTCUT()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SHORTCUT"
		);
	}
	inline jint Activity::RESULT_CANCELED()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"RESULT_CANCELED"
		);
	}
	inline jint Activity::RESULT_FIRST_USER()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"RESULT_FIRST_USER"
		);
	}
	inline jint Activity::RESULT_OK()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"RESULT_OK"
		);
	}
	
	// Constructors
	inline Activity::Activity()
		: android::view::ContextThemeWrapper(
			"android.app.Activity",
			"()V"
		) {}
	
	// Methods
	inline void Activity::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Activity::closeContextMenu() const
	{
		callMethod<void>(
			"closeContextMenu",
			"()V"
		);
	}
	inline void Activity::closeOptionsMenu() const
	{
		callMethod<void>(
			"closeOptionsMenu",
			"()V"
		);
	}
	inline android::app::PendingIntent Activity::createPendingResult(jint arg0, android::content::Intent arg1, jint arg2) const
	{
		return callObjectMethod(
			"createPendingResult",
			"(ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline void Activity::dismissDialog(jint arg0) const
	{
		callMethod<void>(
			"dismissDialog",
			"(I)V",
			arg0
		);
	}
	inline void Activity::dismissKeyboardShortcutsHelper() const
	{
		callMethod<void>(
			"dismissKeyboardShortcutsHelper",
			"()V"
		);
	}
	inline jboolean Activity::dispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void Activity::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	inline jboolean Activity::enterPictureInPictureMode(android::app::PictureInPictureParams arg0) const
	{
		return callMethod<jboolean>(
			"enterPictureInPictureMode",
			"(Landroid/app/PictureInPictureParams;)Z",
			arg0.object()
		);
	}
	inline void Activity::enterPictureInPictureMode() const
	{
		callMethod<void>(
			"enterPictureInPictureMode",
			"()V"
		);
	}
	inline android::view::View Activity::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void Activity::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline void Activity::finishActivity(jint arg0) const
	{
		callMethod<void>(
			"finishActivity",
			"(I)V",
			arg0
		);
	}
	inline void Activity::finishActivityFromChild(android::app::Activity arg0, jint arg1) const
	{
		callMethod<void>(
			"finishActivityFromChild",
			"(Landroid/app/Activity;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Activity::finishAffinity() const
	{
		callMethod<void>(
			"finishAffinity",
			"()V"
		);
	}
	inline void Activity::finishAfterTransition() const
	{
		callMethod<void>(
			"finishAfterTransition",
			"()V"
		);
	}
	inline void Activity::finishAndRemoveTask() const
	{
		callMethod<void>(
			"finishAndRemoveTask",
			"()V"
		);
	}
	inline void Activity::finishFromChild(android::app::Activity arg0) const
	{
		callMethod<void>(
			"finishFromChild",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline android::app::ActionBar Activity::getActionBar() const
	{
		return callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;"
		);
	}
	inline android::app::Application Activity::getApplication() const
	{
		return callObjectMethod(
			"getApplication",
			"()Landroid/app/Application;"
		);
	}
	inline android::content::ComponentName Activity::getCallingActivity() const
	{
		return callObjectMethod(
			"getCallingActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	inline JString Activity::getCallingPackage() const
	{
		return callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint Activity::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::content::ComponentName Activity::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::transition::Scene Activity::getContentScene() const
	{
		return callObjectMethod(
			"getContentScene",
			"()Landroid/transition/Scene;"
		);
	}
	inline android::transition::TransitionManager Activity::getContentTransitionManager() const
	{
		return callObjectMethod(
			"getContentTransitionManager",
			"()Landroid/transition/TransitionManager;"
		);
	}
	inline android::view::View Activity::getCurrentFocus() const
	{
		return callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	inline android::app::FragmentManager Activity::getFragmentManager() const
	{
		return callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	inline android::content::Intent Activity::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JObject Activity::getLastNonConfigurationInstance() const
	{
		return callObjectMethod(
			"getLastNonConfigurationInstance",
			"()Ljava/lang/Object;"
		);
	}
	inline android::view::LayoutInflater Activity::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	inline android::app::LoaderManager Activity::getLoaderManager() const
	{
		return callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	inline JString Activity::getLocalClassName() const
	{
		return callObjectMethod(
			"getLocalClassName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Activity::getMaxNumPictureInPictureActions() const
	{
		return callMethod<jint>(
			"getMaxNumPictureInPictureActions",
			"()I"
		);
	}
	inline android::media::session::MediaController Activity::getMediaController() const
	{
		return callObjectMethod(
			"getMediaController",
			"()Landroid/media/session/MediaController;"
		);
	}
	inline android::view::MenuInflater Activity::getMenuInflater() const
	{
		return callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	inline JObject Activity::getOnBackInvokedDispatcher() const
	{
		return callObjectMethod(
			"getOnBackInvokedDispatcher",
			"()Landroid/window/OnBackInvokedDispatcher;"
		);
	}
	inline android::app::Activity Activity::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/app/Activity;"
		);
	}
	inline android::content::Intent Activity::getParentActivityIntent() const
	{
		return callObjectMethod(
			"getParentActivityIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JObject Activity::getPreferences(jint arg0) const
	{
		return callObjectMethod(
			"getPreferences",
			"(I)Landroid/content/SharedPreferences;",
			arg0
		);
	}
	inline android::net::Uri Activity::getReferrer() const
	{
		return callObjectMethod(
			"getReferrer",
			"()Landroid/net/Uri;"
		);
	}
	inline jint Activity::getRequestedOrientation() const
	{
		return callMethod<jint>(
			"getRequestedOrientation",
			"()I"
		);
	}
	inline android::view::SearchEvent Activity::getSearchEvent() const
	{
		return callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;"
		);
	}
	inline JObject Activity::getSplashScreen() const
	{
		return callObjectMethod(
			"getSplashScreen",
			"()Landroid/window/SplashScreen;"
		);
	}
	inline JObject Activity::getSystemService(JString arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jint Activity::getTaskId() const
	{
		return callMethod<jint>(
			"getTaskId",
			"()I"
		);
	}
	inline JString Activity::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint Activity::getTitleColor() const
	{
		return callMethod<jint>(
			"getTitleColor",
			"()I"
		);
	}
	inline android::app::VoiceInteractor Activity::getVoiceInteractor() const
	{
		return callObjectMethod(
			"getVoiceInteractor",
			"()Landroid/app/VoiceInteractor;"
		);
	}
	inline jint Activity::getVolumeControlStream() const
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	inline android::view::Window Activity::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	inline JObject Activity::getWindowManager() const
	{
		return callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	inline jboolean Activity::hasWindowFocus() const
	{
		return callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	inline void Activity::invalidateOptionsMenu() const
	{
		callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	inline jboolean Activity::isActivityTransitionRunning() const
	{
		return callMethod<jboolean>(
			"isActivityTransitionRunning",
			"()Z"
		);
	}
	inline jboolean Activity::isChangingConfigurations() const
	{
		return callMethod<jboolean>(
			"isChangingConfigurations",
			"()Z"
		);
	}
	inline jboolean Activity::isChild() const
	{
		return callMethod<jboolean>(
			"isChild",
			"()Z"
		);
	}
	inline jboolean Activity::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	inline jboolean Activity::isFinishing() const
	{
		return callMethod<jboolean>(
			"isFinishing",
			"()Z"
		);
	}
	inline jboolean Activity::isImmersive() const
	{
		return callMethod<jboolean>(
			"isImmersive",
			"()Z"
		);
	}
	inline jboolean Activity::isInMultiWindowMode() const
	{
		return callMethod<jboolean>(
			"isInMultiWindowMode",
			"()Z"
		);
	}
	inline jboolean Activity::isInPictureInPictureMode() const
	{
		return callMethod<jboolean>(
			"isInPictureInPictureMode",
			"()Z"
		);
	}
	inline jboolean Activity::isLaunchedFromBubble() const
	{
		return callMethod<jboolean>(
			"isLaunchedFromBubble",
			"()Z"
		);
	}
	inline jboolean Activity::isLocalVoiceInteractionSupported() const
	{
		return callMethod<jboolean>(
			"isLocalVoiceInteractionSupported",
			"()Z"
		);
	}
	inline jboolean Activity::isTaskRoot() const
	{
		return callMethod<jboolean>(
			"isTaskRoot",
			"()Z"
		);
	}
	inline jboolean Activity::isVoiceInteraction() const
	{
		return callMethod<jboolean>(
			"isVoiceInteraction",
			"()Z"
		);
	}
	inline jboolean Activity::isVoiceInteractionRoot() const
	{
		return callMethod<jboolean>(
			"isVoiceInteractionRoot",
			"()Z"
		);
	}
	inline JObject Activity::managedQuery(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
	{
		return callObjectMethod(
			"managedQuery",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>()
		);
	}
	inline jboolean Activity::moveTaskToBack(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"moveTaskToBack",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean Activity::navigateUpTo(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"navigateUpTo",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::navigateUpToFromChild(android::app::Activity arg0, android::content::Intent arg1) const
	{
		return callMethod<jboolean>(
			"navigateUpToFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Activity::onActionModeFinished(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	inline void Activity::onActionModeStarted(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	inline void Activity::onActivityReenter(jint arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onActivityReenter",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Activity::onAttachFragment(android::app::Fragment arg0) const
	{
		callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	inline void Activity::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	inline void Activity::onBackPressed() const
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	inline void Activity::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void Activity::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	inline jboolean Activity::onContextItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	inline void Activity::onContextMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	inline void Activity::onCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Activity::onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JString Activity::onCreateDescription() const
	{
		return callObjectMethod(
			"onCreateDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void Activity::onCreateNavigateUpTaskStack(android::app::TaskStackBuilder arg0) const
	{
		callMethod<void>(
			"onCreateNavigateUpTaskStack",
			"(Landroid/app/TaskStackBuilder;)V",
			arg0.object()
		);
	}
	inline jboolean Activity::onCreateOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::onCreatePanelMenu(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	inline android::view::View Activity::onCreatePanelView(jint arg0) const
	{
		return callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline jboolean Activity::onCreateThumbnail(android::graphics::Bitmap arg0, android::graphics::Canvas arg1) const
	{
		return callMethod<jboolean>(
			"onCreateThumbnail",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Canvas;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::View Activity::onCreateView(JString arg0, android::content::Context arg1, JObject arg2) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::view::View Activity::onCreateView(android::view::View arg0, JString arg1, android::content::Context arg2, JObject arg3) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void Activity::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	inline void Activity::onEnterAnimationComplete() const
	{
		callMethod<void>(
			"onEnterAnimationComplete",
			"()V"
		);
	}
	inline jboolean Activity::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void Activity::onGetDirectActions(android::os::CancellationSignal arg0, JObject arg1) const
	{
		callMethod<void>(
			"onGetDirectActions",
			"(Landroid/os/CancellationSignal;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Activity::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Activity::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Activity::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean Activity::onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Activity::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void Activity::onLocalVoiceInteractionStarted() const
	{
		callMethod<void>(
			"onLocalVoiceInteractionStarted",
			"()V"
		);
	}
	inline void Activity::onLocalVoiceInteractionStopped() const
	{
		callMethod<void>(
			"onLocalVoiceInteractionStopped",
			"()V"
		);
	}
	inline void Activity::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	inline jboolean Activity::onMenuItemSelected(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Activity::onMenuOpened(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void Activity::onMultiWindowModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Activity::onNavigateUp() const
	{
		return callMethod<jboolean>(
			"onNavigateUp",
			"()Z"
		);
	}
	inline jboolean Activity::onNavigateUpFromChild(android::app::Activity arg0) const
	{
		return callMethod<jboolean>(
			"onNavigateUpFromChild",
			"(Landroid/app/Activity;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::onOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	inline void Activity::onOptionsMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	inline void Activity::onPanelClosed(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Activity::onPerformDirectAction(JString arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, JObject arg3) const
	{
		callMethod<void>(
			"onPerformDirectAction",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;Ljava/util/function/Consumer;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void Activity::onPictureInPictureModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Activity::onPictureInPictureRequested() const
	{
		return callMethod<jboolean>(
			"onPictureInPictureRequested",
			"()Z"
		);
	}
	inline void Activity::onPictureInPictureUiStateChanged(android::app::PictureInPictureUiState arg0) const
	{
		callMethod<void>(
			"onPictureInPictureUiStateChanged",
			"(Landroid/app/PictureInPictureUiState;)V",
			arg0.object()
		);
	}
	inline void Activity::onPostCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onPostCreate",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Activity::onPrepareNavigateUpTaskStack(android::app::TaskStackBuilder arg0) const
	{
		callMethod<void>(
			"onPrepareNavigateUpTaskStack",
			"(Landroid/app/TaskStackBuilder;)V",
			arg0.object()
		);
	}
	inline jboolean Activity::onPrepareOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::onPreparePanel(jint arg0, android::view::View arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void Activity::onProvideAssistContent(android::app::assist::AssistContent arg0) const
	{
		callMethod<void>(
			"onProvideAssistContent",
			"(Landroid/app/assist/AssistContent;)V",
			arg0.object()
		);
	}
	inline void Activity::onProvideAssistData(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onProvideAssistData",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Activity::onProvideKeyboardShortcuts(JObject arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"onProvideKeyboardShortcuts",
			"(Ljava/util/List;Landroid/view/Menu;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::net::Uri Activity::onProvideReferrer() const
	{
		return callObjectMethod(
			"onProvideReferrer",
			"()Landroid/net/Uri;"
		);
	}
	inline void Activity::onRequestPermissionsResult(jint arg0, JArray arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"onRequestPermissionsResult",
			"(I[Ljava/lang/String;[I)V",
			arg0,
			arg1.object<jarray>(),
			arg2.object<jintArray>()
		);
	}
	inline void Activity::onRestoreInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Activity::onRetainNonConfigurationInstance() const
	{
		return callObjectMethod(
			"onRetainNonConfigurationInstance",
			"()Ljava/lang/Object;"
		);
	}
	inline void Activity::onSaveInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Activity::onSearchRequested() const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	inline jboolean Activity::onSearchRequested(android::view::SearchEvent arg0) const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.object()
		);
	}
	inline void Activity::onStateNotSaved() const
	{
		callMethod<void>(
			"onStateNotSaved",
			"()V"
		);
	}
	inline void Activity::onTopResumedActivityChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onTopResumedActivityChanged",
			"(Z)V",
			arg0
		);
	}
	inline jboolean Activity::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void Activity::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	inline void Activity::onUserInteraction() const
	{
		callMethod<void>(
			"onUserInteraction",
			"()V"
		);
	}
	inline void Activity::onVisibleBehindCanceled() const
	{
		callMethod<void>(
			"onVisibleBehindCanceled",
			"()V"
		);
	}
	inline void Activity::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0) const
	{
		callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	inline void Activity::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline android::view::ActionMode Activity::onWindowStartingActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	inline android::view::ActionMode Activity::onWindowStartingActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	inline void Activity::openContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void Activity::openOptionsMenu() const
	{
		callMethod<void>(
			"openOptionsMenu",
			"()V"
		);
	}
	inline void Activity::overridePendingTransition(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"overridePendingTransition",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Activity::overridePendingTransition(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"overridePendingTransition",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Activity::postponeEnterTransition() const
	{
		callMethod<void>(
			"postponeEnterTransition",
			"()V"
		);
	}
	inline void Activity::recreate() const
	{
		callMethod<void>(
			"recreate",
			"()V"
		);
	}
	inline void Activity::registerActivityLifecycleCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	inline void Activity::registerComponentCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	inline void Activity::registerForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline jboolean Activity::releaseInstance() const
	{
		return callMethod<jboolean>(
			"releaseInstance",
			"()Z"
		);
	}
	inline void Activity::removeDialog(jint arg0) const
	{
		callMethod<void>(
			"removeDialog",
			"(I)V",
			arg0
		);
	}
	inline void Activity::reportFullyDrawn() const
	{
		callMethod<void>(
			"reportFullyDrawn",
			"()V"
		);
	}
	inline android::view::DragAndDropPermissions Activity::requestDragAndDropPermissions(android::view::DragEvent arg0) const
	{
		return callObjectMethod(
			"requestDragAndDropPermissions",
			"(Landroid/view/DragEvent;)Landroid/view/DragAndDropPermissions;",
			arg0.object()
		);
	}
	inline void Activity::requestPermissions(JArray arg0, jint arg1) const
	{
		callMethod<void>(
			"requestPermissions",
			"([Ljava/lang/String;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline void Activity::requestShowKeyboardShortcuts() const
	{
		callMethod<void>(
			"requestShowKeyboardShortcuts",
			"()V"
		);
	}
	inline jboolean Activity::requestVisibleBehind(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"requestVisibleBehind",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean Activity::requestWindowFeature(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
			arg0
		);
	}
	inline android::view::View Activity::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void Activity::runOnUiThread(JObject arg0) const
	{
		callMethod<void>(
			"runOnUiThread",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void Activity::setActionBar(android::widget::Toolbar arg0) const
	{
		callMethod<void>(
			"setActionBar",
			"(Landroid/widget/Toolbar;)V",
			arg0.object()
		);
	}
	inline void Activity::setContentTransitionManager(android::transition::TransitionManager arg0) const
	{
		callMethod<void>(
			"setContentTransitionManager",
			"(Landroid/transition/TransitionManager;)V",
			arg0.object()
		);
	}
	inline void Activity::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void Activity::setContentView(jint arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Activity::setDefaultKeyMode(jint arg0) const
	{
		callMethod<void>(
			"setDefaultKeyMode",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setEnterSharedElementCallback(android::app::SharedElementCallback arg0) const
	{
		callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	inline void Activity::setExitSharedElementCallback(android::app::SharedElementCallback arg0) const
	{
		callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	inline void Activity::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Activity::setFeatureDrawableAlpha(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Activity::setFeatureDrawableResource(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Activity::setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Activity::setFinishOnTouchOutside(jboolean arg0) const
	{
		callMethod<void>(
			"setFinishOnTouchOutside",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setImmersive(jboolean arg0) const
	{
		callMethod<void>(
			"setImmersive",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setInheritShowWhenLocked(jboolean arg0) const
	{
		callMethod<void>(
			"setInheritShowWhenLocked",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Activity::setLocusContext(android::content::LocusId arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"setLocusContext",
			"(Landroid/content/LocusId;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Activity::setMediaController(android::media::session::MediaController arg0) const
	{
		callMethod<void>(
			"setMediaController",
			"(Landroid/media/session/MediaController;)V",
			arg0.object()
		);
	}
	inline void Activity::setPictureInPictureParams(android::app::PictureInPictureParams arg0) const
	{
		callMethod<void>(
			"setPictureInPictureParams",
			"(Landroid/app/PictureInPictureParams;)V",
			arg0.object()
		);
	}
	inline void Activity::setProgress(jint arg0) const
	{
		callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setProgressBarIndeterminate(jboolean arg0) const
	{
		callMethod<void>(
			"setProgressBarIndeterminate",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setProgressBarIndeterminateVisibility(jboolean arg0) const
	{
		callMethod<void>(
			"setProgressBarIndeterminateVisibility",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setProgressBarVisibility(jboolean arg0) const
	{
		callMethod<void>(
			"setProgressBarVisibility",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setRecentsScreenshotEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setRecentsScreenshotEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setRequestedOrientation(jint arg0) const
	{
		callMethod<void>(
			"setRequestedOrientation",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setResult(jint arg0) const
	{
		callMethod<void>(
			"setResult",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setResult(jint arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"setResult",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Activity::setSecondaryProgress(jint arg0) const
	{
		callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setShouldDockBigOverlays(jboolean arg0) const
	{
		callMethod<void>(
			"setShouldDockBigOverlays",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setShowWhenLocked(jboolean arg0) const
	{
		callMethod<void>(
			"setShowWhenLocked",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setTaskDescription(android::app::ActivityManager_TaskDescription arg0) const
	{
		callMethod<void>(
			"setTaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.object()
		);
	}
	inline void Activity::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Activity::setTitleColor(jint arg0) const
	{
		callMethod<void>(
			"setTitleColor",
			"(I)V",
			arg0
		);
	}
	inline jboolean Activity::setTranslucent(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setTranslucent",
			"(Z)Z",
			arg0
		);
	}
	inline void Activity::setTurnScreenOn(jboolean arg0) const
	{
		callMethod<void>(
			"setTurnScreenOn",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setVisible(jboolean arg0) const
	{
		callMethod<void>(
			"setVisible",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::setVolumeControlStream(jint arg0) const
	{
		callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	inline void Activity::setVrModeEnabled(jboolean arg0, android::content::ComponentName arg1) const
	{
		callMethod<void>(
			"setVrModeEnabled",
			"(ZLandroid/content/ComponentName;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Activity::shouldDockBigOverlays() const
	{
		return callMethod<jboolean>(
			"shouldDockBigOverlays",
			"()Z"
		);
	}
	inline jboolean Activity::shouldShowRequestPermissionRationale(JString arg0) const
	{
		return callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean Activity::shouldUpRecreateTask(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"shouldUpRecreateTask",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::showAssist(android::os::Bundle arg0) const
	{
		return callMethod<jboolean>(
			"showAssist",
			"(Landroid/os/Bundle;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::showDialog(jint arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"showDialog",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void Activity::showDialog(jint arg0) const
	{
		callMethod<void>(
			"showDialog",
			"(I)V",
			arg0
		);
	}
	inline void Activity::showLockTaskEscapeMessage() const
	{
		callMethod<void>(
			"showLockTaskEscapeMessage",
			"()V"
		);
	}
	inline android::view::ActionMode Activity::startActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	inline android::view::ActionMode Activity::startActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	inline void Activity::startActivities(JArray arg0) const
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0.object<jarray>()
		);
	}
	inline void Activity::startActivities(JArray arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void Activity::startActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Activity::startActivity(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Activity::startActivityForResult(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Activity::startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void Activity::startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2) const
	{
		callMethod<void>(
			"startActivityFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void Activity::startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"startActivityFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline void Activity::startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2) const
	{
		callMethod<void>(
			"startActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void Activity::startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"startActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline jboolean Activity::startActivityIfNeeded(android::content::Intent arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"startActivityIfNeeded",
			"(Landroid/content/Intent;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Activity::startActivityIfNeeded(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"startActivityIfNeeded",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void Activity::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	inline void Activity::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5) const
	{
		callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline void Activity::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;III)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5
		);
	}
	inline void Activity::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6) const
	{
		callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	inline void Activity::startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6) const
	{
		callMethod<void>(
			"startIntentSenderFromChild",
			"(Landroid/app/Activity;Landroid/content/IntentSender;ILandroid/content/Intent;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6
		);
	}
	inline void Activity::startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7) const
	{
		callMethod<void>(
			"startIntentSenderFromChild",
			"(Landroid/app/Activity;Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	inline void Activity::startLocalVoiceInteraction(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"startLocalVoiceInteraction",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Activity::startLockTask() const
	{
		callMethod<void>(
			"startLockTask",
			"()V"
		);
	}
	inline void Activity::startManagingCursor(JObject arg0) const
	{
		callMethod<void>(
			"startManagingCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	inline jboolean Activity::startNextMatchingActivity(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"startNextMatchingActivity",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline jboolean Activity::startNextMatchingActivity(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"startNextMatchingActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Activity::startPostponedEnterTransition() const
	{
		callMethod<void>(
			"startPostponedEnterTransition",
			"()V"
		);
	}
	inline void Activity::startSearch(JString arg0, jboolean arg1, android::os::Bundle arg2, jboolean arg3) const
	{
		callMethod<void>(
			"startSearch",
			"(Ljava/lang/String;ZLandroid/os/Bundle;Z)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline void Activity::stopLocalVoiceInteraction() const
	{
		callMethod<void>(
			"stopLocalVoiceInteraction",
			"()V"
		);
	}
	inline void Activity::stopLockTask() const
	{
		callMethod<void>(
			"stopLockTask",
			"()V"
		);
	}
	inline void Activity::stopManagingCursor(JObject arg0) const
	{
		callMethod<void>(
			"stopManagingCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	inline void Activity::takeKeyEvents(jboolean arg0) const
	{
		callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	inline void Activity::triggerSearch(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"triggerSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Activity::unregisterActivityLifecycleCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	inline void Activity::unregisterComponentCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	inline void Activity::unregisterForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif

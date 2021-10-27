#include "./ActionBar.hpp"
#include "./ActivityManager_TaskDescription.hpp"
#include "./Application.hpp"
#include "./Dialog.hpp"
#include "./Fragment.hpp"
#include "./FragmentManager.hpp"
#include "./LoaderManager.hpp"
#include "./PendingIntent.hpp"
#include "./PictureInPictureParams.hpp"
#include "./SharedElementCallback.hpp"
#include "./TaskStackBuilder.hpp"
#include "./VoiceInteractor.hpp"
#include "./assist/AssistContent.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../media/session/MediaController.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/PersistableBundle.hpp"
#include "../transition/Scene.hpp"
#include "../transition/TransitionManager.hpp"
#include "../view/ActionMode.hpp"
#include "../view/DragAndDropPermissions.hpp"
#include "../view/DragEvent.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/SearchEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/Window.hpp"
#include "../view/WindowManager_LayoutParams.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../widget/Toolbar.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./Activity.hpp"

namespace android::app
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
	
	Activity::Activity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Activity::Activity()
	{
		__thiz = QAndroidJniObject(
			"android.app.Activity",
			"()V"
		);
	}
	
	// Methods
	void Activity::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::closeContextMenu()
	{
		__thiz.callMethod<void>(
			"closeContextMenu",
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
	QAndroidJniObject Activity::createPendingResult(jint arg0, android::content::Intent arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"createPendingResult",
			"(ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0,
			arg1.__jniObject().object(),
			arg2
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
	void Activity::dismissKeyboardShortcutsHelper()
	{
		__thiz.callMethod<void>(
			"dismissKeyboardShortcutsHelper",
			"()V"
		);
	}
	jboolean Activity::dispatchGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchKeyShortcutEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
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
	void Activity::dump(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
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
	jboolean Activity::enterPictureInPictureMode(android::app::PictureInPictureParams arg0)
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
	QAndroidJniObject Activity::findViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
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
	void Activity::finishActivity(jint arg0)
	{
		__thiz.callMethod<void>(
			"finishActivity",
			"(I)V",
			arg0
		);
	}
	void Activity::finishActivityFromChild(android::app::Activity arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"finishActivityFromChild",
			"(Landroid/app/Activity;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Activity::finishAffinity()
	{
		__thiz.callMethod<void>(
			"finishAffinity",
			"()V"
		);
	}
	void Activity::finishAfterTransition()
	{
		__thiz.callMethod<void>(
			"finishAfterTransition",
			"()V"
		);
	}
	void Activity::finishAndRemoveTask()
	{
		__thiz.callMethod<void>(
			"finishAndRemoveTask",
			"()V"
		);
	}
	void Activity::finishFromChild(android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"finishFromChild",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::getActionBar()
	{
		return __thiz.callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;"
		);
	}
	QAndroidJniObject Activity::getApplication()
	{
		return __thiz.callObjectMethod(
			"getApplication",
			"()Landroid/app/Application;"
		);
	}
	QAndroidJniObject Activity::getCallingActivity()
	{
		return __thiz.callObjectMethod(
			"getCallingActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring Activity::getCallingPackage()
	{
		return __thiz.callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Activity::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject Activity::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject Activity::getContentScene()
	{
		return __thiz.callObjectMethod(
			"getContentScene",
			"()Landroid/transition/Scene;"
		);
	}
	QAndroidJniObject Activity::getContentTransitionManager()
	{
		return __thiz.callObjectMethod(
			"getContentTransitionManager",
			"()Landroid/transition/TransitionManager;"
		);
	}
	QAndroidJniObject Activity::getCurrentFocus()
	{
		return __thiz.callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject Activity::getFragmentManager()
	{
		return __thiz.callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	QAndroidJniObject Activity::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jobject Activity::getLastNonConfigurationInstance()
	{
		return __thiz.callObjectMethod(
			"getLastNonConfigurationInstance",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject Activity::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	QAndroidJniObject Activity::getLoaderManager()
	{
		return __thiz.callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	jstring Activity::getLocalClassName()
	{
		return __thiz.callObjectMethod(
			"getLocalClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Activity::getMaxNumPictureInPictureActions()
	{
		return __thiz.callMethod<jint>(
			"getMaxNumPictureInPictureActions",
			"()I"
		);
	}
	QAndroidJniObject Activity::getMediaController()
	{
		return __thiz.callObjectMethod(
			"getMediaController",
			"()Landroid/media/session/MediaController;"
		);
	}
	QAndroidJniObject Activity::getMenuInflater()
	{
		return __thiz.callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	QAndroidJniObject Activity::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject Activity::getParentActivityIntent()
	{
		return __thiz.callObjectMethod(
			"getParentActivityIntent",
			"()Landroid/content/Intent;"
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
	QAndroidJniObject Activity::getReferrer()
	{
		return __thiz.callObjectMethod(
			"getReferrer",
			"()Landroid/net/Uri;"
		);
	}
	jint Activity::getRequestedOrientation()
	{
		return __thiz.callMethod<jint>(
			"getRequestedOrientation",
			"()I"
		);
	}
	QAndroidJniObject Activity::getSearchEvent()
	{
		return __thiz.callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;"
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
	jint Activity::getTaskId()
	{
		return __thiz.callMethod<jint>(
			"getTaskId",
			"()I"
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
	QAndroidJniObject Activity::getVoiceInteractor()
	{
		return __thiz.callObjectMethod(
			"getVoiceInteractor",
			"()Landroid/app/VoiceInteractor;"
		);
	}
	jint Activity::getVolumeControlStream()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	QAndroidJniObject Activity::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	QAndroidJniObject Activity::getWindowManager()
	{
		return __thiz.callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	jboolean Activity::hasWindowFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	void Activity::invalidateOptionsMenu()
	{
		__thiz.callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	jboolean Activity::isActivityTransitionRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isActivityTransitionRunning",
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
	jboolean Activity::isChild()
	{
		return __thiz.callMethod<jboolean>(
			"isChild",
			"()Z"
		);
	}
	jboolean Activity::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	jboolean Activity::isFinishing()
	{
		return __thiz.callMethod<jboolean>(
			"isFinishing",
			"()Z"
		);
	}
	jboolean Activity::isImmersive()
	{
		return __thiz.callMethod<jboolean>(
			"isImmersive",
			"()Z"
		);
	}
	jboolean Activity::isInMultiWindowMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInMultiWindowMode",
			"()Z"
		);
	}
	jboolean Activity::isInPictureInPictureMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInPictureInPictureMode",
			"()Z"
		);
	}
	jboolean Activity::isLocalVoiceInteractionSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isLocalVoiceInteractionSupported",
			"()Z"
		);
	}
	jboolean Activity::isTaskRoot()
	{
		return __thiz.callMethod<jboolean>(
			"isTaskRoot",
			"()Z"
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
	QAndroidJniObject Activity::managedQuery(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
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
	QAndroidJniObject Activity::managedQuery(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4)
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
	jboolean Activity::moveTaskToBack(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"moveTaskToBack",
			"(Z)Z",
			arg0
		);
	}
	jboolean Activity::navigateUpTo(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"navigateUpTo",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::navigateUpToFromChild(android::app::Activity arg0, android::content::Intent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"navigateUpToFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::onActionModeFinished(android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onActionModeStarted(android::view::ActionMode arg0)
	{
		__thiz.callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onActivityReenter(jint arg0, android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onActivityReenter",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::onAttachFragment(android::app::Fragment arg0)
	{
		__thiz.callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onAttachedToWindow()
	{
		__thiz.callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	void Activity::onBackPressed()
	{
		__thiz.callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void Activity::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
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
	jboolean Activity::onContextItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::onContextMenuClosed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::onCreateContextMenu(__JniBaseClass arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring Activity::onCreateDescription()
	{
		return __thiz.callObjectMethod(
			"onCreateDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Activity::onCreateNavigateUpTaskStack(android::app::TaskStackBuilder arg0)
	{
		__thiz.callMethod<void>(
			"onCreateNavigateUpTaskStack",
			"(Landroid/app/TaskStackBuilder;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onCreateOptionsMenu(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onCreatePanelMenu(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object()
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
	jboolean Activity::onCreateThumbnail(android::graphics::Bitmap arg0, android::graphics::Canvas arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onCreateThumbnail",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Canvas;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onCreateView(jstring arg0, android::content::Context arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onCreateView(const QString &arg0, android::content::Context arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onCreateView(android::view::View arg0, jstring arg1, android::content::Context arg2, __JniBaseClass arg3)
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
	QAndroidJniObject Activity::onCreateView(android::view::View arg0, const QString &arg1, android::content::Context arg2, __JniBaseClass arg3)
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
	void Activity::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
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
	jboolean Activity::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::onGetDirectActions(android::os::CancellationSignal arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onGetDirectActions",
			"(Landroid/os/CancellationSignal;Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onKeyLongPress(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Activity::onKeyShortcut(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
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
	void Activity::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	jboolean Activity::onMenuItemSelected(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onMenuOpened(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object()
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
	void Activity::onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onNavigateUp()
	{
		return __thiz.callMethod<jboolean>(
			"onNavigateUp",
			"()Z"
		);
	}
	jboolean Activity::onNavigateUpFromChild(android::app::Activity arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onNavigateUpFromChild",
			"(Landroid/app/Activity;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onOptionsItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void Activity::onOptionsMenuClosed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onPanelClosed(jint arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::onPerformDirectAction(jstring arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3)
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
	void Activity::onPerformDirectAction(const QString &arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3)
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
	void Activity::onPictureInPictureModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Activity::onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::onPostCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onPostCreate",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::onPrepareNavigateUpTaskStack(android::app::TaskStackBuilder arg0)
	{
		__thiz.callMethod<void>(
			"onPrepareNavigateUpTaskStack",
			"(Landroid/app/TaskStackBuilder;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onPrepareOptionsMenu(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onPreparePanel(jint arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Activity::onProvideAssistContent(android::app::assist::AssistContent arg0)
	{
		__thiz.callMethod<void>(
			"onProvideAssistContent",
			"(Landroid/app/assist/AssistContent;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onProvideAssistData(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onProvideAssistData",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::onProvideKeyboardShortcuts(__JniBaseClass arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onProvideKeyboardShortcuts",
			"(Ljava/util/List;Landroid/view/Menu;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Activity::onProvideReferrer()
	{
		return __thiz.callObjectMethod(
			"onProvideReferrer",
			"()Landroid/net/Uri;"
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
	void Activity::onRestoreInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jobject Activity::onRetainNonConfigurationInstance()
	{
		return __thiz.callObjectMethod(
			"onRetainNonConfigurationInstance",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void Activity::onSaveInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Activity::onSearchRequested()
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	jboolean Activity::onSearchRequested(android::view::SearchEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.__jniObject().object()
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
	jboolean Activity::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
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
	void Activity::onUserInteraction()
	{
		__thiz.callMethod<void>(
			"onUserInteraction",
			"()V"
		);
	}
	void Activity::onVisibleBehindCanceled()
	{
		__thiz.callMethod<void>(
			"onVisibleBehindCanceled",
			"()V"
		);
	}
	void Activity::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0)
	{
		__thiz.callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject Activity::onWindowStartingActionMode(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::onWindowStartingActionMode(__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Activity::openContextMenu(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
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
	void Activity::overridePendingTransition(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"overridePendingTransition",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Activity::postponeEnterTransition()
	{
		__thiz.callMethod<void>(
			"postponeEnterTransition",
			"()V"
		);
	}
	void Activity::recreate()
	{
		__thiz.callMethod<void>(
			"recreate",
			"()V"
		);
	}
	void Activity::registerActivityLifecycleCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::registerForContextMenu(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::releaseInstance()
	{
		return __thiz.callMethod<jboolean>(
			"releaseInstance",
			"()Z"
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
	void Activity::reportFullyDrawn()
	{
		__thiz.callMethod<void>(
			"reportFullyDrawn",
			"()V"
		);
	}
	QAndroidJniObject Activity::requestDragAndDropPermissions(android::view::DragEvent arg0)
	{
		return __thiz.callObjectMethod(
			"requestDragAndDropPermissions",
			"(Landroid/view/DragEvent;)Landroid/view/DragAndDropPermissions;",
			arg0.__jniObject().object()
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
	void Activity::requestShowKeyboardShortcuts()
	{
		__thiz.callMethod<void>(
			"requestShowKeyboardShortcuts",
			"()V"
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
	jboolean Activity::requestWindowFeature(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
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
	void Activity::runOnUiThread(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"runOnUiThread",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setActionBar(android::widget::Toolbar arg0)
	{
		__thiz.callMethod<void>(
			"setActionBar",
			"(Landroid/widget/Toolbar;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setContentTransitionManager(android::transition::TransitionManager arg0)
	{
		__thiz.callMethod<void>(
			"setContentTransitionManager",
			"(Landroid/transition/TransitionManager;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setContentView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
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
	void Activity::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	void Activity::setEnterSharedElementCallback(android::app::SharedElementCallback arg0)
	{
		__thiz.callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setExitSharedElementCallback(android::app::SharedElementCallback arg0)
	{
		__thiz.callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1)
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
	void Activity::setFeatureDrawableResource(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Activity::setFeatureDrawableUri(jint arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
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
	void Activity::setImmersive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setImmersive",
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
	void Activity::setIntent(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setMediaController(android::media::session::MediaController arg0)
	{
		__thiz.callMethod<void>(
			"setMediaController",
			"(Landroid/media/session/MediaController;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::setPictureInPictureParams(android::app::PictureInPictureParams arg0)
	{
		__thiz.callMethod<void>(
			"setPictureInPictureParams",
			"(Landroid/app/PictureInPictureParams;)V",
			arg0.__jniObject().object()
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
	void Activity::setProgressBarIndeterminate(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBarIndeterminate",
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
	void Activity::setProgressBarVisibility(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setProgressBarVisibility",
			"(Z)V",
			arg0
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
	void Activity::setResult(jint arg0)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(I)V",
			arg0
		);
	}
	void Activity::setResult(jint arg0, android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"setResult",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.__jniObject().object()
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
	void Activity::setShowWhenLocked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowWhenLocked",
			"(Z)V",
			arg0
		);
	}
	void Activity::setTaskDescription(android::app::ActivityManager_TaskDescription arg0)
	{
		__thiz.callMethod<void>(
			"setTaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.__jniObject().object()
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
	void Activity::setTurnScreenOn(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTurnScreenOn",
			"(Z)V",
			arg0
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
	void Activity::setVolumeControlStream(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	void Activity::setVrModeEnabled(jboolean arg0, android::content::ComponentName arg1)
	{
		__thiz.callMethod<void>(
			"setVrModeEnabled",
			"(ZLandroid/content/ComponentName;)V",
			arg0,
			arg1.__jniObject().object()
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
	jboolean Activity::shouldUpRecreateTask(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldUpRecreateTask",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::showAssist(android::os::Bundle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"showAssist",
			"(Landroid/os/Bundle;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::showDialog(jint arg0, android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showDialog",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
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
	void Activity::showLockTaskEscapeMessage()
	{
		__thiz.callMethod<void>(
			"showLockTaskEscapeMessage",
			"()V"
		);
	}
	QAndroidJniObject Activity::startActionMode(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Activity::startActionMode(__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1
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
	void Activity::startActivities(jarray arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::startActivity(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::startActivity(android::content::Intent arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::startActivityForResult(android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Activity::startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Activity::startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"startActivityFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Activity::startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3)
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
	void Activity::startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"startActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Activity::startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3)
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
	jboolean Activity::startActivityIfNeeded(android::content::Intent arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"startActivityIfNeeded",
			"(Landroid/content/Intent;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Activity::startActivityIfNeeded(android::content::Intent arg0, jint arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"startActivityIfNeeded",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Activity::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4)
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
	void Activity::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5)
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
	void Activity::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5)
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
	void Activity::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6)
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
	void Activity::startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6)
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
	void Activity::startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7)
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
	void Activity::startLocalVoiceInteraction(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"startLocalVoiceInteraction",
			"(Landroid/os/Bundle;)V",
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
	void Activity::startManagingCursor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"startManagingCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::startNextMatchingActivity(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"startNextMatchingActivity",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Activity::startNextMatchingActivity(android::content::Intent arg0, android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"startNextMatchingActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Activity::startPostponedEnterTransition()
	{
		__thiz.callMethod<void>(
			"startPostponedEnterTransition",
			"()V"
		);
	}
	void Activity::startSearch(jstring arg0, jboolean arg1, android::os::Bundle arg2, jboolean arg3)
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
	void Activity::startSearch(const QString &arg0, jboolean arg1, android::os::Bundle arg2, jboolean arg3)
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
	void Activity::stopLocalVoiceInteraction()
	{
		__thiz.callMethod<void>(
			"stopLocalVoiceInteraction",
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
	void Activity::stopManagingCursor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"stopManagingCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
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
	void Activity::triggerSearch(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"triggerSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Activity::triggerSearch(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"triggerSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Activity::unregisterActivityLifecycleCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Activity::unregisterForContextMenu(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app


#include "./Activity.hpp"
#include "./Application.hpp"
#include "./Instrumentation_ActivityMonitor.hpp"
#include "./Instrumentation_ActivityResult.hpp"
#include "./UiAutomation.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentFilter.hpp"
#include "../content/pm/ActivityInfo.hpp"
#include "../os/Bundle.hpp"
#include "../os/Looper.hpp"
#include "../os/PersistableBundle.hpp"
#include "../os/TestLooperManager.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./Instrumentation.hpp"

namespace android::app
{
	// Fields
	JString Instrumentation::REPORT_KEY_IDENTIFIER()
	{
		return getStaticObjectField(
			"android.app.Instrumentation",
			"REPORT_KEY_IDENTIFIER",
			"Ljava/lang/String;"
		);
	}
	JString Instrumentation::REPORT_KEY_STREAMRESULT()
	{
		return getStaticObjectField(
			"android.app.Instrumentation",
			"REPORT_KEY_STREAMRESULT",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	Instrumentation::Instrumentation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Instrumentation::Instrumentation()
		: JObject(
			"android.app.Instrumentation",
			"()V"
		) {}
	
	// Methods
	android::app::Application Instrumentation::newApplication(JClass arg0, android::content::Context arg1)
	{
		return callStaticObjectMethod(
			"android.app.Instrumentation",
			"newApplication",
			"(Ljava/lang/Class;Landroid/content/Context;)Landroid/app/Application;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	android::os::TestLooperManager Instrumentation::acquireLooperManager(android::os::Looper arg0)
	{
		return callObjectMethod(
			"acquireLooperManager",
			"(Landroid/os/Looper;)Landroid/os/TestLooperManager;",
			arg0.object()
		);
	}
	android::app::Instrumentation_ActivityMonitor Instrumentation::addMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
	{
		return callObjectMethod(
			"addMonitor",
			"(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::app::Instrumentation_ActivityMonitor Instrumentation::addMonitor(JString arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
	{
		return callObjectMethod(
			"addMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	void Instrumentation::addMonitor(android::app::Instrumentation_ActivityMonitor arg0)
	{
		callMethod<void>(
			"addMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)V",
			arg0.object()
		);
	}
	void Instrumentation::addResults(android::os::Bundle arg0)
	{
		callMethod<void>(
			"addResults",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Instrumentation::callActivityOnCreate(android::app::Activity arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"callActivityOnCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Instrumentation::callActivityOnCreate(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2)
	{
		callMethod<void>(
			"callActivityOnCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Instrumentation::callActivityOnDestroy(android::app::Activity arg0)
	{
		callMethod<void>(
			"callActivityOnDestroy",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Instrumentation::callActivityOnNewIntent(android::app::Activity arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"callActivityOnNewIntent",
			"(Landroid/app/Activity;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Instrumentation::callActivityOnPause(android::app::Activity arg0)
	{
		callMethod<void>(
			"callActivityOnPause",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Instrumentation::callActivityOnPostCreate(android::app::Activity arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"callActivityOnPostCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Instrumentation::callActivityOnPostCreate(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2)
	{
		callMethod<void>(
			"callActivityOnPostCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Instrumentation::callActivityOnRestart(android::app::Activity arg0)
	{
		callMethod<void>(
			"callActivityOnRestart",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Instrumentation::callActivityOnRestoreInstanceState(android::app::Activity arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"callActivityOnRestoreInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Instrumentation::callActivityOnRestoreInstanceState(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2)
	{
		callMethod<void>(
			"callActivityOnRestoreInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Instrumentation::callActivityOnResume(android::app::Activity arg0)
	{
		callMethod<void>(
			"callActivityOnResume",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Instrumentation::callActivityOnSaveInstanceState(android::app::Activity arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"callActivityOnSaveInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Instrumentation::callActivityOnSaveInstanceState(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2)
	{
		callMethod<void>(
			"callActivityOnSaveInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Instrumentation::callActivityOnStart(android::app::Activity arg0)
	{
		callMethod<void>(
			"callActivityOnStart",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Instrumentation::callActivityOnStop(android::app::Activity arg0)
	{
		callMethod<void>(
			"callActivityOnStop",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Instrumentation::callActivityOnUserLeaving(android::app::Activity arg0)
	{
		callMethod<void>(
			"callActivityOnUserLeaving",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Instrumentation::callApplicationOnCreate(android::app::Application arg0)
	{
		callMethod<void>(
			"callApplicationOnCreate",
			"(Landroid/app/Application;)V",
			arg0.object()
		);
	}
	jboolean Instrumentation::checkMonitorHit(android::app::Instrumentation_ActivityMonitor arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"checkMonitorHit",
			"(Landroid/app/Instrumentation$ActivityMonitor;I)Z",
			arg0.object(),
			arg1
		);
	}
	void Instrumentation::endPerformanceSnapshot()
	{
		callMethod<void>(
			"endPerformanceSnapshot",
			"()V"
		);
	}
	void Instrumentation::finish(jint arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"finish",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	android::os::Bundle Instrumentation::getAllocCounts()
	{
		return callObjectMethod(
			"getAllocCounts",
			"()Landroid/os/Bundle;"
		);
	}
	android::os::Bundle Instrumentation::getBinderCounts()
	{
		return callObjectMethod(
			"getBinderCounts",
			"()Landroid/os/Bundle;"
		);
	}
	android::content::ComponentName Instrumentation::getComponentName()
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	android::content::Context Instrumentation::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	JString Instrumentation::getProcessName()
	{
		return callObjectMethod(
			"getProcessName",
			"()Ljava/lang/String;"
		);
	}
	android::content::Context Instrumentation::getTargetContext()
	{
		return callObjectMethod(
			"getTargetContext",
			"()Landroid/content/Context;"
		);
	}
	android::app::UiAutomation Instrumentation::getUiAutomation()
	{
		return callObjectMethod(
			"getUiAutomation",
			"()Landroid/app/UiAutomation;"
		);
	}
	android::app::UiAutomation Instrumentation::getUiAutomation(jint arg0)
	{
		return callObjectMethod(
			"getUiAutomation",
			"(I)Landroid/app/UiAutomation;",
			arg0
		);
	}
	jboolean Instrumentation::invokeContextMenuAction(android::app::Activity arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"invokeContextMenuAction",
			"(Landroid/app/Activity;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean Instrumentation::invokeMenuActionSync(android::app::Activity arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"invokeMenuActionSync",
			"(Landroid/app/Activity;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean Instrumentation::isProfiling()
	{
		return callMethod<jboolean>(
			"isProfiling",
			"()Z"
		);
	}
	android::app::Activity Instrumentation::newActivity(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2)
	{
		return callObjectMethod(
			"newActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::app::Activity Instrumentation::newActivity(JClass arg0, android::content::Context arg1, JObject arg2, android::app::Application arg3, android::content::Intent arg4, android::content::pm::ActivityInfo arg5, JString arg6, android::app::Activity arg7, JString arg8, JObject arg9)
	{
		return callObjectMethod(
			"newActivity",
			"(Ljava/lang/Class;Landroid/content/Context;Landroid/os/IBinder;Landroid/app/Application;Landroid/content/Intent;Landroid/content/pm/ActivityInfo;Ljava/lang/CharSequence;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/Object;)Landroid/app/Activity;",
			arg0.object<jclass>(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object<jstring>(),
			arg7.object(),
			arg8.object<jstring>(),
			arg9.object<jobject>()
		);
	}
	android::app::Application Instrumentation::newApplication(java::lang::ClassLoader arg0, JString arg1, android::content::Context arg2)
	{
		return callObjectMethod(
			"newApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Context;)Landroid/app/Application;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void Instrumentation::onCreate(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Instrumentation::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	jboolean Instrumentation::onException(JObject arg0, JThrowable arg1)
	{
		return callMethod<jboolean>(
			"onException",
			"(Ljava/lang/Object;Ljava/lang/Throwable;)Z",
			arg0.object<jobject>(),
			arg1.object<jthrowable>()
		);
	}
	void Instrumentation::onStart()
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void Instrumentation::removeMonitor(android::app::Instrumentation_ActivityMonitor arg0)
	{
		callMethod<void>(
			"removeMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)V",
			arg0.object()
		);
	}
	void Instrumentation::runOnMainSync(JObject arg0)
	{
		callMethod<void>(
			"runOnMainSync",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void Instrumentation::sendCharacterSync(jint arg0)
	{
		callMethod<void>(
			"sendCharacterSync",
			"(I)V",
			arg0
		);
	}
	void Instrumentation::sendKeyDownUpSync(jint arg0)
	{
		callMethod<void>(
			"sendKeyDownUpSync",
			"(I)V",
			arg0
		);
	}
	void Instrumentation::sendKeySync(android::view::KeyEvent arg0)
	{
		callMethod<void>(
			"sendKeySync",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		);
	}
	void Instrumentation::sendPointerSync(android::view::MotionEvent arg0)
	{
		callMethod<void>(
			"sendPointerSync",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	void Instrumentation::sendStatus(jint arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendStatus",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void Instrumentation::sendStringSync(JString arg0)
	{
		callMethod<void>(
			"sendStringSync",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Instrumentation::sendTrackballEventSync(android::view::MotionEvent arg0)
	{
		callMethod<void>(
			"sendTrackballEventSync",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	void Instrumentation::setAutomaticPerformanceSnapshots()
	{
		callMethod<void>(
			"setAutomaticPerformanceSnapshots",
			"()V"
		);
	}
	void Instrumentation::setInTouchMode(jboolean arg0)
	{
		callMethod<void>(
			"setInTouchMode",
			"(Z)V",
			arg0
		);
	}
	void Instrumentation::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	android::app::Activity Instrumentation::startActivitySync(android::content::Intent arg0)
	{
		return callObjectMethod(
			"startActivitySync",
			"(Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.object()
		);
	}
	android::app::Activity Instrumentation::startActivitySync(android::content::Intent arg0, android::os::Bundle arg1)
	{
		return callObjectMethod(
			"startActivitySync",
			"(Landroid/content/Intent;Landroid/os/Bundle;)Landroid/app/Activity;",
			arg0.object(),
			arg1.object()
		);
	}
	void Instrumentation::startAllocCounting()
	{
		callMethod<void>(
			"startAllocCounting",
			"()V"
		);
	}
	void Instrumentation::startPerformanceSnapshot()
	{
		callMethod<void>(
			"startPerformanceSnapshot",
			"()V"
		);
	}
	void Instrumentation::startProfiling()
	{
		callMethod<void>(
			"startProfiling",
			"()V"
		);
	}
	void Instrumentation::stopAllocCounting()
	{
		callMethod<void>(
			"stopAllocCounting",
			"()V"
		);
	}
	void Instrumentation::stopProfiling()
	{
		callMethod<void>(
			"stopProfiling",
			"()V"
		);
	}
	void Instrumentation::waitForIdle(JObject arg0)
	{
		callMethod<void>(
			"waitForIdle",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void Instrumentation::waitForIdleSync()
	{
		callMethod<void>(
			"waitForIdleSync",
			"()V"
		);
	}
	android::app::Activity Instrumentation::waitForMonitor(android::app::Instrumentation_ActivityMonitor arg0)
	{
		return callObjectMethod(
			"waitForMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)Landroid/app/Activity;",
			arg0.object()
		);
	}
	android::app::Activity Instrumentation::waitForMonitorWithTimeout(android::app::Instrumentation_ActivityMonitor arg0, jlong arg1)
	{
		return callObjectMethod(
			"waitForMonitorWithTimeout",
			"(Landroid/app/Instrumentation$ActivityMonitor;J)Landroid/app/Activity;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app


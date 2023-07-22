#pragma once

#include "./Activity.def.hpp"
#include "./Application.def.hpp"
#include "./Instrumentation_ActivityMonitor.def.hpp"
#include "./Instrumentation_ActivityResult.def.hpp"
#include "./UiAutomation.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/IntentFilter.def.hpp"
#include "../content/pm/ActivityInfo.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Looper.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../os/TestLooperManager.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./Instrumentation.def.hpp"

namespace android::app
{
	// Fields
	inline JString Instrumentation::REPORT_KEY_IDENTIFIER()
	{
		return getStaticObjectField(
			"android.app.Instrumentation",
			"REPORT_KEY_IDENTIFIER",
			"Ljava/lang/String;"
		);
	}
	inline JString Instrumentation::REPORT_KEY_STREAMRESULT()
	{
		return getStaticObjectField(
			"android.app.Instrumentation",
			"REPORT_KEY_STREAMRESULT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Instrumentation::Instrumentation()
		: JObject(
			"android.app.Instrumentation",
			"()V"
		) {}
	
	// Methods
	inline android::app::Application Instrumentation::newApplication(JClass arg0, android::content::Context arg1)
	{
		return callStaticObjectMethod(
			"android.app.Instrumentation",
			"newApplication",
			"(Ljava/lang/Class;Landroid/content/Context;)Landroid/app/Application;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline android::os::TestLooperManager Instrumentation::acquireLooperManager(android::os::Looper arg0) const
	{
		return callObjectMethod(
			"acquireLooperManager",
			"(Landroid/os/Looper;)Landroid/os/TestLooperManager;",
			arg0.object()
		);
	}
	inline android::app::Instrumentation_ActivityMonitor Instrumentation::addMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"addMonitor",
			"(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::app::Instrumentation_ActivityMonitor Instrumentation::addMonitor(JString arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"addMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline void Instrumentation::addMonitor(android::app::Instrumentation_ActivityMonitor arg0) const
	{
		callMethod<void>(
			"addMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::addResults(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"addResults",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callActivityOnCreate(android::app::Activity arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"callActivityOnCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Instrumentation::callActivityOnCreate(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"callActivityOnCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Instrumentation::callActivityOnDestroy(android::app::Activity arg0) const
	{
		callMethod<void>(
			"callActivityOnDestroy",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callActivityOnNewIntent(android::app::Activity arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"callActivityOnNewIntent",
			"(Landroid/app/Activity;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Instrumentation::callActivityOnPause(android::app::Activity arg0) const
	{
		callMethod<void>(
			"callActivityOnPause",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callActivityOnPictureInPictureRequested(android::app::Activity arg0) const
	{
		callMethod<void>(
			"callActivityOnPictureInPictureRequested",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callActivityOnPostCreate(android::app::Activity arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"callActivityOnPostCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Instrumentation::callActivityOnPostCreate(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"callActivityOnPostCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Instrumentation::callActivityOnRestart(android::app::Activity arg0) const
	{
		callMethod<void>(
			"callActivityOnRestart",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callActivityOnRestoreInstanceState(android::app::Activity arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"callActivityOnRestoreInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Instrumentation::callActivityOnRestoreInstanceState(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"callActivityOnRestoreInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Instrumentation::callActivityOnResume(android::app::Activity arg0) const
	{
		callMethod<void>(
			"callActivityOnResume",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callActivityOnSaveInstanceState(android::app::Activity arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"callActivityOnSaveInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Instrumentation::callActivityOnSaveInstanceState(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"callActivityOnSaveInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Instrumentation::callActivityOnStart(android::app::Activity arg0) const
	{
		callMethod<void>(
			"callActivityOnStart",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callActivityOnStop(android::app::Activity arg0) const
	{
		callMethod<void>(
			"callActivityOnStop",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callActivityOnUserLeaving(android::app::Activity arg0) const
	{
		callMethod<void>(
			"callActivityOnUserLeaving",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::callApplicationOnCreate(android::app::Application arg0) const
	{
		callMethod<void>(
			"callApplicationOnCreate",
			"(Landroid/app/Application;)V",
			arg0.object()
		);
	}
	inline jboolean Instrumentation::checkMonitorHit(android::app::Instrumentation_ActivityMonitor arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"checkMonitorHit",
			"(Landroid/app/Instrumentation$ActivityMonitor;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline void Instrumentation::endPerformanceSnapshot() const
	{
		callMethod<void>(
			"endPerformanceSnapshot",
			"()V"
		);
	}
	inline void Instrumentation::finish(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"finish",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	inline android::os::Bundle Instrumentation::getAllocCounts() const
	{
		return callObjectMethod(
			"getAllocCounts",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::os::Bundle Instrumentation::getBinderCounts() const
	{
		return callObjectMethod(
			"getBinderCounts",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::content::ComponentName Instrumentation::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::content::Context Instrumentation::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline JString Instrumentation::getProcessName() const
	{
		return callObjectMethod(
			"getProcessName",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::Context Instrumentation::getTargetContext() const
	{
		return callObjectMethod(
			"getTargetContext",
			"()Landroid/content/Context;"
		);
	}
	inline android::app::UiAutomation Instrumentation::getUiAutomation() const
	{
		return callObjectMethod(
			"getUiAutomation",
			"()Landroid/app/UiAutomation;"
		);
	}
	inline android::app::UiAutomation Instrumentation::getUiAutomation(jint arg0) const
	{
		return callObjectMethod(
			"getUiAutomation",
			"(I)Landroid/app/UiAutomation;",
			arg0
		);
	}
	inline jboolean Instrumentation::invokeContextMenuAction(android::app::Activity arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"invokeContextMenuAction",
			"(Landroid/app/Activity;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jboolean Instrumentation::invokeMenuActionSync(android::app::Activity arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"invokeMenuActionSync",
			"(Landroid/app/Activity;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jboolean Instrumentation::isProfiling() const
	{
		return callMethod<jboolean>(
			"isProfiling",
			"()Z"
		);
	}
	inline android::app::Activity Instrumentation::newActivity(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const
	{
		return callObjectMethod(
			"newActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::app::Activity Instrumentation::newActivity(JClass arg0, android::content::Context arg1, JObject arg2, android::app::Application arg3, android::content::Intent arg4, android::content::pm::ActivityInfo arg5, JString arg6, android::app::Activity arg7, JString arg8, JObject arg9) const
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
	inline android::app::Application Instrumentation::newApplication(java::lang::ClassLoader arg0, JString arg1, android::content::Context arg2) const
	{
		return callObjectMethod(
			"newApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Context;)Landroid/app/Application;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void Instrumentation::onCreate(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline jboolean Instrumentation::onException(JObject arg0, JThrowable arg1) const
	{
		return callMethod<jboolean>(
			"onException",
			"(Ljava/lang/Object;Ljava/lang/Throwable;)Z",
			arg0.object<jobject>(),
			arg1.object<jthrowable>()
		);
	}
	inline void Instrumentation::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	inline void Instrumentation::removeMonitor(android::app::Instrumentation_ActivityMonitor arg0) const
	{
		callMethod<void>(
			"removeMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::runOnMainSync(JObject arg0) const
	{
		callMethod<void>(
			"runOnMainSync",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::sendCharacterSync(jint arg0) const
	{
		callMethod<void>(
			"sendCharacterSync",
			"(I)V",
			arg0
		);
	}
	inline void Instrumentation::sendKeyDownUpSync(jint arg0) const
	{
		callMethod<void>(
			"sendKeyDownUpSync",
			"(I)V",
			arg0
		);
	}
	inline void Instrumentation::sendKeySync(android::view::KeyEvent arg0) const
	{
		callMethod<void>(
			"sendKeySync",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::sendPointerSync(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"sendPointerSync",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::sendStatus(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendStatus",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Instrumentation::sendStringSync(JString arg0) const
	{
		callMethod<void>(
			"sendStringSync",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Instrumentation::sendTrackballEventSync(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"sendTrackballEventSync",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::setAutomaticPerformanceSnapshots() const
	{
		callMethod<void>(
			"setAutomaticPerformanceSnapshots",
			"()V"
		);
	}
	inline void Instrumentation::setInTouchMode(jboolean arg0) const
	{
		callMethod<void>(
			"setInTouchMode",
			"(Z)V",
			arg0
		);
	}
	inline void Instrumentation::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline android::app::Activity Instrumentation::startActivitySync(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"startActivitySync",
			"(Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.object()
		);
	}
	inline android::app::Activity Instrumentation::startActivitySync(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"startActivitySync",
			"(Landroid/content/Intent;Landroid/os/Bundle;)Landroid/app/Activity;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Instrumentation::startAllocCounting() const
	{
		callMethod<void>(
			"startAllocCounting",
			"()V"
		);
	}
	inline void Instrumentation::startPerformanceSnapshot() const
	{
		callMethod<void>(
			"startPerformanceSnapshot",
			"()V"
		);
	}
	inline void Instrumentation::startProfiling() const
	{
		callMethod<void>(
			"startProfiling",
			"()V"
		);
	}
	inline void Instrumentation::stopAllocCounting() const
	{
		callMethod<void>(
			"stopAllocCounting",
			"()V"
		);
	}
	inline void Instrumentation::stopProfiling() const
	{
		callMethod<void>(
			"stopProfiling",
			"()V"
		);
	}
	inline void Instrumentation::waitForIdle(JObject arg0) const
	{
		callMethod<void>(
			"waitForIdle",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void Instrumentation::waitForIdleSync() const
	{
		callMethod<void>(
			"waitForIdleSync",
			"()V"
		);
	}
	inline android::app::Activity Instrumentation::waitForMonitor(android::app::Instrumentation_ActivityMonitor arg0) const
	{
		return callObjectMethod(
			"waitForMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)Landroid/app/Activity;",
			arg0.object()
		);
	}
	inline android::app::Activity Instrumentation::waitForMonitorWithTimeout(android::app::Instrumentation_ActivityMonitor arg0, jlong arg1) const
	{
		return callObjectMethod(
			"waitForMonitorWithTimeout",
			"(Landroid/app/Instrumentation$ActivityMonitor;J)Landroid/app/Activity;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif

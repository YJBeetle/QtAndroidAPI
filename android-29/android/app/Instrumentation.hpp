#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class Application;
}
namespace android::app
{
	class Instrumentation_ActivityMonitor;
}
namespace android::app
{
	class Instrumentation_ActivityResult;
}
namespace android::app
{
	class UiAutomation;
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
	class IntentFilter;
}
namespace android::content::pm
{
	class ActivityInfo;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Looper;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::os
{
	class TestLooperManager;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace java::lang
{
	class ClassLoader;
}

namespace android::app
{
	class Instrumentation : public JObject
	{
	public:
		// Fields
		static jstring REPORT_KEY_IDENTIFIER();
		static jstring REPORT_KEY_STREAMRESULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Instrumentation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Instrumentation(QJniObject obj);
		
		// Constructors
		Instrumentation();
		
		// Methods
		static android::app::Application newApplication(jclass arg0, android::content::Context arg1);
		android::os::TestLooperManager acquireLooperManager(android::os::Looper arg0);
		android::app::Instrumentation_ActivityMonitor addMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		android::app::Instrumentation_ActivityMonitor addMonitor(jstring arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		void addMonitor(android::app::Instrumentation_ActivityMonitor arg0);
		void addResults(android::os::Bundle arg0);
		void callActivityOnCreate(android::app::Activity arg0, android::os::Bundle arg1);
		void callActivityOnCreate(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2);
		void callActivityOnDestroy(android::app::Activity arg0);
		void callActivityOnNewIntent(android::app::Activity arg0, android::content::Intent arg1);
		void callActivityOnPause(android::app::Activity arg0);
		void callActivityOnPostCreate(android::app::Activity arg0, android::os::Bundle arg1);
		void callActivityOnPostCreate(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2);
		void callActivityOnRestart(android::app::Activity arg0);
		void callActivityOnRestoreInstanceState(android::app::Activity arg0, android::os::Bundle arg1);
		void callActivityOnRestoreInstanceState(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2);
		void callActivityOnResume(android::app::Activity arg0);
		void callActivityOnSaveInstanceState(android::app::Activity arg0, android::os::Bundle arg1);
		void callActivityOnSaveInstanceState(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2);
		void callActivityOnStart(android::app::Activity arg0);
		void callActivityOnStop(android::app::Activity arg0);
		void callActivityOnUserLeaving(android::app::Activity arg0);
		void callApplicationOnCreate(android::app::Application arg0);
		jboolean checkMonitorHit(android::app::Instrumentation_ActivityMonitor arg0, jint arg1);
		void endPerformanceSnapshot();
		void finish(jint arg0, android::os::Bundle arg1);
		android::os::Bundle getAllocCounts();
		android::os::Bundle getBinderCounts();
		android::content::ComponentName getComponentName();
		android::content::Context getContext();
		jstring getProcessName();
		android::content::Context getTargetContext();
		android::app::UiAutomation getUiAutomation();
		android::app::UiAutomation getUiAutomation(jint arg0);
		jboolean invokeContextMenuAction(android::app::Activity arg0, jint arg1, jint arg2);
		jboolean invokeMenuActionSync(android::app::Activity arg0, jint arg1, jint arg2);
		jboolean isProfiling();
		android::app::Activity newActivity(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2);
		android::app::Activity newActivity(jclass arg0, android::content::Context arg1, JObject arg2, android::app::Application arg3, android::content::Intent arg4, android::content::pm::ActivityInfo arg5, jstring arg6, android::app::Activity arg7, jstring arg8, jobject arg9);
		android::app::Application newApplication(java::lang::ClassLoader arg0, jstring arg1, android::content::Context arg2);
		void onCreate(android::os::Bundle arg0);
		void onDestroy();
		jboolean onException(jobject arg0, jthrowable arg1);
		void onStart();
		void removeMonitor(android::app::Instrumentation_ActivityMonitor arg0);
		void runOnMainSync(JObject arg0);
		void sendCharacterSync(jint arg0);
		void sendKeyDownUpSync(jint arg0);
		void sendKeySync(android::view::KeyEvent arg0);
		void sendPointerSync(android::view::MotionEvent arg0);
		void sendStatus(jint arg0, android::os::Bundle arg1);
		void sendStringSync(jstring arg0);
		void sendTrackballEventSync(android::view::MotionEvent arg0);
		void setAutomaticPerformanceSnapshots();
		void setInTouchMode(jboolean arg0);
		void start();
		android::app::Activity startActivitySync(android::content::Intent arg0);
		android::app::Activity startActivitySync(android::content::Intent arg0, android::os::Bundle arg1);
		void startAllocCounting();
		void startPerformanceSnapshot();
		void startProfiling();
		void stopAllocCounting();
		void stopProfiling();
		void waitForIdle(JObject arg0);
		void waitForIdleSync();
		android::app::Activity waitForMonitor(android::app::Instrumentation_ActivityMonitor arg0);
		android::app::Activity waitForMonitorWithTimeout(android::app::Instrumentation_ActivityMonitor arg0, jlong arg1);
	};
} // namespace android::app


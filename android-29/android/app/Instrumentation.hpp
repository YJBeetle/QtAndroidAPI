#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Instrumentation : public __JniBaseClass
	{
	public:
		// Fields
		static jstring REPORT_KEY_IDENTIFIER();
		static jstring REPORT_KEY_STREAMRESULT();
		
		Instrumentation(QAndroidJniObject obj);
		// Constructors
		Instrumentation();
		
		// Methods
		static QAndroidJniObject newApplication(jclass arg0, android::content::Context arg1);
		QAndroidJniObject acquireLooperManager(android::os::Looper arg0);
		QAndroidJniObject addMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		QAndroidJniObject addMonitor(jstring arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
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
		QAndroidJniObject getAllocCounts();
		QAndroidJniObject getBinderCounts();
		QAndroidJniObject getComponentName();
		QAndroidJniObject getContext();
		jstring getProcessName();
		QAndroidJniObject getTargetContext();
		QAndroidJniObject getUiAutomation();
		QAndroidJniObject getUiAutomation(jint arg0);
		jboolean invokeContextMenuAction(android::app::Activity arg0, jint arg1, jint arg2);
		jboolean invokeMenuActionSync(android::app::Activity arg0, jint arg1, jint arg2);
		jboolean isProfiling();
		QAndroidJniObject newActivity(java::lang::ClassLoader arg0, jstring arg1, android::content::Intent arg2);
		QAndroidJniObject newActivity(jclass arg0, android::content::Context arg1, __JniBaseClass arg2, android::app::Application arg3, android::content::Intent arg4, android::content::pm::ActivityInfo arg5, jstring arg6, android::app::Activity arg7, jstring arg8, jobject arg9);
		QAndroidJniObject newApplication(java::lang::ClassLoader arg0, jstring arg1, android::content::Context arg2);
		void onCreate(android::os::Bundle arg0);
		void onDestroy();
		jboolean onException(jobject arg0, jthrowable arg1);
		void onStart();
		void removeMonitor(android::app::Instrumentation_ActivityMonitor arg0);
		void runOnMainSync(__JniBaseClass arg0);
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
		QAndroidJniObject startActivitySync(android::content::Intent arg0);
		QAndroidJniObject startActivitySync(android::content::Intent arg0, android::os::Bundle arg1);
		void startAllocCounting();
		void startPerformanceSnapshot();
		void startProfiling();
		void stopAllocCounting();
		void stopProfiling();
		void waitForIdle(__JniBaseClass arg0);
		void waitForIdleSync();
		QAndroidJniObject waitForMonitor(android::app::Instrumentation_ActivityMonitor arg0);
		QAndroidJniObject waitForMonitorWithTimeout(android::app::Instrumentation_ActivityMonitor arg0, jlong arg1);
	};
} // namespace android::app


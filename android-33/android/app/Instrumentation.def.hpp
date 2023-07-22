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
class JString;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
class JThrowable;

namespace android::app
{
	class Instrumentation : public JObject
	{
	public:
		// Fields
		static JString REPORT_KEY_IDENTIFIER();
		static JString REPORT_KEY_STREAMRESULT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Instrumentation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Instrumentation(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Instrumentation();
		
		// Methods
		static android::app::Application newApplication(JClass arg0, android::content::Context arg1);
		android::os::TestLooperManager acquireLooperManager(android::os::Looper arg0) const;
		android::app::Instrumentation_ActivityMonitor addMonitor(android::content::IntentFilter arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2) const;
		android::app::Instrumentation_ActivityMonitor addMonitor(JString arg0, android::app::Instrumentation_ActivityResult arg1, jboolean arg2) const;
		void addMonitor(android::app::Instrumentation_ActivityMonitor arg0) const;
		void addResults(android::os::Bundle arg0) const;
		void callActivityOnCreate(android::app::Activity arg0, android::os::Bundle arg1) const;
		void callActivityOnCreate(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2) const;
		void callActivityOnDestroy(android::app::Activity arg0) const;
		void callActivityOnNewIntent(android::app::Activity arg0, android::content::Intent arg1) const;
		void callActivityOnPause(android::app::Activity arg0) const;
		void callActivityOnPictureInPictureRequested(android::app::Activity arg0) const;
		void callActivityOnPostCreate(android::app::Activity arg0, android::os::Bundle arg1) const;
		void callActivityOnPostCreate(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2) const;
		void callActivityOnRestart(android::app::Activity arg0) const;
		void callActivityOnRestoreInstanceState(android::app::Activity arg0, android::os::Bundle arg1) const;
		void callActivityOnRestoreInstanceState(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2) const;
		void callActivityOnResume(android::app::Activity arg0) const;
		void callActivityOnSaveInstanceState(android::app::Activity arg0, android::os::Bundle arg1) const;
		void callActivityOnSaveInstanceState(android::app::Activity arg0, android::os::Bundle arg1, android::os::PersistableBundle arg2) const;
		void callActivityOnStart(android::app::Activity arg0) const;
		void callActivityOnStop(android::app::Activity arg0) const;
		void callActivityOnUserLeaving(android::app::Activity arg0) const;
		void callApplicationOnCreate(android::app::Application arg0) const;
		jboolean checkMonitorHit(android::app::Instrumentation_ActivityMonitor arg0, jint arg1) const;
		void endPerformanceSnapshot() const;
		void finish(jint arg0, android::os::Bundle arg1) const;
		android::os::Bundle getAllocCounts() const;
		android::os::Bundle getBinderCounts() const;
		android::content::ComponentName getComponentName() const;
		android::content::Context getContext() const;
		JString getProcessName() const;
		android::content::Context getTargetContext() const;
		android::app::UiAutomation getUiAutomation() const;
		android::app::UiAutomation getUiAutomation(jint arg0) const;
		jboolean invokeContextMenuAction(android::app::Activity arg0, jint arg1, jint arg2) const;
		jboolean invokeMenuActionSync(android::app::Activity arg0, jint arg1, jint arg2) const;
		jboolean isProfiling() const;
		android::app::Activity newActivity(java::lang::ClassLoader arg0, JString arg1, android::content::Intent arg2) const;
		android::app::Activity newActivity(JClass arg0, android::content::Context arg1, JObject arg2, android::app::Application arg3, android::content::Intent arg4, android::content::pm::ActivityInfo arg5, JString arg6, android::app::Activity arg7, JString arg8, JObject arg9) const;
		android::app::Application newApplication(java::lang::ClassLoader arg0, JString arg1, android::content::Context arg2) const;
		void onCreate(android::os::Bundle arg0) const;
		void onDestroy() const;
		jboolean onException(JObject arg0, JThrowable arg1) const;
		void onStart() const;
		void removeMonitor(android::app::Instrumentation_ActivityMonitor arg0) const;
		void resetInTouchMode() const;
		void runOnMainSync(JObject arg0) const;
		void sendCharacterSync(jint arg0) const;
		void sendKeyDownUpSync(jint arg0) const;
		void sendKeySync(android::view::KeyEvent arg0) const;
		void sendPointerSync(android::view::MotionEvent arg0) const;
		void sendStatus(jint arg0, android::os::Bundle arg1) const;
		void sendStringSync(JString arg0) const;
		void sendTrackballEventSync(android::view::MotionEvent arg0) const;
		void setAutomaticPerformanceSnapshots() const;
		void setInTouchMode(jboolean arg0) const;
		void start() const;
		android::app::Activity startActivitySync(android::content::Intent arg0) const;
		android::app::Activity startActivitySync(android::content::Intent arg0, android::os::Bundle arg1) const;
		void startAllocCounting() const;
		void startPerformanceSnapshot() const;
		void startProfiling() const;
		void stopAllocCounting() const;
		void stopProfiling() const;
		void waitForIdle(JObject arg0) const;
		void waitForIdleSync() const;
		android::app::Activity waitForMonitor(android::app::Instrumentation_ActivityMonitor arg0) const;
		android::app::Activity waitForMonitorWithTimeout(android::app::Instrumentation_ActivityMonitor arg0, jlong arg1) const;
	};
} // namespace android::app


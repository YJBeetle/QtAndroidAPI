#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::app
{
	class Application;
}
namespace __jni_impl::android::app
{
	class Instrumentation_ActivityMonitor;
}
namespace __jni_impl::android::app
{
	class Instrumentation_ActivityResult;
}
namespace __jni_impl::android::app
{
	class UiAutomation;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class IntentFilter;
}
namespace __jni_impl::android::content::pm
{
	class ActivityInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::os
{
	class TestLooperManager;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::android::app
{
	class Instrumentation : public __JniBaseClass
	{
	public:
		// Fields
		static jstring REPORT_KEY_IDENTIFIER();
		static jstring REPORT_KEY_STREAMRESULT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newApplication(jclass arg0, __jni_impl::android::content::Context arg1);
		QAndroidJniObject acquireLooperManager(__jni_impl::android::os::Looper arg0);
		QAndroidJniObject addMonitor(__jni_impl::android::content::IntentFilter arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		QAndroidJniObject addMonitor(jstring arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		QAndroidJniObject addMonitor(const QString &arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2);
		void addMonitor(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0);
		void addResults(__jni_impl::android::os::Bundle arg0);
		void callActivityOnCreate(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1);
		void callActivityOnCreate(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::PersistableBundle arg2);
		void callActivityOnDestroy(__jni_impl::android::app::Activity arg0);
		void callActivityOnNewIntent(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1);
		void callActivityOnPause(__jni_impl::android::app::Activity arg0);
		void callActivityOnPostCreate(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1);
		void callActivityOnPostCreate(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::PersistableBundle arg2);
		void callActivityOnRestart(__jni_impl::android::app::Activity arg0);
		void callActivityOnRestoreInstanceState(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1);
		void callActivityOnRestoreInstanceState(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::PersistableBundle arg2);
		void callActivityOnResume(__jni_impl::android::app::Activity arg0);
		void callActivityOnSaveInstanceState(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1);
		void callActivityOnSaveInstanceState(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::PersistableBundle arg2);
		void callActivityOnStart(__jni_impl::android::app::Activity arg0);
		void callActivityOnStop(__jni_impl::android::app::Activity arg0);
		void callActivityOnUserLeaving(__jni_impl::android::app::Activity arg0);
		void callApplicationOnCreate(__jni_impl::android::app::Application arg0);
		jboolean checkMonitorHit(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0, jint arg1);
		void endPerformanceSnapshot();
		void finish(jint arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject getAllocCounts();
		QAndroidJniObject getBinderCounts();
		QAndroidJniObject getComponentName();
		QAndroidJniObject getContext();
		jstring getProcessName();
		QAndroidJniObject getTargetContext();
		QAndroidJniObject getUiAutomation();
		QAndroidJniObject getUiAutomation(jint arg0);
		jboolean invokeContextMenuAction(__jni_impl::android::app::Activity arg0, jint arg1, jint arg2);
		jboolean invokeMenuActionSync(__jni_impl::android::app::Activity arg0, jint arg1, jint arg2);
		jboolean isProfiling();
		QAndroidJniObject newActivity(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Intent arg2);
		QAndroidJniObject newActivity(__jni_impl::java::lang::ClassLoader arg0, const QString &arg1, __jni_impl::android::content::Intent arg2);
		QAndroidJniObject newActivity(jclass arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::app::Application arg3, __jni_impl::android::content::Intent arg4, __jni_impl::android::content::pm::ActivityInfo arg5, jstring arg6, __jni_impl::android::app::Activity arg7, jstring arg8, jobject arg9);
		QAndroidJniObject newActivity(jclass arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::app::Application arg3, __jni_impl::android::content::Intent arg4, __jni_impl::android::content::pm::ActivityInfo arg5, const QString &arg6, __jni_impl::android::app::Activity arg7, const QString &arg8, jobject arg9);
		QAndroidJniObject newApplication(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Context arg2);
		QAndroidJniObject newApplication(__jni_impl::java::lang::ClassLoader arg0, const QString &arg1, __jni_impl::android::content::Context arg2);
		void onCreate(__jni_impl::android::os::Bundle arg0);
		void onDestroy();
		jboolean onException(jobject arg0, jthrowable arg1);
		void onStart();
		void removeMonitor(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0);
		void runOnMainSync(__jni_impl::__JniBaseClass arg0);
		void sendCharacterSync(jint arg0);
		void sendKeyDownUpSync(jint arg0);
		void sendKeySync(__jni_impl::android::view::KeyEvent arg0);
		void sendPointerSync(__jni_impl::android::view::MotionEvent arg0);
		void sendStatus(jint arg0, __jni_impl::android::os::Bundle arg1);
		void sendStringSync(jstring arg0);
		void sendStringSync(const QString &arg0);
		void sendTrackballEventSync(__jni_impl::android::view::MotionEvent arg0);
		void setAutomaticPerformanceSnapshots();
		void setInTouchMode(jboolean arg0);
		void start();
		QAndroidJniObject startActivitySync(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject startActivitySync(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1);
		void startAllocCounting();
		void startPerformanceSnapshot();
		void startProfiling();
		void stopAllocCounting();
		void stopProfiling();
		void waitForIdle(__jni_impl::__JniBaseClass arg0);
		void waitForIdleSync();
		QAndroidJniObject waitForMonitor(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0);
		QAndroidJniObject waitForMonitorWithTimeout(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0, jlong arg1);
	};
} // namespace __jni_impl::android::app

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
#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jstring Instrumentation::REPORT_KEY_IDENTIFIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Instrumentation",
			"REPORT_KEY_IDENTIFIER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Instrumentation::REPORT_KEY_STREAMRESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Instrumentation",
			"REPORT_KEY_STREAMRESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Instrumentation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Instrumentation::newApplication(jclass arg0, __jni_impl::android::content::Context arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Instrumentation",
			"newApplication",
			"(Ljava/lang/Class;Landroid/content/Context;)Landroid/app/Application;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation::acquireLooperManager(__jni_impl::android::os::Looper arg0)
	{
		return __thiz.callObjectMethod(
			"acquireLooperManager",
			"(Landroid/os/Looper;)Landroid/os/TestLooperManager;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation::addMonitor(__jni_impl::android::content::IntentFilter arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"addMonitor",
			"(Landroid/content/IntentFilter;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Instrumentation::addMonitor(jstring arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"addMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Instrumentation::addMonitor(const QString &arg0, __jni_impl::android::app::Instrumentation_ActivityResult arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"addMonitor",
			"(Ljava/lang/String;Landroid/app/Instrumentation$ActivityResult;Z)Landroid/app/Instrumentation$ActivityMonitor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Instrumentation::addMonitor(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0)
	{
		__thiz.callMethod<void>(
			"addMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::addResults(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"addResults",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnCreate(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"callActivityOnCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnCreate(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::PersistableBundle arg2)
	{
		__thiz.callMethod<void>(
			"callActivityOnCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnDestroy(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"callActivityOnDestroy",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnNewIntent(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"callActivityOnNewIntent",
			"(Landroid/app/Activity;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnPause(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"callActivityOnPause",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnPostCreate(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"callActivityOnPostCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnPostCreate(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::PersistableBundle arg2)
	{
		__thiz.callMethod<void>(
			"callActivityOnPostCreate",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnRestart(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"callActivityOnRestart",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnRestoreInstanceState(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"callActivityOnRestoreInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnRestoreInstanceState(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::PersistableBundle arg2)
	{
		__thiz.callMethod<void>(
			"callActivityOnRestoreInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnResume(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"callActivityOnResume",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnSaveInstanceState(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"callActivityOnSaveInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnSaveInstanceState(__jni_impl::android::app::Activity arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::PersistableBundle arg2)
	{
		__thiz.callMethod<void>(
			"callActivityOnSaveInstanceState",
			"(Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnStart(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"callActivityOnStart",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnStop(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"callActivityOnStop",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::callActivityOnUserLeaving(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"callActivityOnUserLeaving",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::callApplicationOnCreate(__jni_impl::android::app::Application arg0)
	{
		__thiz.callMethod<void>(
			"callApplicationOnCreate",
			"(Landroid/app/Application;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Instrumentation::checkMonitorHit(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"checkMonitorHit",
			"(Landroid/app/Instrumentation$ActivityMonitor;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Instrumentation::endPerformanceSnapshot()
	{
		__thiz.callMethod<void>(
			"endPerformanceSnapshot",
			"()V"
		);
	}
	void Instrumentation::finish(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"finish",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation::getAllocCounts()
	{
		return __thiz.callObjectMethod(
			"getAllocCounts",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Instrumentation::getBinderCounts()
	{
		return __thiz.callObjectMethod(
			"getBinderCounts",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Instrumentation::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject Instrumentation::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jstring Instrumentation::getProcessName()
	{
		return __thiz.callObjectMethod(
			"getProcessName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Instrumentation::getTargetContext()
	{
		return __thiz.callObjectMethod(
			"getTargetContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject Instrumentation::getUiAutomation()
	{
		return __thiz.callObjectMethod(
			"getUiAutomation",
			"()Landroid/app/UiAutomation;"
		);
	}
	QAndroidJniObject Instrumentation::getUiAutomation(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getUiAutomation",
			"(I)Landroid/app/UiAutomation;",
			arg0
		);
	}
	jboolean Instrumentation::invokeContextMenuAction(__jni_impl::android::app::Activity arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"invokeContextMenuAction",
			"(Landroid/app/Activity;II)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Instrumentation::invokeMenuActionSync(__jni_impl::android::app::Activity arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"invokeMenuActionSync",
			"(Landroid/app/Activity;II)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Instrumentation::isProfiling()
	{
		return __thiz.callMethod<jboolean>(
			"isProfiling",
			"()Z"
		);
	}
	QAndroidJniObject Instrumentation::newActivity(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"newActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation::newActivity(__jni_impl::java::lang::ClassLoader arg0, const QString &arg1, __jni_impl::android::content::Intent arg2)
	{
		return __thiz.callObjectMethod(
			"newActivity",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation::newActivity(jclass arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::app::Application arg3, __jni_impl::android::content::Intent arg4, __jni_impl::android::content::pm::ActivityInfo arg5, jstring arg6, __jni_impl::android::app::Activity arg7, jstring arg8, jobject arg9)
	{
		return __thiz.callObjectMethod(
			"newActivity",
			"(Ljava/lang/Class;Landroid/content/Context;Landroid/os/IBinder;Landroid/app/Application;Landroid/content/Intent;Landroid/content/pm/ActivityInfo;Ljava/lang/CharSequence;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/Object;)Landroid/app/Activity;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6,
			arg7.__jniObject().object(),
			arg8,
			arg9
		);
	}
	QAndroidJniObject Instrumentation::newActivity(jclass arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::app::Application arg3, __jni_impl::android::content::Intent arg4, __jni_impl::android::content::pm::ActivityInfo arg5, const QString &arg6, __jni_impl::android::app::Activity arg7, const QString &arg8, jobject arg9)
	{
		return __thiz.callObjectMethod(
			"newActivity",
			"(Ljava/lang/Class;Landroid/content/Context;Landroid/os/IBinder;Landroid/app/Application;Landroid/content/Intent;Landroid/content/pm/ActivityInfo;Ljava/lang/CharSequence;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/Object;)Landroid/app/Activity;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			QAndroidJniObject::fromString(arg6).object<jstring>(),
			arg7.__jniObject().object(),
			QAndroidJniObject::fromString(arg8).object<jstring>(),
			arg9
		);
	}
	QAndroidJniObject Instrumentation::newApplication(__jni_impl::java::lang::ClassLoader arg0, jstring arg1, __jni_impl::android::content::Context arg2)
	{
		return __thiz.callObjectMethod(
			"newApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Context;)Landroid/app/Application;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation::newApplication(__jni_impl::java::lang::ClassLoader arg0, const QString &arg1, __jni_impl::android::content::Context arg2)
	{
		return __thiz.callObjectMethod(
			"newApplication",
			"(Ljava/lang/ClassLoader;Ljava/lang/String;Landroid/content/Context;)Landroid/app/Application;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void Instrumentation::onCreate(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	jboolean Instrumentation::onException(jobject arg0, jthrowable arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onException",
			"(Ljava/lang/Object;Ljava/lang/Throwable;)Z",
			arg0,
			arg1
		);
	}
	void Instrumentation::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void Instrumentation::removeMonitor(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0)
	{
		__thiz.callMethod<void>(
			"removeMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::runOnMainSync(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"runOnMainSync",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::sendCharacterSync(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendCharacterSync",
			"(I)V",
			arg0
		);
	}
	void Instrumentation::sendKeyDownUpSync(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendKeyDownUpSync",
			"(I)V",
			arg0
		);
	}
	void Instrumentation::sendKeySync(__jni_impl::android::view::KeyEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendKeySync",
			"(Landroid/view/KeyEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::sendPointerSync(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendPointerSync",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::sendStatus(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendStatus",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Instrumentation::sendStringSync(jstring arg0)
	{
		__thiz.callMethod<void>(
			"sendStringSync",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Instrumentation::sendStringSync(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"sendStringSync",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Instrumentation::sendTrackballEventSync(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendTrackballEventSync",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::setAutomaticPerformanceSnapshots()
	{
		__thiz.callMethod<void>(
			"setAutomaticPerformanceSnapshots",
			"()V"
		);
	}
	void Instrumentation::setInTouchMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setInTouchMode",
			"(Z)V",
			arg0
		);
	}
	void Instrumentation::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	QAndroidJniObject Instrumentation::startActivitySync(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"startActivitySync",
			"(Landroid/content/Intent;)Landroid/app/Activity;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation::startActivitySync(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"startActivitySync",
			"(Landroid/content/Intent;Landroid/os/Bundle;)Landroid/app/Activity;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Instrumentation::startAllocCounting()
	{
		__thiz.callMethod<void>(
			"startAllocCounting",
			"()V"
		);
	}
	void Instrumentation::startPerformanceSnapshot()
	{
		__thiz.callMethod<void>(
			"startPerformanceSnapshot",
			"()V"
		);
	}
	void Instrumentation::startProfiling()
	{
		__thiz.callMethod<void>(
			"startProfiling",
			"()V"
		);
	}
	void Instrumentation::stopAllocCounting()
	{
		__thiz.callMethod<void>(
			"stopAllocCounting",
			"()V"
		);
	}
	void Instrumentation::stopProfiling()
	{
		__thiz.callMethod<void>(
			"stopProfiling",
			"()V"
		);
	}
	void Instrumentation::waitForIdle(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"waitForIdle",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void Instrumentation::waitForIdleSync()
	{
		__thiz.callMethod<void>(
			"waitForIdleSync",
			"()V"
		);
	}
	QAndroidJniObject Instrumentation::waitForMonitor(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0)
	{
		return __thiz.callObjectMethod(
			"waitForMonitor",
			"(Landroid/app/Instrumentation$ActivityMonitor;)Landroid/app/Activity;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Instrumentation::waitForMonitorWithTimeout(__jni_impl::android::app::Instrumentation_ActivityMonitor arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"waitForMonitorWithTimeout",
			"(Landroid/app/Instrumentation$ActivityMonitor;J)Landroid/app/Activity;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Instrumentation : public __jni_impl::android::app::Instrumentation
	{
	public:
		Instrumentation(QAndroidJniObject obj) { __thiz = obj; }
		Instrumentation()
		{
			__constructor();
		}
	};
} // namespace android::app


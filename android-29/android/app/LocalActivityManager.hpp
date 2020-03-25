#pragma once

#ifndef ANDROID_APP_LOCALACTIVITYMANAGER
#define ANDROID_APP_LOCALACTIVITYMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::view
{
	class Window;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class LocalActivityManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::Activity arg0, jboolean arg1);
		
		// Methods
		QAndroidJniObject getActivity(jstring arg0);
		QAndroidJniObject startActivity(jstring arg0, __jni_impl::android::content::Intent arg1);
		QAndroidJniObject getCurrentActivity();
		QAndroidJniObject destroyActivity(jstring arg0, jboolean arg1);
		QAndroidJniObject getCurrentId();
		void dispatchCreate(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject saveInstanceState();
		void dispatchResume();
		void dispatchPause(jboolean arg0);
		void dispatchStop();
		void removeAllActivities();
		void dispatchDestroy(jboolean arg0);
	};
} // namespace __jni_impl::android::app

#include "Activity.hpp"
#include "../view/Window.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void LocalActivityManager::__constructor(__jni_impl::android::app::Activity arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.LocalActivityManager",
			"(Landroid/app/Activity;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	QAndroidJniObject LocalActivityManager::getActivity(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"(Ljava/lang/String;)Landroid/app/Activity;",
			arg0);
	}
	QAndroidJniObject LocalActivityManager::startActivity(jstring arg0, __jni_impl::android::content::Intent arg1)
	{
		return __thiz.callObjectMethod(
			"startActivity",
			"(Ljava/lang/String;Landroid/content/Intent;)Landroid/view/Window;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject LocalActivityManager::getCurrentActivity()
	{
		return __thiz.callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;");
	}
	QAndroidJniObject LocalActivityManager::destroyActivity(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"destroyActivity",
			"(Ljava/lang/String;Z)Landroid/view/Window;",
			arg0,
			arg1);
	}
	QAndroidJniObject LocalActivityManager::getCurrentId()
	{
		return __thiz.callObjectMethod(
			"getCurrentId",
			"()Ljava/lang/String;");
	}
	void LocalActivityManager::dispatchCreate(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"dispatchCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LocalActivityManager::saveInstanceState()
	{
		return __thiz.callObjectMethod(
			"saveInstanceState",
			"()Landroid/os/Bundle;");
	}
	void LocalActivityManager::dispatchResume()
	{
		__thiz.callMethod<void>(
			"dispatchResume",
			"()V");
	}
	void LocalActivityManager::dispatchPause(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchPause",
			"(Z)V",
			arg0);
	}
	void LocalActivityManager::dispatchStop()
	{
		__thiz.callMethod<void>(
			"dispatchStop",
			"()V");
	}
	void LocalActivityManager::removeAllActivities()
	{
		__thiz.callMethod<void>(
			"removeAllActivities",
			"()V");
	}
	void LocalActivityManager::dispatchDestroy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchDestroy",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class LocalActivityManager : public __jni_impl::android::app::LocalActivityManager
	{
	public:
		LocalActivityManager(QAndroidJniObject obj) { __thiz = obj; }
		LocalActivityManager(__jni_impl::android::app::Activity arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_LOCALACTIVITYMANAGER


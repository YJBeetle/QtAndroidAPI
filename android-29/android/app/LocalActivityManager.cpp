#include "./Activity.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../view/Window.hpp"
#include "./LocalActivityManager.hpp"

namespace android::app
{
	// Fields
	
	LocalActivityManager::LocalActivityManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocalActivityManager::LocalActivityManager(android::app::Activity &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.LocalActivityManager",
			"(Landroid/app/Activity;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject LocalActivityManager::destroyActivity(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"destroyActivity",
			"(Ljava/lang/String;Z)Landroid/view/Window;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LocalActivityManager::destroyActivity(const QString &arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"destroyActivity",
			"(Ljava/lang/String;Z)Landroid/view/Window;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void LocalActivityManager::dispatchCreate(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"dispatchCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void LocalActivityManager::dispatchDestroy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchDestroy",
			"(Z)V",
			arg0
		);
	}
	void LocalActivityManager::dispatchPause(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchPause",
			"(Z)V",
			arg0
		);
	}
	void LocalActivityManager::dispatchResume()
	{
		__thiz.callMethod<void>(
			"dispatchResume",
			"()V"
		);
	}
	void LocalActivityManager::dispatchStop()
	{
		__thiz.callMethod<void>(
			"dispatchStop",
			"()V"
		);
	}
	QAndroidJniObject LocalActivityManager::getActivity(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"(Ljava/lang/String;)Landroid/app/Activity;",
			arg0
		);
	}
	QAndroidJniObject LocalActivityManager::getActivity(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"(Ljava/lang/String;)Landroid/app/Activity;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject LocalActivityManager::getCurrentActivity()
	{
		return __thiz.callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;"
		);
	}
	jstring LocalActivityManager::getCurrentId()
	{
		return __thiz.callObjectMethod(
			"getCurrentId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocalActivityManager::removeAllActivities()
	{
		__thiz.callMethod<void>(
			"removeAllActivities",
			"()V"
		);
	}
	QAndroidJniObject LocalActivityManager::saveInstanceState()
	{
		return __thiz.callObjectMethod(
			"saveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject LocalActivityManager::startActivity(jstring arg0, android::content::Intent arg1)
	{
		return __thiz.callObjectMethod(
			"startActivity",
			"(Ljava/lang/String;Landroid/content/Intent;)Landroid/view/Window;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalActivityManager::startActivity(const QString &arg0, android::content::Intent arg1)
	{
		return __thiz.callObjectMethod(
			"startActivity",
			"(Ljava/lang/String;Landroid/content/Intent;)Landroid/view/Window;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::app


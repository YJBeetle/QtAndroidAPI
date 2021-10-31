#include "./Activity.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../view/Window.hpp"
#include "./LocalActivityManager.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	LocalActivityManager::LocalActivityManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LocalActivityManager::LocalActivityManager(android::app::Activity arg0, jboolean arg1)
		: __JniBaseClass(
			"android.app.LocalActivityManager",
			"(Landroid/app/Activity;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	QAndroidJniObject LocalActivityManager::destroyActivity(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"destroyActivity",
			"(Ljava/lang/String;Z)Landroid/view/Window;",
			arg0,
			arg1
		);
	}
	void LocalActivityManager::dispatchCreate(android::os::Bundle arg0)
	{
		callMethod<void>(
			"dispatchCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void LocalActivityManager::dispatchDestroy(jboolean arg0)
	{
		callMethod<void>(
			"dispatchDestroy",
			"(Z)V",
			arg0
		);
	}
	void LocalActivityManager::dispatchPause(jboolean arg0)
	{
		callMethod<void>(
			"dispatchPause",
			"(Z)V",
			arg0
		);
	}
	void LocalActivityManager::dispatchResume()
	{
		callMethod<void>(
			"dispatchResume",
			"()V"
		);
	}
	void LocalActivityManager::dispatchStop()
	{
		callMethod<void>(
			"dispatchStop",
			"()V"
		);
	}
	QAndroidJniObject LocalActivityManager::getActivity(jstring arg0)
	{
		return callObjectMethod(
			"getActivity",
			"(Ljava/lang/String;)Landroid/app/Activity;",
			arg0
		);
	}
	QAndroidJniObject LocalActivityManager::getCurrentActivity()
	{
		return callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;"
		);
	}
	jstring LocalActivityManager::getCurrentId()
	{
		return callObjectMethod(
			"getCurrentId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocalActivityManager::removeAllActivities()
	{
		callMethod<void>(
			"removeAllActivities",
			"()V"
		);
	}
	QAndroidJniObject LocalActivityManager::saveInstanceState()
	{
		return callObjectMethod(
			"saveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject LocalActivityManager::startActivity(jstring arg0, android::content::Intent arg1)
	{
		return callObjectMethod(
			"startActivity",
			"(Ljava/lang/String;Landroid/content/Intent;)Landroid/view/Window;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app


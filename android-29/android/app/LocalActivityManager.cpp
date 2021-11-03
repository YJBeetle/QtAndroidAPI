#include "./Activity.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../view/Window.hpp"
#include "../../JString.hpp"
#include "./LocalActivityManager.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	LocalActivityManager::LocalActivityManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocalActivityManager::LocalActivityManager(android::app::Activity arg0, jboolean arg1)
		: JObject(
			"android.app.LocalActivityManager",
			"(Landroid/app/Activity;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::Window LocalActivityManager::destroyActivity(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"destroyActivity",
			"(Ljava/lang/String;Z)Landroid/view/Window;",
			arg0.object<jstring>(),
			arg1
		);
	}
	void LocalActivityManager::dispatchCreate(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"dispatchCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void LocalActivityManager::dispatchDestroy(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchDestroy",
			"(Z)V",
			arg0
		);
	}
	void LocalActivityManager::dispatchPause(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchPause",
			"(Z)V",
			arg0
		);
	}
	void LocalActivityManager::dispatchResume() const
	{
		callMethod<void>(
			"dispatchResume",
			"()V"
		);
	}
	void LocalActivityManager::dispatchStop() const
	{
		callMethod<void>(
			"dispatchStop",
			"()V"
		);
	}
	android::app::Activity LocalActivityManager::getActivity(JString arg0) const
	{
		return callObjectMethod(
			"getActivity",
			"(Ljava/lang/String;)Landroid/app/Activity;",
			arg0.object<jstring>()
		);
	}
	android::app::Activity LocalActivityManager::getCurrentActivity() const
	{
		return callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;"
		);
	}
	JString LocalActivityManager::getCurrentId() const
	{
		return callObjectMethod(
			"getCurrentId",
			"()Ljava/lang/String;"
		);
	}
	void LocalActivityManager::removeAllActivities() const
	{
		callMethod<void>(
			"removeAllActivities",
			"()V"
		);
	}
	android::os::Bundle LocalActivityManager::saveInstanceState() const
	{
		return callObjectMethod(
			"saveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	android::view::Window LocalActivityManager::startActivity(JString arg0, android::content::Intent arg1) const
	{
		return callObjectMethod(
			"startActivity",
			"(Ljava/lang/String;Landroid/content/Intent;)Landroid/view/Window;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::app


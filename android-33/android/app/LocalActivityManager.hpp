#pragma once

#include "./Activity.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/Window.def.hpp"
#include "../../JString.hpp"
#include "./LocalActivityManager.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline LocalActivityManager::LocalActivityManager(android::app::Activity arg0, jboolean arg1)
		: JObject(
			"android.app.LocalActivityManager",
			"(Landroid/app/Activity;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline android::view::Window LocalActivityManager::destroyActivity(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"destroyActivity",
			"(Ljava/lang/String;Z)Landroid/view/Window;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void LocalActivityManager::dispatchCreate(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"dispatchCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void LocalActivityManager::dispatchDestroy(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchDestroy",
			"(Z)V",
			arg0
		);
	}
	inline void LocalActivityManager::dispatchPause(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchPause",
			"(Z)V",
			arg0
		);
	}
	inline void LocalActivityManager::dispatchResume() const
	{
		callMethod<void>(
			"dispatchResume",
			"()V"
		);
	}
	inline void LocalActivityManager::dispatchStop() const
	{
		callMethod<void>(
			"dispatchStop",
			"()V"
		);
	}
	inline android::app::Activity LocalActivityManager::getActivity(JString arg0) const
	{
		return callObjectMethod(
			"getActivity",
			"(Ljava/lang/String;)Landroid/app/Activity;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Activity LocalActivityManager::getCurrentActivity() const
	{
		return callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;"
		);
	}
	inline JString LocalActivityManager::getCurrentId() const
	{
		return callObjectMethod(
			"getCurrentId",
			"()Ljava/lang/String;"
		);
	}
	inline void LocalActivityManager::removeAllActivities() const
	{
		callMethod<void>(
			"removeAllActivities",
			"()V"
		);
	}
	inline android::os::Bundle LocalActivityManager::saveInstanceState() const
	{
		return callObjectMethod(
			"saveInstanceState",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::view::Window LocalActivityManager::startActivity(JString arg0, android::content::Intent arg1) const
	{
		return callObjectMethod(
			"startActivity",
			"(Ljava/lang/String;Landroid/content/Intent;)Landroid/view/Window;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif

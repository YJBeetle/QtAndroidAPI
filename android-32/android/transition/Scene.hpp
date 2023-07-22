#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Scene.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline Scene::Scene(android::view::ViewGroup arg0)
		: JObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;)V",
			arg0.object()
		) {}
	inline Scene::Scene(android::view::ViewGroup arg0, android::view::View arg1)
		: JObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Scene::Scene(android::view::ViewGroup arg0, android::view::ViewGroup arg1)
		: JObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;Landroid/view/ViewGroup;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::transition::Scene Scene::getCurrentScene(android::view::ViewGroup arg0)
	{
		return callStaticObjectMethod(
			"android.transition.Scene",
			"getCurrentScene",
			"(Landroid/view/ViewGroup;)Landroid/transition/Scene;",
			arg0.object()
		);
	}
	inline android::transition::Scene Scene::getSceneForLayout(android::view::ViewGroup arg0, jint arg1, android::content::Context arg2)
	{
		return callStaticObjectMethod(
			"android.transition.Scene",
			"getSceneForLayout",
			"(Landroid/view/ViewGroup;ILandroid/content/Context;)Landroid/transition/Scene;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void Scene::enter() const
	{
		callMethod<void>(
			"enter",
			"()V"
		);
	}
	inline void Scene::exit() const
	{
		callMethod<void>(
			"exit",
			"()V"
		);
	}
	inline android::view::ViewGroup Scene::getSceneRoot() const
	{
		return callObjectMethod(
			"getSceneRoot",
			"()Landroid/view/ViewGroup;"
		);
	}
	inline void Scene::setEnterAction(JObject arg0) const
	{
		callMethod<void>(
			"setEnterAction",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void Scene::setExitAction(JObject arg0) const
	{
		callMethod<void>(
			"setExitAction",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::transition

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif

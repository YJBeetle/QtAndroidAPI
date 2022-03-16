#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Scene.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	Scene::Scene(android::view::ViewGroup arg0)
		: JObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;)V",
			arg0.object()
		) {}
	Scene::Scene(android::view::ViewGroup arg0, android::view::View arg1)
		: JObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	Scene::Scene(android::view::ViewGroup arg0, android::view::ViewGroup arg1)
		: JObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;Landroid/view/ViewGroup;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::transition::Scene Scene::getSceneForLayout(android::view::ViewGroup arg0, jint arg1, android::content::Context arg2)
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
	void Scene::enter() const
	{
		callMethod<void>(
			"enter",
			"()V"
		);
	}
	void Scene::exit() const
	{
		callMethod<void>(
			"exit",
			"()V"
		);
	}
	android::view::ViewGroup Scene::getSceneRoot() const
	{
		return callObjectMethod(
			"getSceneRoot",
			"()Landroid/view/ViewGroup;"
		);
	}
	void Scene::setEnterAction(JObject arg0) const
	{
		callMethod<void>(
			"setEnterAction",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void Scene::setExitAction(JObject arg0) const
	{
		callMethod<void>(
			"setExitAction",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::transition


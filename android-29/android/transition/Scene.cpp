#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Scene.hpp"

namespace android::transition
{
	// Fields
	
	Scene::Scene(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Scene::Scene(android::view::ViewGroup &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;)V",
			arg0.__jniObject().object()
		);
	}
	Scene::Scene(android::view::ViewGroup &arg0, android::view::View &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Scene::Scene(android::view::ViewGroup &arg0, android::view::ViewGroup &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;Landroid/view/ViewGroup;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Scene::getCurrentScene(android::view::ViewGroup arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.transition.Scene",
			"getCurrentScene",
			"(Landroid/view/ViewGroup;)Landroid/transition/Scene;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Scene::getSceneForLayout(android::view::ViewGroup arg0, jint arg1, android::content::Context arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.transition.Scene",
			"getSceneForLayout",
			"(Landroid/view/ViewGroup;ILandroid/content/Context;)Landroid/transition/Scene;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Scene::enter()
	{
		__thiz.callMethod<void>(
			"enter",
			"()V"
		);
	}
	void Scene::exit()
	{
		__thiz.callMethod<void>(
			"exit",
			"()V"
		);
	}
	QAndroidJniObject Scene::getSceneRoot()
	{
		return __thiz.callObjectMethod(
			"getSceneRoot",
			"()Landroid/view/ViewGroup;"
		);
	}
	void Scene::setEnterAction(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEnterAction",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void Scene::setExitAction(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExitAction",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::transition


#pragma once

#ifndef ANDROID_TRANSITION_SCENE
#define ANDROID_TRANSITION_SCENE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::transition
{
	class Scene : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::ViewGroup arg1);
		void __constructor(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1);
		void __constructor(__jni_impl::android::view::ViewGroup arg0);
		
		// Methods
		void exit();
		static QAndroidJniObject getSceneForLayout(__jni_impl::android::view::ViewGroup arg0, jint arg1, __jni_impl::android::content::Context arg2);
		QAndroidJniObject getSceneRoot();
		void enter();
		static QAndroidJniObject getCurrentScene(__jni_impl::android::view::ViewGroup arg0);
		void setEnterAction(__jni_impl::__JniBaseClass arg0);
		void setExitAction(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::transition

#include "../view/ViewGroup.hpp"
#include "../view/View.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void Scene::__constructor(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::ViewGroup arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;Landroid/view/ViewGroup;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Scene::__constructor(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Scene::__constructor(__jni_impl::android::view::ViewGroup arg0)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Scene",
			"(Landroid/view/ViewGroup;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void Scene::exit()
	{
		__thiz.callMethod<void>(
			"exit",
			"()V"
		);
	}
	QAndroidJniObject Scene::getSceneForLayout(__jni_impl::android::view::ViewGroup arg0, jint arg1, __jni_impl::android::content::Context arg2)
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
	QAndroidJniObject Scene::getSceneRoot()
	{
		return __thiz.callObjectMethod(
			"getSceneRoot",
			"()Landroid/view/ViewGroup;"
		);
	}
	void Scene::enter()
	{
		__thiz.callMethod<void>(
			"enter",
			"()V"
		);
	}
	QAndroidJniObject Scene::getCurrentScene(__jni_impl::android::view::ViewGroup arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.transition.Scene",
			"getCurrentScene",
			"(Landroid/view/ViewGroup;)Landroid/transition/Scene;",
			arg0.__jniObject().object()
		);
	}
	void Scene::setEnterAction(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEnterAction",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void Scene::setExitAction(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExitAction",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class Scene : public __jni_impl::android::transition::Scene
	{
	public:
		Scene(QAndroidJniObject obj) { __thiz = obj; }
		Scene(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::ViewGroup arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scene(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Scene(__jni_impl::android::view::ViewGroup arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_SCENE


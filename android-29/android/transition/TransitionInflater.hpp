#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::transition
{
	class Transition;
}
namespace __jni_impl::android::transition
{
	class TransitionManager;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::transition
{
	class TransitionInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject from(__jni_impl::android::content::Context arg0);
		QAndroidJniObject inflateTransition(jint arg0);
		QAndroidJniObject inflateTransitionManager(jint arg0, __jni_impl::android::view::ViewGroup arg1);
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "./Transition.hpp"
#include "./TransitionManager.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void TransitionInflater::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionInflater",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TransitionInflater::from(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.transition.TransitionInflater",
			"from",
			"(Landroid/content/Context;)Landroid/transition/TransitionInflater;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionInflater::inflateTransition(jint arg0)
	{
		return __thiz.callObjectMethod(
			"inflateTransition",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject TransitionInflater::inflateTransitionManager(jint arg0, __jni_impl::android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"inflateTransitionManager",
			"(ILandroid/view/ViewGroup;)Landroid/transition/TransitionManager;",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class TransitionInflater : public __jni_impl::android::transition::TransitionInflater
	{
	public:
		TransitionInflater(QAndroidJniObject obj) { __thiz = obj; }
		TransitionInflater()
		{
			__constructor();
		}
	};
} // namespace android::transition


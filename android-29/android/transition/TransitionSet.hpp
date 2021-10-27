#pragma once

#include "../../__JniBaseClass.hpp"
#include "Transition.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::transition
{
	class PathMotion;
}
namespace __jni_impl::android::transition
{
	class Transition;
}
namespace __jni_impl::android::transition
{
	class Transition_EpicenterCallback;
}
namespace __jni_impl::android::transition
{
	class TransitionPropagation;
}
namespace __jni_impl::android::transition
{
	class TransitionValues;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::transition
{
	class TransitionSet : public __jni_impl::android::transition::Transition
	{
	public:
		// Fields
		static jint ORDERING_SEQUENTIAL();
		static jint ORDERING_TOGETHER();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject addListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject addTarget(__jni_impl::android::view::View arg0);
		QAndroidJniObject addTarget(jint arg0);
		QAndroidJniObject addTarget(jclass arg0);
		QAndroidJniObject addTarget(jstring arg0);
		QAndroidJniObject addTarget(const QString &arg0);
		QAndroidJniObject addTransition(__jni_impl::android::transition::Transition arg0);
		void captureEndValues(__jni_impl::android::transition::TransitionValues arg0);
		void captureStartValues(__jni_impl::android::transition::TransitionValues arg0);
		QAndroidJniObject clone();
		QAndroidJniObject excludeTarget(__jni_impl::android::view::View arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jint arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jclass arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(jstring arg0, jboolean arg1);
		QAndroidJniObject excludeTarget(const QString &arg0, jboolean arg1);
		jint getOrdering();
		QAndroidJniObject getTransitionAt(jint arg0);
		jint getTransitionCount();
		QAndroidJniObject removeListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject removeTarget(__jni_impl::android::view::View arg0);
		QAndroidJniObject removeTarget(jint arg0);
		QAndroidJniObject removeTarget(jclass arg0);
		QAndroidJniObject removeTarget(jstring arg0);
		QAndroidJniObject removeTarget(const QString &arg0);
		QAndroidJniObject removeTransition(__jni_impl::android::transition::Transition arg0);
		QAndroidJniObject setDuration(jlong arg0);
		void setEpicenterCallback(__jni_impl::android::transition::Transition_EpicenterCallback arg0);
		QAndroidJniObject setInterpolator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setOrdering(jint arg0);
		void setPathMotion(__jni_impl::android::transition::PathMotion arg0);
		void setPropagation(__jni_impl::android::transition::TransitionPropagation arg0);
		QAndroidJniObject setStartDelay(jlong arg0);
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "PathMotion.hpp"
#include "Transition.hpp"
#include "Transition_EpicenterCallback.hpp"
#include "TransitionPropagation.hpp"
#include "TransitionValues.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	jint TransitionSet::ORDERING_SEQUENTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.TransitionSet",
			"ORDERING_SEQUENTIAL"
		);
	}
	jint TransitionSet::ORDERING_TOGETHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.TransitionSet",
			"ORDERING_TOGETHER"
		);
	}
	
	// Constructors
	void TransitionSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionSet",
			"()V"
		);
	}
	void TransitionSet::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionSet",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TransitionSet::addListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::addTarget(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Landroid/view/View;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::addTarget(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::addTarget(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Ljava/lang/Class;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::addTarget(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::addTarget(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TransitionSet::addTransition(__jni_impl::android::transition::Transition arg0)
	{
		return __thiz.callObjectMethod(
			"addTransition",
			"(Landroid/transition/Transition;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	void TransitionSet::captureEndValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionSet::captureStartValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/transition/TransitionSet;"
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(__jni_impl::android::view::View arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Landroid/view/View;Z)Landroid/transition/Transition;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(jint arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(IZ)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(jclass arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/Class;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TransitionSet::excludeTarget(const QString &arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"excludeTarget",
			"(Ljava/lang/String;Z)Landroid/transition/Transition;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint TransitionSet::getOrdering()
	{
		return __thiz.callMethod<jint>(
			"getOrdering",
			"()I"
		);
	}
	QAndroidJniObject TransitionSet::getTransitionAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTransitionAt",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	jint TransitionSet::getTransitionCount()
	{
		return __thiz.callMethod<jint>(
			"getTransitionCount",
			"()I"
		);
	}
	QAndroidJniObject TransitionSet::removeListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"removeListener",
			"(Landroid/transition/Transition$TransitionListener;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Landroid/view/View;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(jint arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Ljava/lang/Class;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	QAndroidJniObject TransitionSet::removeTarget(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"removeTarget",
			"(Ljava/lang/String;)Landroid/transition/TransitionSet;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TransitionSet::removeTransition(__jni_impl::android::transition::Transition arg0)
	{
		return __thiz.callObjectMethod(
			"removeTransition",
			"(Landroid/transition/Transition;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	void TransitionSet::setEpicenterCallback(__jni_impl::android::transition::Transition_EpicenterCallback arg0)
	{
		__thiz.callMethod<void>(
			"setEpicenterCallback",
			"(Landroid/transition/Transition$EpicenterCallback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::setInterpolator(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)Landroid/transition/TransitionSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::setOrdering(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setOrdering",
			"(I)Landroid/transition/TransitionSet;",
			arg0
		);
	}
	void TransitionSet::setPathMotion(__jni_impl::android::transition::PathMotion arg0)
	{
		__thiz.callMethod<void>(
			"setPathMotion",
			"(Landroid/transition/PathMotion;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionSet::setPropagation(__jni_impl::android::transition::TransitionPropagation arg0)
	{
		__thiz.callMethod<void>(
			"setPropagation",
			"(Landroid/transition/TransitionPropagation;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionSet::setStartDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setStartDelay",
			"(J)Landroid/transition/TransitionSet;",
			arg0
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class TransitionSet : public __jni_impl::android::transition::TransitionSet
	{
	public:
		TransitionSet(QAndroidJniObject obj) { __thiz = obj; }
		TransitionSet()
		{
			__constructor();
		}
		TransitionSet(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition


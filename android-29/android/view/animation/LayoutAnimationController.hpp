#pragma once

#ifndef ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER
#define ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::animation
{
	class Animation;
}
namespace __jni_impl::java::util
{
	class Random;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view::animation
{
	class LayoutAnimationController_AnimationParameters;
}

namespace __jni_impl::android::view::animation
{
	class LayoutAnimationController : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORDER_NORMAL();
		static jint ORDER_RANDOM();
		static jint ORDER_REVERSE();
		
		// Constructors
		void __constructor(__jni_impl::android::view::animation::Animation arg0, jfloat arg1);
		void __constructor(__jni_impl::android::view::animation::Animation arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void start();
		jboolean isDone();
		void setAnimation(__jni_impl::android::view::animation::Animation arg0);
		void setAnimation(__jni_impl::android::content::Context arg0, jint arg1);
		jfloat getDelay();
		void setDelay(jfloat arg0);
		jboolean willOverlap();
		QAndroidJniObject getAnimationForView(__jni_impl::android::view::View arg0);
		void setInterpolator(__jni_impl::android::content::Context arg0, jint arg1);
		void setInterpolator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getInterpolator();
		jint getOrder();
		void setOrder(jint arg0);
		QAndroidJniObject getAnimation();
	};
} // namespace __jni_impl::android::view::animation

#include "Animation.hpp"
#include "../../../java/util/Random.hpp"
#include "../../content/Context.hpp"
#include "../View.hpp"
#include "LayoutAnimationController_AnimationParameters.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	jint LayoutAnimationController::ORDER_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_NORMAL"
		);
	}
	jint LayoutAnimationController::ORDER_RANDOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_RANDOM"
		);
	}
	jint LayoutAnimationController::ORDER_REVERSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.LayoutAnimationController",
			"ORDER_REVERSE"
		);
	}
	
	// Constructors
	void LayoutAnimationController::__constructor(__jni_impl::android::view::animation::Animation arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;F)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void LayoutAnimationController::__constructor(__jni_impl::android::view::animation::Animation arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object());
	}
	void LayoutAnimationController::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LayoutAnimationController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void LayoutAnimationController::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	jboolean LayoutAnimationController::isDone()
	{
		return __thiz.callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	void LayoutAnimationController::setAnimation(__jni_impl::android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutAnimationController::setAnimation(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jfloat LayoutAnimationController::getDelay()
	{
		return __thiz.callMethod<jfloat>(
			"getDelay",
			"()F"
		);
	}
	void LayoutAnimationController::setDelay(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setDelay",
			"(F)V",
			arg0
		);
	}
	jboolean LayoutAnimationController::willOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"willOverlap",
			"()Z"
		);
	}
	QAndroidJniObject LayoutAnimationController::getAnimationForView(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"getAnimationForView",
			"(Landroid/view/View;)Landroid/view/animation/Animation;",
			arg0.__jniObject().object()
		);
	}
	void LayoutAnimationController::setInterpolator(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void LayoutAnimationController::setInterpolator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutAnimationController::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint LayoutAnimationController::getOrder()
	{
		return __thiz.callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	void LayoutAnimationController::setOrder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrder",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject LayoutAnimationController::getAnimation()
	{
		return __thiz.callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class LayoutAnimationController : public __jni_impl::android::view::animation::LayoutAnimationController
	{
	public:
		LayoutAnimationController(QAndroidJniObject obj) { __thiz = obj; }
		LayoutAnimationController(__jni_impl::android::view::animation::Animation arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		LayoutAnimationController(__jni_impl::android::view::animation::Animation arg0)
		{
			__constructor(
				arg0);
		}
		LayoutAnimationController(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER


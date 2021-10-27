#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./LayoutAnimationController.hpp"

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
	class Animation;
}

namespace __jni_impl::android::view::animation
{
	class GridLayoutAnimationController : public __jni_impl::android::view::animation::LayoutAnimationController
	{
	public:
		// Fields
		static jint DIRECTION_BOTTOM_TO_TOP();
		static jint DIRECTION_HORIZONTAL_MASK();
		static jint DIRECTION_LEFT_TO_RIGHT();
		static jint DIRECTION_RIGHT_TO_LEFT();
		static jint DIRECTION_TOP_TO_BOTTOM();
		static jint DIRECTION_VERTICAL_MASK();
		static jint PRIORITY_COLUMN();
		static jint PRIORITY_NONE();
		static jint PRIORITY_ROW();
		
		// Constructors
		void __constructor(__jni_impl::android::view::animation::Animation arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::view::animation::Animation arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		jfloat getColumnDelay();
		jint getDirection();
		jint getDirectionPriority();
		jfloat getRowDelay();
		void setColumnDelay(jfloat arg0);
		void setDirection(jint arg0);
		void setDirectionPriority(jint arg0);
		void setRowDelay(jfloat arg0);
		jboolean willOverlap();
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"
#include "../View.hpp"
#include "./Animation.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	jint GridLayoutAnimationController::DIRECTION_BOTTOM_TO_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_BOTTOM_TO_TOP"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_HORIZONTAL_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_HORIZONTAL_MASK"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_LEFT_TO_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_LEFT_TO_RIGHT"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_RIGHT_TO_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_RIGHT_TO_LEFT"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_TOP_TO_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_TOP_TO_BOTTOM"
		);
	}
	jint GridLayoutAnimationController::DIRECTION_VERTICAL_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"DIRECTION_VERTICAL_MASK"
		);
	}
	jint GridLayoutAnimationController::PRIORITY_COLUMN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_COLUMN"
		);
	}
	jint GridLayoutAnimationController::PRIORITY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_NONE"
		);
	}
	jint GridLayoutAnimationController::PRIORITY_ROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.GridLayoutAnimationController",
			"PRIORITY_ROW"
		);
	}
	
	// Constructors
	void GridLayoutAnimationController::__constructor(__jni_impl::android::view::animation::Animation arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	void GridLayoutAnimationController::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void GridLayoutAnimationController::__constructor(__jni_impl::android::view::animation::Animation arg0, jfloat arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.GridLayoutAnimationController",
			"(Landroid/view/animation/Animation;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jfloat GridLayoutAnimationController::getColumnDelay()
	{
		return __thiz.callMethod<jfloat>(
			"getColumnDelay",
			"()F"
		);
	}
	jint GridLayoutAnimationController::getDirection()
	{
		return __thiz.callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	jint GridLayoutAnimationController::getDirectionPriority()
	{
		return __thiz.callMethod<jint>(
			"getDirectionPriority",
			"()I"
		);
	}
	jfloat GridLayoutAnimationController::getRowDelay()
	{
		return __thiz.callMethod<jfloat>(
			"getRowDelay",
			"()F"
		);
	}
	void GridLayoutAnimationController::setColumnDelay(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setColumnDelay",
			"(F)V",
			arg0
		);
	}
	void GridLayoutAnimationController::setDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDirection",
			"(I)V",
			arg0
		);
	}
	void GridLayoutAnimationController::setDirectionPriority(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDirectionPriority",
			"(I)V",
			arg0
		);
	}
	void GridLayoutAnimationController::setRowDelay(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRowDelay",
			"(F)V",
			arg0
		);
	}
	jboolean GridLayoutAnimationController::willOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"willOverlap",
			"()Z"
		);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class GridLayoutAnimationController : public __jni_impl::android::view::animation::GridLayoutAnimationController
	{
	public:
		GridLayoutAnimationController(QAndroidJniObject obj) { __thiz = obj; }
		GridLayoutAnimationController(__jni_impl::android::view::animation::Animation arg0)
		{
			__constructor(
				arg0);
		}
		GridLayoutAnimationController(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GridLayoutAnimationController(__jni_impl::android::view::animation::Animation arg0, jfloat arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::animation


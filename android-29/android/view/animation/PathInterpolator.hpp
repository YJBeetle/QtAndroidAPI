#pragma once

#include "../../../__JniBaseClass.hpp"
#include "BaseInterpolator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Path;
}

namespace __jni_impl::android::view::animation
{
	class PathInterpolator : public __jni_impl::android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Path arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jfloat arg0, jfloat arg1);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"
#include "../../graphics/Path.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void PathInterpolator::__constructor(__jni_impl::android::graphics::Path arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.PathInterpolator",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
	void PathInterpolator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.PathInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PathInterpolator::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.PathInterpolator",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void PathInterpolator::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.PathInterpolator",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jfloat PathInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class PathInterpolator : public __jni_impl::android::view::animation::PathInterpolator
	{
	public:
		PathInterpolator(QAndroidJniObject obj) { __thiz = obj; }
		PathInterpolator(__jni_impl::android::graphics::Path arg0)
		{
			__constructor(
				arg0);
		}
		PathInterpolator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PathInterpolator(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PathInterpolator(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::view::animation


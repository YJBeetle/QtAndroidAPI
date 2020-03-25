#pragma once

#ifndef ANDROID_GRAPHICS_PATHDASHPATHEFFECT
#define ANDROID_GRAPHICS_PATHDASHPATHEFFECT

#include "../../__JniBaseClass.hpp"
#include "PathEffect.hpp"

namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::graphics
{
	class PathDashPathEffect_Style;
}

namespace __jni_impl::android::graphics
{
	class PathDashPathEffect : public __jni_impl::android::graphics::PathEffect
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::PathDashPathEffect_Style arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics

#include "Path.hpp"
#include "PathDashPathEffect_Style.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void PathDashPathEffect::__constructor(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::PathDashPathEffect_Style arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PathDashPathEffect",
			"(Landroid/graphics/Path;FFLandroid/graphics/PathDashPathEffect$Style;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PathDashPathEffect : public __jni_impl::android::graphics::PathDashPathEffect
	{
	public:
		PathDashPathEffect(QAndroidJniObject obj) { __thiz = obj; }
		PathDashPathEffect(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::PathDashPathEffect_Style arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PATHDASHPATHEFFECT


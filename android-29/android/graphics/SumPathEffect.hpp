#pragma once

#include "../../__JniBaseClass.hpp"
#include "PathEffect.hpp"

namespace __jni_impl::android::graphics
{
	class PathEffect;
}

namespace __jni_impl::android::graphics
{
	class SumPathEffect : public __jni_impl::android::graphics::PathEffect
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::PathEffect arg0, __jni_impl::android::graphics::PathEffect arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics

#include "PathEffect.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void SumPathEffect::__constructor(__jni_impl::android::graphics::PathEffect arg0, __jni_impl::android::graphics::PathEffect arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SumPathEffect",
			"(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class SumPathEffect : public __jni_impl::android::graphics::SumPathEffect
	{
	public:
		SumPathEffect(QAndroidJniObject obj) { __thiz = obj; }
		SumPathEffect(__jni_impl::android::graphics::PathEffect arg0, __jni_impl::android::graphics::PathEffect arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics


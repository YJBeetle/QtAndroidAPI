#pragma once

#include "../../__JniBaseClass.hpp"
#include "MaskFilter.hpp"

namespace __jni_impl::android::graphics
{
	class BlurMaskFilter_Blur;
}

namespace __jni_impl::android::graphics
{
	class BlurMaskFilter : public __jni_impl::android::graphics::MaskFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, __jni_impl::android::graphics::BlurMaskFilter_Blur arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics

#include "BlurMaskFilter_Blur.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void BlurMaskFilter::__constructor(jfloat arg0, __jni_impl::android::graphics::BlurMaskFilter_Blur arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BlurMaskFilter",
			"(FLandroid/graphics/BlurMaskFilter$Blur;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class BlurMaskFilter : public __jni_impl::android::graphics::BlurMaskFilter
	{
	public:
		BlurMaskFilter(QAndroidJniObject obj) { __thiz = obj; }
		BlurMaskFilter(jfloat arg0, __jni_impl::android::graphics::BlurMaskFilter_Blur arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics


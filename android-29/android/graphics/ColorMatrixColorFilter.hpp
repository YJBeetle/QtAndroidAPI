#pragma once

#ifndef ANDROID_GRAPHICS_COLORMATRIXCOLORFILTER
#define ANDROID_GRAPHICS_COLORMATRIXCOLORFILTER

#include "../../__JniBaseClass.hpp"
#include "ColorFilter.hpp"

namespace __jni_impl::android::graphics
{
	class ColorMatrix;
}

namespace __jni_impl::android::graphics
{
	class ColorMatrixColorFilter : public __jni_impl::android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::ColorMatrix arg0);
		void __constructor(jfloatArray arg0);
		
		// Methods
		void getColorMatrix(__jni_impl::android::graphics::ColorMatrix arg0);
	};
} // namespace __jni_impl::android::graphics

#include "ColorMatrix.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void ColorMatrixColorFilter::__constructor(__jni_impl::android::graphics::ColorMatrix arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrixColorFilter",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object());
	}
	void ColorMatrixColorFilter::__constructor(jfloatArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrixColorFilter",
			"([F)V",
			arg0);
	}
	
	// Methods
	void ColorMatrixColorFilter::getColorMatrix(__jni_impl::android::graphics::ColorMatrix arg0)
	{
		__thiz.callMethod<void>(
			"getColorMatrix",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorMatrixColorFilter : public __jni_impl::android::graphics::ColorMatrixColorFilter
	{
	public:
		ColorMatrixColorFilter(QAndroidJniObject obj) { __thiz = obj; }
		ColorMatrixColorFilter(__jni_impl::android::graphics::ColorMatrix arg0)
		{
			__constructor(
				arg0);
		}
		ColorMatrixColorFilter(jfloatArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORMATRIXCOLORFILTER


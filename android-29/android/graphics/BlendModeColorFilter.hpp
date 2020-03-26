#pragma once

#ifndef ANDROID_GRAPHICS_BLENDMODECOLORFILTER
#define ANDROID_GRAPHICS_BLENDMODECOLORFILTER

#include "../../__JniBaseClass.hpp"
#include "ColorFilter.hpp"

namespace __jni_impl::android::graphics
{
	class BlendMode;
}

namespace __jni_impl::android::graphics
{
	class BlendModeColorFilter : public __jni_impl::android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::android::graphics::BlendMode arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint getColor();
		QAndroidJniObject getMode();
	};
} // namespace __jni_impl::android::graphics

#include "BlendMode.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void BlendModeColorFilter::__constructor(jint arg0, __jni_impl::android::graphics::BlendMode arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BlendModeColorFilter",
			"(ILandroid/graphics/BlendMode;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jboolean BlendModeColorFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BlendModeColorFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BlendModeColorFilter::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	QAndroidJniObject BlendModeColorFilter::getMode()
	{
		return __thiz.callObjectMethod(
			"getMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class BlendModeColorFilter : public __jni_impl::android::graphics::BlendModeColorFilter
	{
	public:
		BlendModeColorFilter(QAndroidJniObject obj) { __thiz = obj; }
		BlendModeColorFilter(jint arg0, __jni_impl::android::graphics::BlendMode arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BLENDMODECOLORFILTER


#pragma once

#ifndef ANDROID_GRAPHICS_PORTERDUFFCOLORFILTER
#define ANDROID_GRAPHICS_PORTERDUFFCOLORFILTER

#include "../../__JniBaseClass.hpp"
#include "ColorFilter.hpp"

namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}

namespace __jni_impl::android::graphics
{
	class PorterDuffColorFilter : public __jni_impl::android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::graphics

#include "PorterDuff_Mode.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void PorterDuffColorFilter::__constructor(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PorterDuffColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jboolean PorterDuffColorFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PorterDuffColorFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PorterDuffColorFilter : public __jni_impl::android::graphics::PorterDuffColorFilter
	{
	public:
		PorterDuffColorFilter(QAndroidJniObject obj) { __thiz = obj; }
		PorterDuffColorFilter(jint arg0, __jni_impl::android::graphics::PorterDuff_Mode arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PORTERDUFFCOLORFILTER


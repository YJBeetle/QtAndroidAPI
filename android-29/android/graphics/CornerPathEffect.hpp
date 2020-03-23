#pragma once

#ifndef ANDROID_GRAPHICS_CORNERPATHEFFECT
#define ANDROID_GRAPHICS_CORNERPATHEFFECT

#include "PathEffect.hpp"


namespace __jni_impl::android::graphics
{
	class CornerPathEffect : public __jni_impl::android::graphics::PathEffect
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void CornerPathEffect::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.CornerPathEffect",
			"(F)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class CornerPathEffect : public __jni_impl::android::graphics::CornerPathEffect
	{
	public:
		CornerPathEffect(QAndroidJniObject obj) { __thiz = obj; }
		CornerPathEffect(jfloat arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_CORNERPATHEFFECT


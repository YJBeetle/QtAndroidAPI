#pragma once

#ifndef ANDROID_GRAPHICS_DISCRETEPATHEFFECT
#define ANDROID_GRAPHICS_DISCRETEPATHEFFECT

#include "PathEffect.hpp"


namespace __jni_impl::android::graphics
{
	class DiscretePathEffect : public __jni_impl::android::graphics::PathEffect
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void DiscretePathEffect::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.DiscretePathEffect",
			"(FF)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class DiscretePathEffect : public __jni_impl::android::graphics::DiscretePathEffect
	{
	public:
		DiscretePathEffect(QAndroidJniObject obj) { __thiz = obj; }
		DiscretePathEffect(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_DISCRETEPATHEFFECT


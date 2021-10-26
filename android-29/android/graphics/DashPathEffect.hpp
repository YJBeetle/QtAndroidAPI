#pragma once

#ifndef ANDROID_GRAPHICS_DASHPATHEFFECT
#define ANDROID_GRAPHICS_DASHPATHEFFECT

#include "../../__JniBaseClass.hpp"
#include "PathEffect.hpp"


namespace __jni_impl::android::graphics
{
	class DashPathEffect : public __jni_impl::android::graphics::PathEffect
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloatArray arg0, jfloat arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void DashPathEffect::__constructor(jfloatArray arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.DashPathEffect",
			"([FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class DashPathEffect : public __jni_impl::android::graphics::DashPathEffect
	{
	public:
		DashPathEffect(QAndroidJniObject obj) { __thiz = obj; }
		DashPathEffect(jfloatArray arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_DASHPATHEFFECT


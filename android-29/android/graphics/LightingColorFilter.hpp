#pragma once

#include "../../__JniBaseClass.hpp"
#include "ColorFilter.hpp"


namespace __jni_impl::android::graphics
{
	class LightingColorFilter : public __jni_impl::android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jint getColorAdd();
		jint getColorMultiply();
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void LightingColorFilter::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LightingColorFilter",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint LightingColorFilter::getColorAdd()
	{
		return __thiz.callMethod<jint>(
			"getColorAdd",
			"()I"
		);
	}
	jint LightingColorFilter::getColorMultiply()
	{
		return __thiz.callMethod<jint>(
			"getColorMultiply",
			"()I"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class LightingColorFilter : public __jni_impl::android::graphics::LightingColorFilter
	{
	public:
		LightingColorFilter(QAndroidJniObject obj) { __thiz = obj; }
		LightingColorFilter(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics


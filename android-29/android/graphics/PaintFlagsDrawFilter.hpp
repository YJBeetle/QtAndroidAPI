#pragma once

#ifndef ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER
#define ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER

#include "../../__JniBaseClass.hpp"
#include "DrawFilter.hpp"


namespace __jni_impl::android::graphics
{
	class PaintFlagsDrawFilter : public __jni_impl::android::graphics::DrawFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void PaintFlagsDrawFilter::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PaintFlagsDrawFilter",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PaintFlagsDrawFilter : public __jni_impl::android::graphics::PaintFlagsDrawFilter
	{
	public:
		PaintFlagsDrawFilter(QAndroidJniObject obj) { __thiz = obj; }
		PaintFlagsDrawFilter(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PAINTFLAGSDRAWFILTER


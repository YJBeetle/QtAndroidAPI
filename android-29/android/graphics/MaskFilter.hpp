#pragma once

#ifndef ANDROID_GRAPHICS_MASKFILTER
#define ANDROID_GRAPHICS_MASKFILTER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class MaskFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void MaskFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.MaskFilter",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class MaskFilter : public __jni_impl::android::graphics::MaskFilter
	{
	public:
		MaskFilter(QAndroidJniObject obj) { __thiz = obj; }
		MaskFilter()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_MASKFILTER


#pragma once

#ifndef ANDROID_GRAPHICS_DRAWFILTER
#define ANDROID_GRAPHICS_DRAWFILTER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class DrawFilter : public __JniBaseClass
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
	void DrawFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.DrawFilter",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class DrawFilter : public __jni_impl::android::graphics::DrawFilter
	{
	public:
		DrawFilter(QAndroidJniObject obj) { __thiz = obj; }
		DrawFilter()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_DRAWFILTER


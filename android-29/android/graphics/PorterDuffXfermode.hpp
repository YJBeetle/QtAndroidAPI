#pragma once

#ifndef ANDROID_GRAPHICS_PORTERDUFFXFERMODE
#define ANDROID_GRAPHICS_PORTERDUFFXFERMODE

#include "Xfermode.hpp"

namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}

namespace __jni_impl::android::graphics
{
	class PorterDuffXfermode : public __jni_impl::android::graphics::Xfermode
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics

#include "PorterDuff_Mode.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void PorterDuffXfermode::__constructor(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PorterDuffXfermode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PorterDuffXfermode : public __jni_impl::android::graphics::PorterDuffXfermode
	{
	public:
		PorterDuffXfermode(QAndroidJniObject obj) { __thiz = obj; }
		PorterDuffXfermode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PORTERDUFFXFERMODE


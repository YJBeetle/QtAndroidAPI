#pragma once

#ifndef ANDROID_GRAPHICS_XFERMODE
#define ANDROID_GRAPHICS_XFERMODE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class Xfermode : public __JniBaseClass
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
	void Xfermode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Xfermode",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Xfermode : public __jni_impl::android::graphics::Xfermode
	{
	public:
		Xfermode(QAndroidJniObject obj) { __thiz = obj; }
		Xfermode()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_XFERMODE


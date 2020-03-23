#pragma once

#ifndef ANDROID_GRAPHICS_PATHEFFECT
#define ANDROID_GRAPHICS_PATHEFFECT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class PathEffect : public __JniBaseClass
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
	void PathEffect::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PathEffect",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PathEffect : public __jni_impl::android::graphics::PathEffect
	{
	public:
		PathEffect(QAndroidJniObject obj) { __thiz = obj; }
		PathEffect()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PATHEFFECT


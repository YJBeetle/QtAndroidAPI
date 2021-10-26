#pragma once

#ifndef ANDROID_R
#define ANDROID_R

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	
	// Constructors
	void R::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R : public __jni_impl::android::R
	{
	public:
		R(QAndroidJniObject obj) { __thiz = obj; }
		R()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R


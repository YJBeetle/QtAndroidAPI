#pragma once

#ifndef ANDROID_R_RAW
#define ANDROID_R_RAW

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_raw : public __JniBaseClass
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
	void R_raw::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$raw",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_raw : public __jni_impl::android::R_raw
	{
	public:
		R_raw(QAndroidJniObject obj) { __thiz = obj; }
		R_raw()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_RAW


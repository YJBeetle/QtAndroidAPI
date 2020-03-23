#pragma once

#ifndef ANDROID_R_FRACTION
#define ANDROID_R_FRACTION

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_fraction : public __JniBaseClass
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
	void R_fraction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$fraction",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_fraction : public __jni_impl::android::R_fraction
	{
	public:
		R_fraction(QAndroidJniObject obj) { __thiz = obj; }
		R_fraction()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_FRACTION


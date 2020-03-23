#pragma once

#ifndef ANDROID_R_PLURALS
#define ANDROID_R_PLURALS

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_plurals : public __JniBaseClass
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
	void R_plurals::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$plurals",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_plurals : public __jni_impl::android::R_plurals
	{
	public:
		R_plurals(QAndroidJniObject obj) { __thiz = obj; }
		R_plurals()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_PLURALS


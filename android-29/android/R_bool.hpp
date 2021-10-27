#pragma once

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_bool : public __JniBaseClass
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
	void R_bool::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$bool",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_bool : public __jni_impl::android::R_bool
	{
	public:
		R_bool(QAndroidJniObject obj) { __thiz = obj; }
		R_bool()
		{
			__constructor();
		}
	};
} // namespace android


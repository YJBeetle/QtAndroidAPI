#pragma once

#ifndef ANDROID_R_MENU
#define ANDROID_R_MENU

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_menu : public __JniBaseClass
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
	void R_menu::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$menu",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_menu : public __jni_impl::android::R_menu
	{
	public:
		R_menu(QAndroidJniObject obj) { __thiz = obj; }
		R_menu()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_MENU


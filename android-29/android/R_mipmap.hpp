#pragma once

#ifndef ANDROID_R_MIPMAP
#define ANDROID_R_MIPMAP

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_mipmap : public __JniBaseClass
	{
	public:
		// Fields
		static jint sym_def_app_icon();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jint R_mipmap::sym_def_app_icon()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$mipmap",
			"sym_def_app_icon");
	}
	
	// Constructors
	void R_mipmap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$mipmap",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_mipmap : public __jni_impl::android::R_mipmap
	{
	public:
		R_mipmap(QAndroidJniObject obj) { __thiz = obj; }
		R_mipmap()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_MIPMAP


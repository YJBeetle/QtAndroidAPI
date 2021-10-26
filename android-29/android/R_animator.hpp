#pragma once

#ifndef ANDROID_R_ANIMATOR
#define ANDROID_R_ANIMATOR

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_animator : public __JniBaseClass
	{
	public:
		// Fields
		static jint fade_in();
		static jint fade_out();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jint R_animator::fade_in()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$animator",
			"fade_in"
		);
	}
	jint R_animator::fade_out()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$animator",
			"fade_out"
		);
	}
	
	// Constructors
	void R_animator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$animator",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_animator : public __jni_impl::android::R_animator
	{
	public:
		R_animator(QAndroidJniObject obj) { __thiz = obj; }
		R_animator()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_ANIMATOR


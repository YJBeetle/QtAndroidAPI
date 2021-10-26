#pragma once

#ifndef ANDROID_R_ANIM
#define ANDROID_R_ANIM

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_anim : public __JniBaseClass
	{
	public:
		// Fields
		static jint accelerate_decelerate_interpolator();
		static jint accelerate_interpolator();
		static jint anticipate_interpolator();
		static jint anticipate_overshoot_interpolator();
		static jint bounce_interpolator();
		static jint cycle_interpolator();
		static jint decelerate_interpolator();
		static jint fade_in();
		static jint fade_out();
		static jint linear_interpolator();
		static jint overshoot_interpolator();
		static jint slide_in_left();
		static jint slide_out_right();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jint R_anim::accelerate_decelerate_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"accelerate_decelerate_interpolator"
		);
	}
	jint R_anim::accelerate_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"accelerate_interpolator"
		);
	}
	jint R_anim::anticipate_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"anticipate_interpolator"
		);
	}
	jint R_anim::anticipate_overshoot_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"anticipate_overshoot_interpolator"
		);
	}
	jint R_anim::bounce_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"bounce_interpolator"
		);
	}
	jint R_anim::cycle_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"cycle_interpolator"
		);
	}
	jint R_anim::decelerate_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"decelerate_interpolator"
		);
	}
	jint R_anim::fade_in()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"fade_in"
		);
	}
	jint R_anim::fade_out()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"fade_out"
		);
	}
	jint R_anim::linear_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"linear_interpolator"
		);
	}
	jint R_anim::overshoot_interpolator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"overshoot_interpolator"
		);
	}
	jint R_anim::slide_in_left()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"slide_in_left"
		);
	}
	jint R_anim::slide_out_right()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$anim",
			"slide_out_right"
		);
	}
	
	// Constructors
	void R_anim::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$anim",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_anim : public __jni_impl::android::R_anim
	{
	public:
		R_anim(QAndroidJniObject obj) { __thiz = obj; }
		R_anim()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_ANIM


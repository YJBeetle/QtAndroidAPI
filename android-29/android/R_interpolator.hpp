#pragma once

#ifndef ANDROID_R_INTERPOLATOR
#define ANDROID_R_INTERPOLATOR

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_interpolator : public __JniBaseClass
	{
	public:
		// Fields
		static jint accelerate_cubic();
		static jint accelerate_decelerate();
		static jint accelerate_quad();
		static jint accelerate_quint();
		static jint anticipate();
		static jint anticipate_overshoot();
		static jint bounce();
		static jint cycle();
		static jint decelerate_cubic();
		static jint decelerate_quad();
		static jint decelerate_quint();
		static jint fast_out_extra_slow_in();
		static jint fast_out_linear_in();
		static jint fast_out_slow_in();
		static jint linear();
		static jint linear_out_slow_in();
		static jint overshoot();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jint R_interpolator::accelerate_cubic()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_cubic"
		);
	}
	jint R_interpolator::accelerate_decelerate()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_decelerate"
		);
	}
	jint R_interpolator::accelerate_quad()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_quad"
		);
	}
	jint R_interpolator::accelerate_quint()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_quint"
		);
	}
	jint R_interpolator::anticipate()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"anticipate"
		);
	}
	jint R_interpolator::anticipate_overshoot()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"anticipate_overshoot"
		);
	}
	jint R_interpolator::bounce()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"bounce"
		);
	}
	jint R_interpolator::cycle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"cycle"
		);
	}
	jint R_interpolator::decelerate_cubic()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_cubic"
		);
	}
	jint R_interpolator::decelerate_quad()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_quad"
		);
	}
	jint R_interpolator::decelerate_quint()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_quint"
		);
	}
	jint R_interpolator::fast_out_extra_slow_in()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_extra_slow_in"
		);
	}
	jint R_interpolator::fast_out_linear_in()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_linear_in"
		);
	}
	jint R_interpolator::fast_out_slow_in()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_slow_in"
		);
	}
	jint R_interpolator::linear()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"linear"
		);
	}
	jint R_interpolator::linear_out_slow_in()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"linear_out_slow_in"
		);
	}
	jint R_interpolator::overshoot()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$interpolator",
			"overshoot"
		);
	}
	
	// Constructors
	void R_interpolator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$interpolator",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_interpolator : public __jni_impl::android::R_interpolator
	{
	public:
		R_interpolator(QAndroidJniObject obj) { __thiz = obj; }
		R_interpolator()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_INTERPOLATOR


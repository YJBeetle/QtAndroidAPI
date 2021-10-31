#include "./R_interpolator.hpp"

namespace android
{
	// Fields
	jint R_interpolator::accelerate_cubic()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_cubic"
		);
	}
	jint R_interpolator::accelerate_decelerate()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_decelerate"
		);
	}
	jint R_interpolator::accelerate_quad()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_quad"
		);
	}
	jint R_interpolator::accelerate_quint()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_quint"
		);
	}
	jint R_interpolator::anticipate()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"anticipate"
		);
	}
	jint R_interpolator::anticipate_overshoot()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"anticipate_overshoot"
		);
	}
	jint R_interpolator::bounce()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"bounce"
		);
	}
	jint R_interpolator::cycle()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"cycle"
		);
	}
	jint R_interpolator::decelerate_cubic()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_cubic"
		);
	}
	jint R_interpolator::decelerate_quad()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_quad"
		);
	}
	jint R_interpolator::decelerate_quint()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_quint"
		);
	}
	jint R_interpolator::fast_out_extra_slow_in()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_extra_slow_in"
		);
	}
	jint R_interpolator::fast_out_linear_in()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_linear_in"
		);
	}
	jint R_interpolator::fast_out_slow_in()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_slow_in"
		);
	}
	jint R_interpolator::linear()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"linear"
		);
	}
	jint R_interpolator::linear_out_slow_in()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"linear_out_slow_in"
		);
	}
	jint R_interpolator::overshoot()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"overshoot"
		);
	}
	
	// QJniObject forward
	R_interpolator::R_interpolator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_interpolator::R_interpolator()
		: __JniBaseClass(
			"android.R$interpolator",
			"()V"
		) {}
	
	// Methods
} // namespace android


#pragma once

#include "./R_interpolator.def.hpp"

namespace android
{
	// Fields
	inline jint R_interpolator::accelerate_cubic()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_cubic"
		);
	}
	inline jint R_interpolator::accelerate_decelerate()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_decelerate"
		);
	}
	inline jint R_interpolator::accelerate_quad()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_quad"
		);
	}
	inline jint R_interpolator::accelerate_quint()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"accelerate_quint"
		);
	}
	inline jint R_interpolator::anticipate()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"anticipate"
		);
	}
	inline jint R_interpolator::anticipate_overshoot()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"anticipate_overshoot"
		);
	}
	inline jint R_interpolator::bounce()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"bounce"
		);
	}
	inline jint R_interpolator::cycle()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"cycle"
		);
	}
	inline jint R_interpolator::decelerate_cubic()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_cubic"
		);
	}
	inline jint R_interpolator::decelerate_quad()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_quad"
		);
	}
	inline jint R_interpolator::decelerate_quint()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"decelerate_quint"
		);
	}
	inline jint R_interpolator::fast_out_extra_slow_in()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_extra_slow_in"
		);
	}
	inline jint R_interpolator::fast_out_linear_in()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_linear_in"
		);
	}
	inline jint R_interpolator::fast_out_slow_in()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"fast_out_slow_in"
		);
	}
	inline jint R_interpolator::linear()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"linear"
		);
	}
	inline jint R_interpolator::linear_out_slow_in()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"linear_out_slow_in"
		);
	}
	inline jint R_interpolator::overshoot()
	{
		return getStaticField<jint>(
			"android.R$interpolator",
			"overshoot"
		);
	}
	
	// Constructors
	inline R_interpolator::R_interpolator()
		: JObject(
			"android.R$interpolator",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers


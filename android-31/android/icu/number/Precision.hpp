#pragma once

#include "./CurrencyPrecision.def.hpp"
#include "./FractionPrecision.def.hpp"
#include "../util/Currency_CurrencyUsage.def.hpp"
#include "../../../java/math/BigDecimal.def.hpp"
#include "./Precision.def.hpp"

namespace android::icu::number
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::number::CurrencyPrecision Precision::currency(android::icu::util::Currency_CurrencyUsage arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"currency",
			"(Landroid/icu/util/Currency$CurrencyUsage;)Landroid/icu/number/CurrencyPrecision;",
			arg0.object()
		);
	}
	inline android::icu::number::FractionPrecision Precision::fixedFraction(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"fixedFraction",
			"(I)Landroid/icu/number/FractionPrecision;",
			arg0
		);
	}
	inline android::icu::number::Precision Precision::fixedSignificantDigits(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"fixedSignificantDigits",
			"(I)Landroid/icu/number/Precision;",
			arg0
		);
	}
	inline android::icu::number::Precision Precision::increment(java::math::BigDecimal arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"increment",
			"(Ljava/math/BigDecimal;)Landroid/icu/number/Precision;",
			arg0.object()
		);
	}
	inline android::icu::number::FractionPrecision Precision::integer()
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"integer",
			"()Landroid/icu/number/FractionPrecision;"
		);
	}
	inline android::icu::number::FractionPrecision Precision::maxFraction(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"maxFraction",
			"(I)Landroid/icu/number/FractionPrecision;",
			arg0
		);
	}
	inline android::icu::number::Precision Precision::maxSignificantDigits(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"maxSignificantDigits",
			"(I)Landroid/icu/number/Precision;",
			arg0
		);
	}
	inline android::icu::number::FractionPrecision Precision::minFraction(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"minFraction",
			"(I)Landroid/icu/number/FractionPrecision;",
			arg0
		);
	}
	inline android::icu::number::FractionPrecision Precision::minMaxFraction(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"minMaxFraction",
			"(II)Landroid/icu/number/FractionPrecision;",
			arg0,
			arg1
		);
	}
	inline android::icu::number::Precision Precision::minMaxSignificantDigits(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"minMaxSignificantDigits",
			"(II)Landroid/icu/number/Precision;",
			arg0,
			arg1
		);
	}
	inline android::icu::number::Precision Precision::minSignificantDigits(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"minSignificantDigits",
			"(I)Landroid/icu/number/Precision;",
			arg0
		);
	}
	inline android::icu::number::Precision Precision::unlimited()
	{
		return callStaticObjectMethod(
			"android.icu.number.Precision",
			"unlimited",
			"()Landroid/icu/number/Precision;"
		);
	}
} // namespace android::icu::number

// Base class headers


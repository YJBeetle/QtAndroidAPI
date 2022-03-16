#pragma once

#include "./DisplayMetrics.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TypedValue.def.hpp"

namespace android::util
{
	// Fields
	inline jint TypedValue::COMPLEX_MANTISSA_MASK()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_MANTISSA_MASK"
		);
	}
	inline jint TypedValue::COMPLEX_MANTISSA_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_MANTISSA_SHIFT"
		);
	}
	inline jint TypedValue::COMPLEX_RADIX_0p23()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_0p23"
		);
	}
	inline jint TypedValue::COMPLEX_RADIX_16p7()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_16p7"
		);
	}
	inline jint TypedValue::COMPLEX_RADIX_23p0()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_23p0"
		);
	}
	inline jint TypedValue::COMPLEX_RADIX_8p15()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_8p15"
		);
	}
	inline jint TypedValue::COMPLEX_RADIX_MASK()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_MASK"
		);
	}
	inline jint TypedValue::COMPLEX_RADIX_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_SHIFT"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_DIP()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_DIP"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_FRACTION()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_FRACTION"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_FRACTION_PARENT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_FRACTION_PARENT"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_IN()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_IN"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_MASK()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_MASK"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_MM()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_MM"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_PT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_PT"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_PX()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_PX"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_SHIFT"
		);
	}
	inline jint TypedValue::COMPLEX_UNIT_SP()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_SP"
		);
	}
	inline jint TypedValue::DATA_NULL_EMPTY()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"DATA_NULL_EMPTY"
		);
	}
	inline jint TypedValue::DATA_NULL_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"DATA_NULL_UNDEFINED"
		);
	}
	inline jint TypedValue::DENSITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"DENSITY_DEFAULT"
		);
	}
	inline jint TypedValue::DENSITY_NONE()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"DENSITY_NONE"
		);
	}
	inline jint TypedValue::TYPE_ATTRIBUTE()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_ATTRIBUTE"
		);
	}
	inline jint TypedValue::TYPE_DIMENSION()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_DIMENSION"
		);
	}
	inline jint TypedValue::TYPE_FIRST_COLOR_INT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FIRST_COLOR_INT"
		);
	}
	inline jint TypedValue::TYPE_FIRST_INT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FIRST_INT"
		);
	}
	inline jint TypedValue::TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FLOAT"
		);
	}
	inline jint TypedValue::TYPE_FRACTION()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FRACTION"
		);
	}
	inline jint TypedValue::TYPE_INT_BOOLEAN()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_BOOLEAN"
		);
	}
	inline jint TypedValue::TYPE_INT_COLOR_ARGB4()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_ARGB4"
		);
	}
	inline jint TypedValue::TYPE_INT_COLOR_ARGB8()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_ARGB8"
		);
	}
	inline jint TypedValue::TYPE_INT_COLOR_RGB4()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_RGB4"
		);
	}
	inline jint TypedValue::TYPE_INT_COLOR_RGB8()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_RGB8"
		);
	}
	inline jint TypedValue::TYPE_INT_DEC()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_DEC"
		);
	}
	inline jint TypedValue::TYPE_INT_HEX()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_HEX"
		);
	}
	inline jint TypedValue::TYPE_LAST_COLOR_INT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_LAST_COLOR_INT"
		);
	}
	inline jint TypedValue::TYPE_LAST_INT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_LAST_INT"
		);
	}
	inline jint TypedValue::TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_NULL"
		);
	}
	inline jint TypedValue::TYPE_REFERENCE()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_REFERENCE"
		);
	}
	inline jint TypedValue::TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_STRING"
		);
	}
	inline jint TypedValue::assetCookie()
	{
		return getField<jint>(
			"assetCookie"
		);
	}
	inline jint TypedValue::changingConfigurations()
	{
		return getField<jint>(
			"changingConfigurations"
		);
	}
	inline jint TypedValue::data()
	{
		return getField<jint>(
			"data"
		);
	}
	inline jint TypedValue::density()
	{
		return getField<jint>(
			"density"
		);
	}
	inline jint TypedValue::resourceId()
	{
		return getField<jint>(
			"resourceId"
		);
	}
	inline JString TypedValue::string()
	{
		return getObjectField(
			"string",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint TypedValue::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// Constructors
	inline TypedValue::TypedValue()
		: JObject(
			"android.util.TypedValue",
			"()V"
		) {}
	
	// Methods
	inline jfloat TypedValue::applyDimension(jint arg0, jfloat arg1, android::util::DisplayMetrics arg2)
	{
		return callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"applyDimension",
			"(IFLandroid/util/DisplayMetrics;)F",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline JString TypedValue::coerceToString(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.TypedValue",
			"coerceToString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline jfloat TypedValue::complexToDimension(jint arg0, android::util::DisplayMetrics arg1)
	{
		return callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"complexToDimension",
			"(ILandroid/util/DisplayMetrics;)F",
			arg0,
			arg1.object()
		);
	}
	inline jint TypedValue::complexToDimensionPixelOffset(jint arg0, android::util::DisplayMetrics arg1)
	{
		return callStaticMethod<jint>(
			"android.util.TypedValue",
			"complexToDimensionPixelOffset",
			"(ILandroid/util/DisplayMetrics;)I",
			arg0,
			arg1.object()
		);
	}
	inline jint TypedValue::complexToDimensionPixelSize(jint arg0, android::util::DisplayMetrics arg1)
	{
		return callStaticMethod<jint>(
			"android.util.TypedValue",
			"complexToDimensionPixelSize",
			"(ILandroid/util/DisplayMetrics;)I",
			arg0,
			arg1.object()
		);
	}
	inline jfloat TypedValue::complexToFloat(jint arg0)
	{
		return callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"complexToFloat",
			"(I)F",
			arg0
		);
	}
	inline jfloat TypedValue::complexToFraction(jint arg0, jfloat arg1, jfloat arg2)
	{
		return callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"complexToFraction",
			"(IFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	inline JString TypedValue::coerceToString() const
	{
		return callObjectMethod(
			"coerceToString",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TypedValue::getComplexUnit() const
	{
		return callMethod<jint>(
			"getComplexUnit",
			"()I"
		);
	}
	inline jfloat TypedValue::getDimension(android::util::DisplayMetrics arg0) const
	{
		return callMethod<jfloat>(
			"getDimension",
			"(Landroid/util/DisplayMetrics;)F",
			arg0.object()
		);
	}
	inline jfloat TypedValue::getFloat() const
	{
		return callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	inline jfloat TypedValue::getFraction(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFraction",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline void TypedValue::setTo(android::util::TypedValue arg0) const
	{
		callMethod<void>(
			"setTo",
			"(Landroid/util/TypedValue;)V",
			arg0.object()
		);
	}
	inline JString TypedValue::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

// Base class headers


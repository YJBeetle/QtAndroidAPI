#include "./DisplayMetrics.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TypedValue.hpp"

namespace android::util
{
	// Fields
	jint TypedValue::COMPLEX_MANTISSA_MASK()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_MANTISSA_MASK"
		);
	}
	jint TypedValue::COMPLEX_MANTISSA_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_MANTISSA_SHIFT"
		);
	}
	jint TypedValue::COMPLEX_RADIX_0p23()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_0p23"
		);
	}
	jint TypedValue::COMPLEX_RADIX_16p7()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_16p7"
		);
	}
	jint TypedValue::COMPLEX_RADIX_23p0()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_23p0"
		);
	}
	jint TypedValue::COMPLEX_RADIX_8p15()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_8p15"
		);
	}
	jint TypedValue::COMPLEX_RADIX_MASK()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_MASK"
		);
	}
	jint TypedValue::COMPLEX_RADIX_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_SHIFT"
		);
	}
	jint TypedValue::COMPLEX_UNIT_DIP()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_DIP"
		);
	}
	jint TypedValue::COMPLEX_UNIT_FRACTION()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_FRACTION"
		);
	}
	jint TypedValue::COMPLEX_UNIT_FRACTION_PARENT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_FRACTION_PARENT"
		);
	}
	jint TypedValue::COMPLEX_UNIT_IN()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_IN"
		);
	}
	jint TypedValue::COMPLEX_UNIT_MASK()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_MASK"
		);
	}
	jint TypedValue::COMPLEX_UNIT_MM()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_MM"
		);
	}
	jint TypedValue::COMPLEX_UNIT_PT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_PT"
		);
	}
	jint TypedValue::COMPLEX_UNIT_PX()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_PX"
		);
	}
	jint TypedValue::COMPLEX_UNIT_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_SHIFT"
		);
	}
	jint TypedValue::COMPLEX_UNIT_SP()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_SP"
		);
	}
	jint TypedValue::DATA_NULL_EMPTY()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"DATA_NULL_EMPTY"
		);
	}
	jint TypedValue::DATA_NULL_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"DATA_NULL_UNDEFINED"
		);
	}
	jint TypedValue::DENSITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"DENSITY_DEFAULT"
		);
	}
	jint TypedValue::DENSITY_NONE()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"DENSITY_NONE"
		);
	}
	jint TypedValue::TYPE_ATTRIBUTE()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_ATTRIBUTE"
		);
	}
	jint TypedValue::TYPE_DIMENSION()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_DIMENSION"
		);
	}
	jint TypedValue::TYPE_FIRST_COLOR_INT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FIRST_COLOR_INT"
		);
	}
	jint TypedValue::TYPE_FIRST_INT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FIRST_INT"
		);
	}
	jint TypedValue::TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FLOAT"
		);
	}
	jint TypedValue::TYPE_FRACTION()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FRACTION"
		);
	}
	jint TypedValue::TYPE_INT_BOOLEAN()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_BOOLEAN"
		);
	}
	jint TypedValue::TYPE_INT_COLOR_ARGB4()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_ARGB4"
		);
	}
	jint TypedValue::TYPE_INT_COLOR_ARGB8()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_ARGB8"
		);
	}
	jint TypedValue::TYPE_INT_COLOR_RGB4()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_RGB4"
		);
	}
	jint TypedValue::TYPE_INT_COLOR_RGB8()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_RGB8"
		);
	}
	jint TypedValue::TYPE_INT_DEC()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_DEC"
		);
	}
	jint TypedValue::TYPE_INT_HEX()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_HEX"
		);
	}
	jint TypedValue::TYPE_LAST_COLOR_INT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_LAST_COLOR_INT"
		);
	}
	jint TypedValue::TYPE_LAST_INT()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_LAST_INT"
		);
	}
	jint TypedValue::TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_NULL"
		);
	}
	jint TypedValue::TYPE_REFERENCE()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_REFERENCE"
		);
	}
	jint TypedValue::TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_STRING"
		);
	}
	jint TypedValue::assetCookie()
	{
		return getField<jint>(
			"assetCookie"
		);
	}
	jint TypedValue::changingConfigurations()
	{
		return getField<jint>(
			"changingConfigurations"
		);
	}
	jint TypedValue::data()
	{
		return getField<jint>(
			"data"
		);
	}
	jint TypedValue::density()
	{
		return getField<jint>(
			"density"
		);
	}
	jint TypedValue::resourceId()
	{
		return getField<jint>(
			"resourceId"
		);
	}
	JString TypedValue::string()
	{
		return getObjectField(
			"string",
			"Ljava/lang/CharSequence;"
		);
	}
	jint TypedValue::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// QJniObject forward
	TypedValue::TypedValue(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TypedValue::TypedValue()
		: JObject(
			"android.util.TypedValue",
			"()V"
		) {}
	
	// Methods
	jfloat TypedValue::applyDimension(jint arg0, jfloat arg1, android::util::DisplayMetrics arg2)
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
	JString TypedValue::coerceToString(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.TypedValue",
			"coerceToString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	jfloat TypedValue::complexToDimension(jint arg0, android::util::DisplayMetrics arg1)
	{
		return callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"complexToDimension",
			"(ILandroid/util/DisplayMetrics;)F",
			arg0,
			arg1.object()
		);
	}
	jint TypedValue::complexToDimensionPixelOffset(jint arg0, android::util::DisplayMetrics arg1)
	{
		return callStaticMethod<jint>(
			"android.util.TypedValue",
			"complexToDimensionPixelOffset",
			"(ILandroid/util/DisplayMetrics;)I",
			arg0,
			arg1.object()
		);
	}
	jint TypedValue::complexToDimensionPixelSize(jint arg0, android::util::DisplayMetrics arg1)
	{
		return callStaticMethod<jint>(
			"android.util.TypedValue",
			"complexToDimensionPixelSize",
			"(ILandroid/util/DisplayMetrics;)I",
			arg0,
			arg1.object()
		);
	}
	jfloat TypedValue::complexToFloat(jint arg0)
	{
		return callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"complexToFloat",
			"(I)F",
			arg0
		);
	}
	jfloat TypedValue::complexToFraction(jint arg0, jfloat arg1, jfloat arg2)
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
	JString TypedValue::coerceToString() const
	{
		return callObjectMethod(
			"coerceToString",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint TypedValue::getComplexUnit() const
	{
		return callMethod<jint>(
			"getComplexUnit",
			"()I"
		);
	}
	jfloat TypedValue::getDimension(android::util::DisplayMetrics arg0) const
	{
		return callMethod<jfloat>(
			"getDimension",
			"(Landroid/util/DisplayMetrics;)F",
			arg0.object()
		);
	}
	jfloat TypedValue::getFloat() const
	{
		return callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	jfloat TypedValue::getFraction(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFraction",
			"(FF)F",
			arg0,
			arg1
		);
	}
	void TypedValue::setTo(android::util::TypedValue arg0) const
	{
		callMethod<void>(
			"setTo",
			"(Landroid/util/TypedValue;)V",
			arg0.object()
		);
	}
	JString TypedValue::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util


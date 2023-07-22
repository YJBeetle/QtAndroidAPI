#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberFormatter_UnitWidth.def.hpp"

namespace android::icu::number
{
	// Fields
	inline android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::FORMAL()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"FORMAL",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	inline android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::FULL_NAME()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"FULL_NAME",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	inline android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::HIDDEN()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"HIDDEN",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	inline android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::ISO_CODE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"ISO_CODE",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	inline android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::NARROW()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"NARROW",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	inline android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::SHORT()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"SHORT",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	inline android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::VARIANT()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"VARIANT",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$UnitWidth",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$UnitWidth;",
			arg0.object<jstring>()
		);
	}
	inline JArray NumberFormatter_UnitWidth::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$UnitWidth",
			"values",
			"()[Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
} // namespace android::icu::number

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::number;
#endif

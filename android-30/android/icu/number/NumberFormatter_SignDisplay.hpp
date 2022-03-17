#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberFormatter_SignDisplay.def.hpp"

namespace android::icu::number
{
	// Fields
	inline android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::ACCOUNTING()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"ACCOUNTING",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	inline android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::ACCOUNTING_ALWAYS()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"ACCOUNTING_ALWAYS",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	inline android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::ACCOUNTING_EXCEPT_ZERO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"ACCOUNTING_EXCEPT_ZERO",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	inline android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::ALWAYS()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"ALWAYS",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	inline android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::AUTO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"AUTO",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	inline android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::EXCEPT_ZERO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"EXCEPT_ZERO",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	inline android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::NEVER()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"NEVER",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$SignDisplay",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$SignDisplay;",
			arg0.object<jstring>()
		);
	}
	inline JArray NumberFormatter_SignDisplay::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$SignDisplay",
			"values",
			"()[Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
} // namespace android::icu::number

// Base class headers
#include "../../../java/lang/Enum.hpp"


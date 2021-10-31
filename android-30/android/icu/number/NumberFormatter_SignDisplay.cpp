#include "./NumberFormatter_SignDisplay.hpp"

namespace android::icu::number
{
	// Fields
	android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::ACCOUNTING()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"ACCOUNTING",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::ACCOUNTING_ALWAYS()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"ACCOUNTING_ALWAYS",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::ACCOUNTING_EXCEPT_ZERO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"ACCOUNTING_EXCEPT_ZERO",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::ALWAYS()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"ALWAYS",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::AUTO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"AUTO",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::EXCEPT_ZERO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"EXCEPT_ZERO",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::NEVER()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$SignDisplay",
			"NEVER",
			"Landroid/icu/number/NumberFormatter$SignDisplay;"
		);
	}
	
	// QJniObject forward
	NumberFormatter_SignDisplay::NumberFormatter_SignDisplay(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberFormatter_SignDisplay NumberFormatter_SignDisplay::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$SignDisplay",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$SignDisplay;",
			arg0
		);
	}
	jarray NumberFormatter_SignDisplay::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$SignDisplay",
			"values",
			"()[Landroid/icu/number/NumberFormatter$SignDisplay;"
		).object<jarray>();
	}
} // namespace android::icu::number


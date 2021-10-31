#include "./NumberFormatter_DecimalSeparatorDisplay.hpp"

namespace android::icu::number
{
	// Fields
	android::icu::number::NumberFormatter_DecimalSeparatorDisplay NumberFormatter_DecimalSeparatorDisplay::ALWAYS()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$DecimalSeparatorDisplay",
			"ALWAYS",
			"Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;"
		);
	}
	android::icu::number::NumberFormatter_DecimalSeparatorDisplay NumberFormatter_DecimalSeparatorDisplay::AUTO()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$DecimalSeparatorDisplay",
			"AUTO",
			"Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;"
		);
	}
	
	// QAndroidJniObject forward
	NumberFormatter_DecimalSeparatorDisplay::NumberFormatter_DecimalSeparatorDisplay(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberFormatter_DecimalSeparatorDisplay NumberFormatter_DecimalSeparatorDisplay::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$DecimalSeparatorDisplay",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;",
			arg0
		);
	}
	jarray NumberFormatter_DecimalSeparatorDisplay::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$DecimalSeparatorDisplay",
			"values",
			"()[Landroid/icu/number/NumberFormatter$DecimalSeparatorDisplay;"
		).object<jarray>();
	}
} // namespace android::icu::number


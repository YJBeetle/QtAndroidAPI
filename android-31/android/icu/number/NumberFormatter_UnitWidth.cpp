#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./NumberFormatter_UnitWidth.hpp"

namespace android::icu::number
{
	// Fields
	android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::FULL_NAME()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"FULL_NAME",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::HIDDEN()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"HIDDEN",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::ISO_CODE()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"ISO_CODE",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::NARROW()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"NARROW",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::SHORT()
	{
		return getStaticObjectField(
			"android.icu.number.NumberFormatter$UnitWidth",
			"SHORT",
			"Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
	
	// QAndroidJniObject forward
	NumberFormatter_UnitWidth::NumberFormatter_UnitWidth(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::NumberFormatter_UnitWidth NumberFormatter_UnitWidth::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$UnitWidth",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/number/NumberFormatter$UnitWidth;",
			arg0.object<jstring>()
		);
	}
	JArray NumberFormatter_UnitWidth::values()
	{
		return callStaticObjectMethod(
			"android.icu.number.NumberFormatter$UnitWidth",
			"values",
			"()[Landroid/icu/number/NumberFormatter$UnitWidth;"
		);
	}
} // namespace android::icu::number


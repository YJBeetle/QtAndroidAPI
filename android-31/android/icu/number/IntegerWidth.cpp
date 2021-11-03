#include "./IntegerWidth.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	IntegerWidth::IntegerWidth(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::IntegerWidth IntegerWidth::zeroFillTo(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.number.IntegerWidth",
			"zeroFillTo",
			"(I)Landroid/icu/number/IntegerWidth;",
			arg0
		);
	}
	android::icu::number::IntegerWidth IntegerWidth::truncateAt(jint arg0) const
	{
		return callObjectMethod(
			"truncateAt",
			"(I)Landroid/icu/number/IntegerWidth;",
			arg0
		);
	}
} // namespace android::icu::number


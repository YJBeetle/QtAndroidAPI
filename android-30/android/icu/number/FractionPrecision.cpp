#include "./Precision.hpp"
#include "./FractionPrecision.hpp"

namespace android::icu::number
{
	// Fields
	
	// QAndroidJniObject forward
	FractionPrecision::FractionPrecision(QAndroidJniObject obj) : android::icu::number::Precision(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::Precision FractionPrecision::withMaxDigits(jint arg0) const
	{
		return callObjectMethod(
			"withMaxDigits",
			"(I)Landroid/icu/number/Precision;",
			arg0
		);
	}
	android::icu::number::Precision FractionPrecision::withMinDigits(jint arg0) const
	{
		return callObjectMethod(
			"withMinDigits",
			"(I)Landroid/icu/number/Precision;",
			arg0
		);
	}
} // namespace android::icu::number


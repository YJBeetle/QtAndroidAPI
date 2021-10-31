#include "./NumberFormatter_SignDisplay.hpp"
#include "./ScientificNotation.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	ScientificNotation::ScientificNotation(QJniObject obj) : android::icu::number::Notation(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::number::ScientificNotation ScientificNotation::withExponentSignDisplay(android::icu::number::NumberFormatter_SignDisplay arg0)
	{
		return callObjectMethod(
			"withExponentSignDisplay",
			"(Landroid/icu/number/NumberFormatter$SignDisplay;)Landroid/icu/number/ScientificNotation;",
			arg0.object()
		);
	}
	android::icu::number::ScientificNotation ScientificNotation::withMinExponentDigits(jint arg0)
	{
		return callObjectMethod(
			"withMinExponentDigits",
			"(I)Landroid/icu/number/ScientificNotation;",
			arg0
		);
	}
} // namespace android::icu::number


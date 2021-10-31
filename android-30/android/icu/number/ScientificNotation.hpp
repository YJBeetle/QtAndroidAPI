#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Notation.hpp"

namespace android::icu::number
{
	class NumberFormatter_SignDisplay;
}

namespace android::icu::number
{
	class ScientificNotation : public android::icu::number::Notation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScientificNotation(const char *className, const char *sig, Ts...agv) : android::icu::number::Notation(className, sig, std::forward<Ts>(agv)...) {}
		ScientificNotation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::ScientificNotation withExponentSignDisplay(android::icu::number::NumberFormatter_SignDisplay arg0);
		android::icu::number::ScientificNotation withMinExponentDigits(jint arg0);
	};
} // namespace android::icu::number


#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/AttributedCharacterIterator_Attribute.hpp"
#include "../../../java/text/Format_Field.hpp"


namespace android::icu::text
{
	class NumberFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static android::icu::text::NumberFormat_Field COMPACT();
		static android::icu::text::NumberFormat_Field CURRENCY();
		static android::icu::text::NumberFormat_Field DECIMAL_SEPARATOR();
		static android::icu::text::NumberFormat_Field EXPONENT();
		static android::icu::text::NumberFormat_Field EXPONENT_SIGN();
		static android::icu::text::NumberFormat_Field EXPONENT_SYMBOL();
		static android::icu::text::NumberFormat_Field FRACTION();
		static android::icu::text::NumberFormat_Field GROUPING_SEPARATOR();
		static android::icu::text::NumberFormat_Field INTEGER();
		static android::icu::text::NumberFormat_Field MEASURE_UNIT();
		static android::icu::text::NumberFormat_Field PERCENT();
		static android::icu::text::NumberFormat_Field PERMILLE();
		static android::icu::text::NumberFormat_Field SIGN();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormat_Field(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::text


#pragma once

#include "./Format_Field.def.hpp"

class JObject;
class JString;

namespace java::text
{
	class NumberFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static java::text::NumberFormat_Field CURRENCY();
		static java::text::NumberFormat_Field DECIMAL_SEPARATOR();
		static java::text::NumberFormat_Field EXPONENT();
		static java::text::NumberFormat_Field EXPONENT_SIGN();
		static java::text::NumberFormat_Field EXPONENT_SYMBOL();
		static java::text::NumberFormat_Field FRACTION();
		static java::text::NumberFormat_Field GROUPING_SEPARATOR();
		static java::text::NumberFormat_Field INTEGER();
		static java::text::NumberFormat_Field PERCENT();
		static java::text::NumberFormat_Field PERMILLE();
		static java::text::NumberFormat_Field PREFIX();
		static java::text::NumberFormat_Field SIGN();
		static java::text::NumberFormat_Field SUFFIX();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormat_Field(QJniObject obj) : java::text::Format_Field(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::text

